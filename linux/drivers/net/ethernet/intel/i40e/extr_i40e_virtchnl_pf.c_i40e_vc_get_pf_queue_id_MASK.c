
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct TYPE_2__ {int * queue_mapping; int mapping_flags; } ;
struct i40e_vsi {TYPE_1__ info; } ;
struct i40e_vf {struct i40e_pf* pf; } ;
struct i40e_pf {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct i40e_vsi* FUNC_0 (struct i40e_pf*,size_t) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct i40e_vf *VAR_2, u16 VAR_3,
       u8 VAR_4)
{
 struct i40e_pf *VAR_5 = VAR_2->pf;
 struct i40e_vsi *VAR_6 = FUNC_0(VAR_5, VAR_3);
 u16 VAR_7 = VAR_1;

 if (!VAR_6)
  return VAR_7;

 if (FUNC_1(VAR_6->info.mapping_flags) &
     VAR_0)
  VAR_7 =
   FUNC_1(VAR_6->info.queue_mapping[VAR_4]);
 else
  VAR_7 = FUNC_1(VAR_6->info.queue_mapping[0]) +
         VAR_4;

 return VAR_7;
}
