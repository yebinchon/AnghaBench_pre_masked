
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct amd_ntb_dev {int msix_vec_count; TYPE_2__ ntb; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amd_ntb_dev*,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(struct amd_ntb_dev *VAR_2, int VAR_3)
{
 FUNC_1(&VAR_2->ntb.pdev->dev, "vec %d\n", VAR_3);

 if (VAR_3 > (VAR_0 - 1) || (VAR_2->msix_vec_count == 1))
  FUNC_0(VAR_2, VAR_3);

 if (VAR_3 < VAR_0)
  FUNC_2(&VAR_2->ntb, VAR_3);

 return VAR_1;
}
