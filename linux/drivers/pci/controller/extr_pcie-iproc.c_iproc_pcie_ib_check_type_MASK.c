
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iproc_pcie_ib_map {int type; } ;
typedef enum iproc_pcie_ib_map_type { ____Placeholder_iproc_pcie_ib_map_type } iproc_pcie_ib_map_type ;



__attribute__((used)) static inline bool FUNC_0(const struct iproc_pcie_ib_map *VAR_0,
         enum iproc_pcie_ib_map_type VAR_1)
{
 return !!(VAR_0->type == VAR_1);
}
