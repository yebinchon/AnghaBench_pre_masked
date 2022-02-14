
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int flags; TYPE_1__* pdev; int int_name; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_3 ;
 int FUNC_1 (struct i40e_vsi*,char*) ;
 int FUNC_2 (int ,int ,int ,int ,struct i40e_pf*) ;

__attribute__((used)) static int FUNC_3(struct i40e_vsi *VAR_4, char *VAR_5)
{
 struct i40e_pf *VAR_6 = VAR_4->back;
 int VAR_7;

 if (VAR_6->flags & VAR_0)
  VAR_7 = FUNC_1(VAR_4, VAR_5);
 else if (VAR_6->flags & VAR_1)
  VAR_7 = FUNC_2(VAR_6->pdev->irq, VAR_3, 0,
      VAR_6->int_name, VAR_6);
 else
  VAR_7 = FUNC_2(VAR_6->pdev->irq, VAR_3, VAR_2,
      VAR_6->int_name, VAR_6);

 if (VAR_7)
  FUNC_0(&VAR_6->pdev->dev, "request_irq failed, Error %d\n", VAR_7);

 return VAR_7;
}
