
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_sp_nve_mc_record {int dummy; } ;
struct TYPE_2__ {int addr6_kvdl_index; } ;
struct mlxsw_sp_nve_mc_entry {TYPE_1__ ipv6_entry; } ;


 int FUNC_0 (char*,unsigned int,int ) ;

__attribute__((used)) static void
FUNC_1(const struct mlxsw_sp_nve_mc_record *VAR_0,
          const struct mlxsw_sp_nve_mc_entry *VAR_1,
          char *VAR_2, unsigned int VAR_3)
{
 u32 VAR_4 = VAR_1->ipv6_entry.addr6_kvdl_index;

 FUNC_0(VAR_2, VAR_3, VAR_4);
}
