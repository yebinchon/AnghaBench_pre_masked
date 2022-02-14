
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct kvaser_pciefd_rx_packet {int* header; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct kvaser_pciefd_can {int cmd_seq; int start_comp; int bec_poll_timer; TYPE_1__ can; scalar_t__ reg_base; } ;
struct kvaser_pciefd {size_t nr_channels; struct kvaser_pciefd_can** can; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct kvaser_pciefd_can*,struct kvaser_pciefd_rx_packet*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(struct kvaser_pciefd *VAR_24,
           struct kvaser_pciefd_rx_packet *VAR_25)
{
 struct kvaser_pciefd_can *VAR_26;
 u8 VAR_27;
 u32 VAR_28;
 u8 VAR_29 = (VAR_25->header[1] >> VAR_18) & 0x7;

 if (VAR_29 >= VAR_24->nr_channels)
  return -VAR_2;

 VAR_26 = VAR_24->can[VAR_29];

 VAR_28 = FUNC_2(VAR_26->reg_base + VAR_15);
 VAR_27 = (VAR_28 >> VAR_16) & 0xff;


 if (VAR_25->header[0] & VAR_22 &&
     VAR_25->header[0] & VAR_23 &&
     VAR_25->header[1] & VAR_20 &&
     VAR_27 == (VAR_25->header[1] & VAR_19) &&
     VAR_28 & VAR_14) {
  u32 VAR_30;

  FUNC_3(VAR_10,
     VAR_26->reg_base + VAR_11);
  VAR_30 = VAR_4;
  VAR_30 |= ++VAR_26->cmd_seq << VAR_6;
  FUNC_3(VAR_30, VAR_26->reg_base + VAR_5);

  FUNC_3(VAR_12,
     VAR_26->reg_base + VAR_9);
 } else if (VAR_25->header[0] & VAR_21 &&
     VAR_25->header[0] & VAR_22 &&
     VAR_27 == (VAR_25->header[1] & VAR_19) &&
     VAR_28 & VAR_14) {

  u8 VAR_31 = FUNC_2(VAR_26->reg_base +
        VAR_17) & 0xff;

  if (!VAR_31)
   FUNC_3(VAR_7,
      VAR_26->reg_base + VAR_8);
 } else if (!(VAR_25->header[1] & VAR_20) &&
     VAR_27 == (VAR_25->header[1] & VAR_19)) {

  FUNC_4(VAR_26, VAR_25);
  if (VAR_26->can.state != VAR_0 &&
      VAR_26->can.state != VAR_1) {
   FUNC_5(&VAR_26->bec_poll_timer,
      VAR_3);
  }
 } else if (VAR_25->header[0] & VAR_23 &&
     !(VAR_28 & VAR_13)) {

  if (!FUNC_1(&VAR_26->start_comp))
   FUNC_0(&VAR_26->start_comp);
 }

 return 0;
}
