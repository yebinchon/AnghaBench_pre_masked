
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int hcc_params; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct xhci_hcd*,char*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct xhci_hcd *VAR_0,
  unsigned int *VAR_1, unsigned int *VAR_2)
{
 unsigned int VAR_3;


 *VAR_2 = FUNC_1(*VAR_1);






 VAR_3 = FUNC_0(VAR_0->hcc_params);
 if (*VAR_2 > VAR_3) {
  FUNC_2(VAR_0, "xHCI HW only supports %u stream ctx entries.\n",
    VAR_3);
  *VAR_2 = VAR_3;
  *VAR_1 = VAR_3;
 }
}
