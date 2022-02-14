
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_pcie {scalar_t__ base; } ;
struct iproc_msi {scalar_t__** reg_offsets; struct iproc_pcie* pcie; } ;
typedef enum iproc_msi_reg { ____Placeholder_iproc_msi_reg } iproc_msi_reg ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_1(struct iproc_msi *VAR_0,
         enum iproc_msi_reg VAR_1,
         unsigned int VAR_2)
{
 struct iproc_pcie *VAR_3 = VAR_0->pcie;

 return FUNC_0(VAR_3->base + VAR_0->reg_offsets[VAR_2][VAR_1]);
}
