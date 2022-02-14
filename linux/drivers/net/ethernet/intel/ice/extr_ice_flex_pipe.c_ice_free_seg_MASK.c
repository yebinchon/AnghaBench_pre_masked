
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_hw {int * seg; scalar_t__ pkg_size; int * pkg_copy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ice_hw*) ;

void FUNC_2(struct ice_hw *VAR_0)
{
 if (VAR_0->pkg_copy) {
  FUNC_0(FUNC_1(VAR_0), VAR_0->pkg_copy);
  VAR_0->pkg_copy = ((void*)0);
  VAR_0->pkg_size = 0;
 }
 VAR_0->seg = ((void*)0);
}
