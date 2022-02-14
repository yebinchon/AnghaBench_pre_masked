
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i40e_pf {int flags; TYPE_1__* pdev; int int_name; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i40e_pf*) ;
 int VAR_3 ;
 int FUNC_2 (struct i40e_pf*) ;
 int FUNC_3 (struct i40e_pf*) ;
 int FUNC_4 (int ,int ,int ,int ,struct i40e_pf*) ;

__attribute__((used)) static int FUNC_5(struct i40e_pf *VAR_4)
{
 int VAR_5;

 if (VAR_4->flags & VAR_0) {
  VAR_5 = FUNC_3(VAR_4);

  if (VAR_5) {
   FUNC_0(&VAR_4->pdev->dev,
     "MSI-X misc vector request failed, error %d\n",
     VAR_5);
   return VAR_5;
  }
 } else {
  u32 VAR_6 = VAR_4->flags & VAR_1 ? 0 : VAR_2;

  VAR_5 = FUNC_4(VAR_4->pdev->irq, VAR_3, VAR_6,
      VAR_4->int_name, VAR_4);

  if (VAR_5) {
   FUNC_0(&VAR_4->pdev->dev,
     "MSI/legacy misc vector request failed, error %d\n",
     VAR_5);
   return VAR_5;
  }
  FUNC_1(VAR_4);
  FUNC_2(VAR_4);
 }

 return 0;
}
