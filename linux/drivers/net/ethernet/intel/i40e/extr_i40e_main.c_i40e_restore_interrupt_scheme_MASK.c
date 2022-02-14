
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_pf {int flags; int num_alloc_vsi; scalar_t__* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i40e_pf*) ;
 int FUNC_1 (struct i40e_pf*) ;
 int FUNC_2 (struct i40e_pf*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct i40e_pf *VAR_3)
{
 int VAR_4, VAR_5;





 VAR_3->flags |= (VAR_1 | VAR_2);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;




 for (VAR_5 = 0; VAR_5 < VAR_3->num_alloc_vsi; VAR_5++) {
  if (VAR_3->vsi[VAR_5]) {
   VAR_4 = FUNC_3(VAR_3->vsi[VAR_5]);
   if (VAR_4)
    goto err_unwind;
   FUNC_5(VAR_3->vsi[VAR_5]);
  }
 }

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto err_unwind;

 if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_3);

 return 0;

err_unwind:
 while (VAR_5--) {
  if (VAR_3->vsi[VAR_5])
   FUNC_4(VAR_3->vsi[VAR_5]);
 }

 return VAR_4;
}
