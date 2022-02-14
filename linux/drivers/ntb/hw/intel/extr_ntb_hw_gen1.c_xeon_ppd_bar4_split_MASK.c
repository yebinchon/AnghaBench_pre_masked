
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct intel_ntb_dev {TYPE_2__ ntb; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static inline int FUNC_1(struct intel_ntb_dev *VAR_1, u8 VAR_2)
{
 if (VAR_2 & VAR_0) {
  FUNC_0(&VAR_1->ntb.pdev->dev, "PPD %d split bar\n", VAR_2);
  return 1;
 }
 return 0;
}
