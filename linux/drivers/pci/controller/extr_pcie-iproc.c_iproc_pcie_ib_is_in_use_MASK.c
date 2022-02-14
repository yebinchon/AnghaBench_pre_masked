
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iproc_pcie_ib_map {int nr_sizes; } ;
struct iproc_pcie {struct iproc_pcie_ib_map* ib_map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct iproc_pcie*,int ) ;

__attribute__((used)) static inline bool FUNC_3(struct iproc_pcie *VAR_1,
        int VAR_2)
{
 const struct iproc_pcie_ib_map *VAR_3 = &VAR_1->ib_map[VAR_2];
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_1, FUNC_1(VAR_0, VAR_2));

 return !!(VAR_4 & (FUNC_0(VAR_3->nr_sizes) - 1));
}
