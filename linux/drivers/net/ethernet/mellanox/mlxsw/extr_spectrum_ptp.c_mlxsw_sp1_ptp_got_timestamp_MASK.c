
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_2__ {size_t ing_types; size_t egr_types; } ;
struct mlxsw_sp_port {TYPE_1__ ptp; } ;
struct mlxsw_sp1_ptp_key {size_t local_port; size_t domain_number; size_t message_type; int ingress; int sequence_id; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; } ;
typedef int key ;


 int FUNC_0 (struct mlxsw_sp1_ptp_key*,int ,int) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp1_ptp_key,int *,int ) ;

void FUNC_2(struct mlxsw_sp *VAR_0, bool VAR_1,
     u8 VAR_2, u8 VAR_3,
     u8 VAR_4, u16 VAR_5,
     u64 VAR_6)
{
 struct mlxsw_sp_port *VAR_7;
 struct mlxsw_sp1_ptp_key VAR_8;
 u8 VAR_9;

 VAR_7 = VAR_0->ports[VAR_2];
 if (!VAR_7)
  return;

 VAR_9 = VAR_1 ? VAR_7->ptp.ing_types :
     VAR_7->ptp.egr_types;




 if (!((1 << VAR_3) & VAR_9))
  return;

 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.local_port = VAR_2;
 VAR_8.domain_number = VAR_4;
 VAR_8.message_type = VAR_3;
 VAR_8.sequence_id = VAR_5;
 VAR_8.ingress = VAR_1;

 FUNC_1(VAR_0, VAR_8, ((void*)0), VAR_6);
}
