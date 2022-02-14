
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_remove_from_physmap {unsigned long gpfn; int domid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct xen_remove_from_physmap*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_2, void *VAR_3)
{
 struct xen_remove_from_physmap VAR_4;

 VAR_4.domid = VAR_0;
 VAR_4.gpfn = VAR_2;
 (void)FUNC_0(VAR_1, &VAR_4);
}
