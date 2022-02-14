
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct iproc_pcie {scalar_t__ base; } ;
typedef enum iproc_pcie_reg { ____Placeholder_iproc_pcie_reg } iproc_pcie_reg ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct iproc_pcie*,int) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_3(struct iproc_pcie *VAR_0,
          enum iproc_pcie_reg VAR_1)
{
 u16 VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (FUNC_0(VAR_2))
  return 0;

 return FUNC_2(VAR_0->base + VAR_2);
}
