
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cnic_local {int int_num; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; TYPE_1__* irq_arr; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {int vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cnic_dev*,int ) ;
 int FUNC_1 (struct cnic_dev*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct cnic_dev *VAR_3)
{
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;
 struct cnic_eth_dev *VAR_5 = VAR_4->ethdev;

 if (!(VAR_5->drv_state & VAR_2))
  return;

 FUNC_1(VAR_3, VAR_0, VAR_4->int_num |
  VAR_1);
 FUNC_0(VAR_3, VAR_0);
 FUNC_2(VAR_5->irq_arr[0].vector);
}
