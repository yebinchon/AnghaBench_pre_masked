
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipr_ioa_cfg {int msi_received; TYPE_2__* host; int msi_wait_q; TYPE_1__* pdev; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int host_lock; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct ipr_ioa_cfg *VAR_3 = (struct ipr_ioa_cfg *)VAR_2;
 unsigned long VAR_4 = 0;
 irqreturn_t VAR_5 = VAR_0;

 FUNC_0(&VAR_3->pdev->dev, "Received IRQ : %d\n", VAR_1);
 FUNC_1(VAR_3->host->host_lock, VAR_4);

 VAR_3->msi_received = 1;
 FUNC_3(&VAR_3->msi_wait_q);

 FUNC_2(VAR_3->host->host_lock, VAR_4);
 return VAR_5;
}
