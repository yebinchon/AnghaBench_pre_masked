
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct can_ctrlmode {scalar_t__ bitrate; int flags; } ;
struct can_priv {int state; int restart_ms; int termination_const_cnt; int bitrate_const_cnt; int data_bitrate_const_cnt; struct can_ctrlmode bitrate_max; struct can_ctrlmode* data_bitrate_const; struct can_ctrlmode* bitrate_const; struct can_ctrlmode* termination_const; int termination; struct can_ctrlmode* data_bittiming_const; struct can_ctrlmode data_bittiming; int (* do_get_berr_counter ) (struct net_device const*,struct can_ctrlmode*) ;struct can_ctrlmode clock; struct can_ctrlmode* bittiming_const; struct can_ctrlmode bittiming; int (* do_get_state ) (struct net_device const*,int*) ;int ctrlmode; } ;
struct can_berr_counter {scalar_t__ bitrate; int flags; } ;
typedef enum can_state { ____Placeholder_can_state } can_state ;
typedef int cm ;
typedef int bec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct can_priv* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,struct can_ctrlmode*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int) ;
 int FUNC_4 (struct net_device const*,int*) ;
 int FUNC_5 (struct net_device const*,struct can_ctrlmode*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_15, const struct net_device *VAR_16)
{
 struct can_priv *VAR_17 = FUNC_0(VAR_16);
 struct can_ctrlmode VAR_18 = {.flags = VAR_17->ctrlmode};
 struct can_berr_counter VAR_19;
 enum can_state VAR_20 = VAR_17->state;

 if (VAR_17->do_get_state)
  VAR_17->do_get_state(VAR_16, &VAR_20);

 if ((VAR_17->bittiming.bitrate &&
      FUNC_1(VAR_15, VAR_4,
       sizeof(VAR_17->bittiming), &VAR_17->bittiming)) ||

     (VAR_17->bittiming_const &&
      FUNC_1(VAR_15, VAR_5,
       sizeof(*VAR_17->bittiming_const), VAR_17->bittiming_const)) ||

     FUNC_1(VAR_15, VAR_6, sizeof(VAR_17->clock), &VAR_17->clock) ||
     FUNC_3(VAR_15, VAR_12, VAR_20) ||
     FUNC_1(VAR_15, VAR_7, sizeof(VAR_18), &VAR_18) ||
     FUNC_3(VAR_15, VAR_11, VAR_17->restart_ms) ||

     (VAR_17->do_get_berr_counter &&
      !VAR_17->do_get_berr_counter(VAR_16, &VAR_19) &&
      FUNC_1(VAR_15, VAR_1, sizeof(VAR_19), &VAR_19)) ||

     (VAR_17->data_bittiming.bitrate &&
      FUNC_1(VAR_15, VAR_9,
       sizeof(VAR_17->data_bittiming), &VAR_17->data_bittiming)) ||

     (VAR_17->data_bittiming_const &&
      FUNC_1(VAR_15, VAR_10,
       sizeof(*VAR_17->data_bittiming_const),
       VAR_17->data_bittiming_const)) ||

     (VAR_17->termination_const &&
      (FUNC_2(VAR_15, VAR_13, VAR_17->termination) ||
       FUNC_1(VAR_15, VAR_14,
        sizeof(*VAR_17->termination_const) *
        VAR_17->termination_const_cnt,
        VAR_17->termination_const))) ||

     (VAR_17->bitrate_const &&
      FUNC_1(VAR_15, VAR_2,
       sizeof(*VAR_17->bitrate_const) *
       VAR_17->bitrate_const_cnt,
       VAR_17->bitrate_const)) ||

     (VAR_17->data_bitrate_const &&
      FUNC_1(VAR_15, VAR_8,
       sizeof(*VAR_17->data_bitrate_const) *
       VAR_17->data_bitrate_const_cnt,
       VAR_17->data_bitrate_const)) ||

     (FUNC_1(VAR_15, VAR_3,
       sizeof(VAR_17->bitrate_max),
       &VAR_17->bitrate_max))
     )

  return -VAR_0;

 return 0;
}
