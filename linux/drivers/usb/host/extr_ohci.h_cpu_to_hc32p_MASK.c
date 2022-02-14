
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ohci_hcd {int dummy; } ;
typedef int __hc32 ;


 scalar_t__ FUNC_0 (struct ohci_hcd const*) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;

__attribute__((used)) static inline __hc32 FUNC_3 (const struct ohci_hcd *VAR_0, const u32 *VAR_1)
{
 return FUNC_0(VAR_0) ?
  FUNC_1(VAR_1) :
  FUNC_2(VAR_1);
}
