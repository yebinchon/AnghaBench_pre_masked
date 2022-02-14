
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vf {scalar_t__ pf_set_mac; } ;


 int FUNC_0 (struct ice_vf*) ;

__attribute__((used)) static bool FUNC_1(struct ice_vf *VAR_0)
{




 if (VAR_0->pf_set_mac && !FUNC_0(VAR_0))
  return 0;

 return 1;
}
