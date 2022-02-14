
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int num_q_vectors; struct i40e_pf* back; } ;
struct i40e_pf {int flags; size_t lan_vsi; struct i40e_vsi** vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct i40e_vsi*,int) ;
 int FUNC_3 (struct i40e_vsi*,int,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct i40e_vsi *VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_4->back;
 int VAR_6, VAR_7, VAR_8, VAR_9;


 if (VAR_5->flags & VAR_1)
  VAR_8 = VAR_4->num_q_vectors;
 else if (VAR_4 == VAR_5->vsi[VAR_5->lan_vsi])
  VAR_8 = 1;
 else
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_3(VAR_4, VAR_7, VAR_9);
  if (VAR_6)
   goto err_out;
  VAR_9 = FUNC_1(VAR_9, VAR_2);
  if (FUNC_4(VAR_9 >= VAR_3))
   VAR_9 = FUNC_0(VAR_2);
 }

 return 0;

err_out:
 while (VAR_7--)
  FUNC_2(VAR_4, VAR_7);

 return VAR_6;
}
