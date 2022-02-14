
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct xen_hvm_param {int value; int index; int domid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct xen_hvm_param*) ;

int FUNC_1(uint64_t VAR_3)
{
 struct xen_hvm_param VAR_4;
 VAR_4.domid = VAR_0;
 VAR_4.index = VAR_2;
 VAR_4.value = VAR_3;
 return FUNC_0(VAR_1, &VAR_4);
}
