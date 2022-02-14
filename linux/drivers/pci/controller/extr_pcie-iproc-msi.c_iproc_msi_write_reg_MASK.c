
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_pcie {scalar_t__ base; } ;
struct iproc_msi {scalar_t__** reg_offsets; struct iproc_pcie* pcie; } ;
typedef enum iproc_msi_reg { ____Placeholder_iproc_msi_reg } iproc_msi_reg ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_1(struct iproc_msi *VAR_0,
           enum iproc_msi_reg VAR_1,
           int VAR_2, u32 VAR_3)
{
 struct iproc_pcie *VAR_4 = VAR_0->pcie;

 FUNC_0(VAR_3, VAR_4->base + VAR_0->reg_offsets[VAR_2][VAR_1]);
}
