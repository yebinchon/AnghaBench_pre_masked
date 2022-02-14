
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct kvaser_pciefd_tx_packet {int* header; int data; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct kvaser_pciefd_can {int echo_idx; TYPE_1__ can; } ;
struct canfd_frame {int can_id; int len; int flags; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct kvaser_pciefd_tx_packet*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct kvaser_pciefd_tx_packet *VAR_15,
        struct kvaser_pciefd_can *VAR_16,
        struct sk_buff *VAR_17)
{
 struct canfd_frame *VAR_18 = (struct canfd_frame *)VAR_17->data;
 int VAR_19;
 int VAR_20 = VAR_16->echo_idx;

 FUNC_4(VAR_15, 0, sizeof(*VAR_15));

 if (VAR_16->can.ctrlmode & VAR_2)
  VAR_15->header[1] |= VAR_14;

 if (VAR_18->can_id & VAR_5)
  VAR_15->header[0] |= VAR_12;

 if (VAR_18->can_id & VAR_3)
  VAR_15->header[0] |= VAR_11;

 VAR_15->header[0] |= VAR_18->can_id & VAR_4;
 VAR_15->header[1] |= FUNC_2(VAR_18->len) << VAR_8;
 VAR_15->header[1] |= VAR_13;

 if (FUNC_1(VAR_17)) {
  VAR_15->header[1] |= VAR_10;
  if (VAR_18->flags & VAR_0)
   VAR_15->header[1] |= VAR_7;
  if (VAR_18->flags & VAR_1)
   VAR_15->header[1] |= VAR_9;
 }

 VAR_15->header[1] |= VAR_20 & VAR_6;

 VAR_19 = VAR_18->len;
 FUNC_3(VAR_15->data, VAR_18->data, VAR_19);

 return FUNC_0(VAR_19, 4);
}
