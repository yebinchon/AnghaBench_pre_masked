
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ice_port_info {int * root; } ;


 int FUNC_0 (struct ice_port_info*,int *) ;

__attribute__((used)) static void FUNC_1(struct ice_port_info *VAR_0)
{
 if (!VAR_0)
  return;
 if (VAR_0->root) {
  FUNC_0(VAR_0, VAR_0->root);
  VAR_0->root = ((void*)0);
 }
}
