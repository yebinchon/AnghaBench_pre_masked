
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vf {int vf_states; } ;
struct ice_pf {int num_alloc_vfs; struct ice_vf* vf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct ice_pf *VAR_1)
{
 struct ice_vf *VAR_2 = VAR_1->vf;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_alloc_vfs; VAR_3++, VAR_2++)
  if (FUNC_0(VAR_0, VAR_2->vf_states))
   return 1;
 return 0;
}
