
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_nhi {int pdev; } ;
struct tb {TYPE_1__* root_switch; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 struct tb* FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct tb_nhi *VAR_1)
{
 struct tb *VAR_2 = FUNC_1(VAR_1->pdev);
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->root_switch->dev, ((void*)0),
        VAR_0);
 return VAR_3 > 0;
}
