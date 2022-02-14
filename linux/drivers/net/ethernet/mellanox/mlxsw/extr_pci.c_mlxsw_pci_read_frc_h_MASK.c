
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlxsw_pci {int free_running_clock_offset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_pci*,int ) ;

__attribute__((used)) static u32 FUNC_2(void *VAR_0)
{
 struct mlxsw_pci *VAR_1 = VAR_0;
 u64 VAR_2;

 VAR_2 = VAR_1->free_running_clock_offset;
 return FUNC_1(VAR_1, FUNC_0(VAR_2));
}
