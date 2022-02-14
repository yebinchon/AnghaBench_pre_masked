
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct mv88e6xxx_ptp_ops {int arr1_sts_reg; int arr0_sts_reg; } ;
struct mv88e6xxx_port_hwtstamp {int rx_queue2; int rx_queue; } ;
struct mv88e6xxx_chip {TYPE_2__* info; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {struct mv88e6xxx_ptp_ops* ptp_ops; } ;


 int FUNC_0 (struct mv88e6xxx_chip*,struct mv88e6xxx_port_hwtstamp*,struct sk_buff*,int ,int *) ;
 struct sk_buff* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mv88e6xxx_chip *VAR_0,
        struct mv88e6xxx_port_hwtstamp *VAR_1)
{
 const struct mv88e6xxx_ptp_ops *VAR_2 = VAR_0->info->ops->ptp_ops;
 struct sk_buff *VAR_3;

 VAR_3 = FUNC_1(&VAR_1->rx_queue);

 if (VAR_3)
  FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2->arr0_sts_reg,
       &VAR_1->rx_queue);

 VAR_3 = FUNC_1(&VAR_1->rx_queue2);
 if (VAR_3)
  FUNC_0(VAR_0, VAR_1, VAR_3, VAR_2->arr1_sts_reg,
       &VAR_1->rx_queue2);
}
