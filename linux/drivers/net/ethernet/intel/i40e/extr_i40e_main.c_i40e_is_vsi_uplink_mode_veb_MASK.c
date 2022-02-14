
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_vsi {size_t veb_idx; struct i40e_pf* back; } ;
struct i40e_veb {int bridge_mode; } ;
struct i40e_pf {TYPE_1__* pdev; struct i40e_veb** veb; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *,char*) ;

int FUNC_1(struct i40e_vsi *VAR_3)
{
 struct i40e_veb *VAR_4;
 struct i40e_pf *VAR_5 = VAR_3->back;


 if (VAR_3->veb_idx >= VAR_2)
  return 1;

 VAR_4 = VAR_5->veb[VAR_3->veb_idx];
 if (!VAR_4) {
  FUNC_0(&VAR_5->pdev->dev,
    "There is no veb associated with the bridge\n");
  return -VAR_1;
 }


 if (VAR_4->bridge_mode & VAR_0) {
  return 0;
 } else {

  return 1;
 }


 return 0;
}
