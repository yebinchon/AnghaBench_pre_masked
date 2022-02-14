
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int l2tag1; } ;
struct TYPE_8__ {TYPE_2__ lo_dword; } ;
struct TYPE_6__ {int status_error_len; } ;
struct TYPE_9__ {TYPE_3__ qword0; TYPE_1__ qword1; } ;
union i40e_rx_desc {TYPE_4__ wb; } ;
typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int protocol; } ;
struct i40e_ring {int netdev; int queue_index; TYPE_5__* vsi; } ;
struct TYPE_10__ {int back; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sk_buff*,int) ;
 int FUNC_5 (TYPE_5__*,struct sk_buff*,union i40e_rx_desc*) ;
 int FUNC_6 (struct i40e_ring*,union i40e_rx_desc*,struct sk_buff*,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_10 (int) ;

void FUNC_11(struct i40e_ring *VAR_9,
        union i40e_rx_desc *VAR_10, struct sk_buff *VAR_11)
{
 u64 VAR_12 = FUNC_8(VAR_10->wb.qword1.status_error_len);
 u32 VAR_13 = (VAR_12 & VAR_3) >>
   VAR_4;
 u32 VAR_14 = VAR_13 & VAR_7;
 u32 VAR_15 = (VAR_13 & VAR_5) >>
     VAR_6;
 u8 VAR_16 = (VAR_12 & VAR_1) >>
        VAR_2;

 if (FUNC_10(VAR_14))
  FUNC_4(VAR_9->vsi->back, VAR_11, VAR_15);

 FUNC_6(VAR_9, VAR_10, VAR_11, VAR_16);

 FUNC_5(VAR_9->vsi, VAR_11, VAR_10);

 FUNC_9(VAR_11, VAR_9->queue_index);

 if (VAR_12 & FUNC_0(VAR_8)) {
  u16 VAR_17 = VAR_10->wb.qword0.lo_dword.l2tag1;

  FUNC_1(VAR_11, FUNC_3(VAR_0),
           FUNC_7(VAR_17));
 }


 VAR_11->protocol = FUNC_2(VAR_11, VAR_9->netdev);
}
