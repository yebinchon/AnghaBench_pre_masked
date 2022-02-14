
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cnic_eth_dev {int num_irq; TYPE_3__* irq_arr; int drv_state; } ;
struct TYPE_5__ {scalar_t__ e1x_sb; scalar_t__ e2_sb; } ;
struct bnx2x {int flags; void* def_status_blk; TYPE_2__ cnic_sb; TYPE_1__* msix_table; struct cnic_eth_dev cnic_eth_dev; } ;
struct TYPE_6__ {int status_blk_num2; int status_blk_num; void* status_blk; int irq_flags; int vector; } ;
struct TYPE_4__ {int vector; } ;


 int FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;

void FUNC_3(struct bnx2x *VAR_5)
{
 struct cnic_eth_dev *VAR_6 = &VAR_5->cnic_eth_dev;

 if (VAR_5->flags & VAR_4) {
  VAR_6->drv_state |= VAR_0;
  VAR_6->irq_arr[0].irq_flags |= VAR_1;
  VAR_6->irq_arr[0].vector = VAR_5->msix_table[1].vector;
 } else {
  VAR_6->drv_state &= ~VAR_0;
  VAR_6->irq_arr[0].irq_flags &= ~VAR_1;
 }
 if (!FUNC_0(VAR_5))
  VAR_6->irq_arr[0].status_blk = (void *)VAR_5->cnic_sb.e2_sb;
 else
  VAR_6->irq_arr[0].status_blk = (void *)VAR_5->cnic_sb.e1x_sb;

 VAR_6->irq_arr[0].status_blk_num = FUNC_1(VAR_5);
 VAR_6->irq_arr[0].status_blk_num2 = FUNC_2(VAR_5);
 VAR_6->irq_arr[1].status_blk = VAR_5->def_status_blk;
 VAR_6->irq_arr[1].status_blk_num = VAR_2;
 VAR_6->irq_arr[1].status_blk_num2 = VAR_3;

 VAR_6->num_irq = 2;
}
