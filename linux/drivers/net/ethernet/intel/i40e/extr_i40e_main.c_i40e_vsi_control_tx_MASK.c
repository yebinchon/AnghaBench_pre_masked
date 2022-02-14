
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int base_queue; int num_queue_pairs; int alloc_queue_pairs; int seid; struct i40e_pf* back; } ;
struct i40e_pf {int dummy; } ;


 int FUNC_0 (int ,struct i40e_pf*,int,int,int) ;
 int FUNC_1 (struct i40e_vsi*) ;

__attribute__((used)) static int FUNC_2(struct i40e_vsi *VAR_0, bool VAR_1)
{
 struct i40e_pf *VAR_2 = VAR_0->back;
 int VAR_3, VAR_4, VAR_5 = 0;

 VAR_4 = VAR_0->base_queue;
 for (VAR_3 = 0; VAR_3 < VAR_0->num_queue_pairs; VAR_3++, VAR_4++) {
  VAR_5 = FUNC_0(VAR_0->seid, VAR_2,
          VAR_4,
          0 , VAR_1);
  if (VAR_5)
   break;

  if (!FUNC_1(VAR_0))
   continue;

  VAR_5 = FUNC_0(VAR_0->seid, VAR_2,
          VAR_4 + VAR_0->alloc_queue_pairs,
          1 , VAR_1);
  if (VAR_5)
   break;
 }
 return VAR_5;
}
