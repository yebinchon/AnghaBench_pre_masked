
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_mfc_dev {TYPE_1__* plat_dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct s5p_mfc_dev*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct s5p_mfc_dev*) ;
 int FUNC_3 (struct s5p_mfc_dev*) ;
 int FUNC_4 (struct s5p_mfc_dev*) ;

__attribute__((used)) static void FUNC_5(struct s5p_mfc_dev *VAR_0)
{
 struct device *VAR_1 = &VAR_0->plat_dev->dev;

 FUNC_2(VAR_0);
 if (FUNC_1(VAR_1) || !FUNC_0(VAR_0))
  FUNC_4(VAR_0);
 else
  FUNC_3(VAR_0);
}
