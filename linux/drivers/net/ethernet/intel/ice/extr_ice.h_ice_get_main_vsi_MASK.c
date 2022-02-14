
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_vsi {int dummy; } ;
struct ice_pf {struct ice_vsi** vsi; } ;



__attribute__((used)) static inline struct ice_vsi *FUNC_0(struct ice_pf *VAR_0)
{
 if (VAR_0->vsi)
  return VAR_0->vsi[0];

 return ((void*)0);
}
