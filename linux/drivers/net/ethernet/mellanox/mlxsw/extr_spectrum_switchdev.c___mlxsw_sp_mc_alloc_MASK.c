
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_mid {int in_hw; struct mlxsw_sp_mid* ports_in_mid; int list; int fid; int addr; } ;
struct mlxsw_sp_bridge_device {int mids_list; int multicast_enabled; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned char const*) ;
 int FUNC_2 (struct mlxsw_sp_mid*) ;
 void* FUNC_3 (size_t,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_mid*,struct mlxsw_sp_bridge_device*) ;

__attribute__((used)) static struct
mlxsw_sp_mid *FUNC_7(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_bridge_device *VAR_2,
      const unsigned char *VAR_3,
      u16 VAR_4)
{
 struct mlxsw_sp_mid *VAR_5;
 size_t VAR_6;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = sizeof(unsigned long) *
       FUNC_0(FUNC_5(VAR_1->core));

 VAR_5->ports_in_mid = FUNC_3(VAR_6, VAR_0);
 if (!VAR_5->ports_in_mid)
  goto err_ports_in_mid_alloc;

 FUNC_1(VAR_5->addr, VAR_3);
 VAR_5->fid = VAR_4;
 VAR_5->in_hw = 0;

 if (!VAR_2->multicast_enabled)
  goto out;

 if (!FUNC_6(VAR_1, VAR_5, VAR_2))
  goto err_write_mdb_entry;

out:
 FUNC_4(&VAR_5->list, &VAR_2->mids_list);
 return VAR_5;

err_write_mdb_entry:
 FUNC_2(VAR_5->ports_in_mid);
err_ports_in_mid_alloc:
 FUNC_2(VAR_5);
 return ((void*)0);
}
