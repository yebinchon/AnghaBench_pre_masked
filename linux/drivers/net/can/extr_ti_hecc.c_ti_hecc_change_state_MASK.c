
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_3__ {scalar_t__ state; } ;
struct ti_hecc_priv {int offload; int ndev; TYPE_1__ can; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int rx_fifo_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct can_frame {void** data; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ,struct can_frame**) ;
 int FUNC_1 (int ,struct can_frame*,int,int) ;
 int FUNC_2 (int *,struct sk_buff*,void*) ;
 void* FUNC_3 (struct ti_hecc_priv*,int ) ;
 scalar_t__ FUNC_4 (int,int) ;
 struct ti_hecc_priv* FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_4,
     enum can_state VAR_5,
     enum can_state VAR_6)
{
 struct ti_hecc_priv *VAR_7 = FUNC_5(VAR_4);
 struct can_frame *VAR_8;
 struct sk_buff *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_7->ndev, &VAR_8);
 if (FUNC_6(!VAR_9)) {
  VAR_7->can.state = FUNC_4(VAR_6, VAR_5);
  return;
 }

 FUNC_1(VAR_7->ndev, VAR_8, VAR_6, VAR_5);

 if (FUNC_4(VAR_6, VAR_5) != VAR_0) {
  VAR_8->data[6] = FUNC_3(VAR_7, VAR_3);
  VAR_8->data[7] = FUNC_3(VAR_7, VAR_2);
 }

 VAR_10 = FUNC_3(VAR_7, VAR_1);
 VAR_11 = FUNC_2(&VAR_7->offload, VAR_9, VAR_10);
 if (VAR_11)
  VAR_4->stats.rx_fifo_errors++;
}
