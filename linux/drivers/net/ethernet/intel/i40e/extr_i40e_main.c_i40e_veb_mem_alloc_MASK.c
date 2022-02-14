
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_veb {int idx; int enabled_tc; struct i40e_pf* pf; } ;
struct i40e_pf {int switch_mutex; struct i40e_veb** veb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct i40e_veb* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i40e_pf *VAR_4)
{
 int VAR_5 = -VAR_0;
 struct i40e_veb *VAR_6;
 int VAR_7;


 FUNC_1(&VAR_4->switch_mutex);







 VAR_7 = 0;
 while ((VAR_7 < VAR_3) && (VAR_4->veb[VAR_7] != ((void*)0)))
  VAR_7++;
 if (VAR_7 >= VAR_3) {
  VAR_5 = -VAR_1;
  goto err_alloc_veb;
 }

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_2);
 if (!VAR_6) {
  VAR_5 = -VAR_1;
  goto err_alloc_veb;
 }
 VAR_6->pf = VAR_4;
 VAR_6->idx = VAR_7;
 VAR_6->enabled_tc = 1;

 VAR_4->veb[VAR_7] = VAR_6;
 VAR_5 = VAR_7;
err_alloc_veb:
 FUNC_2(&VAR_4->switch_mutex);
 return VAR_5;
}
