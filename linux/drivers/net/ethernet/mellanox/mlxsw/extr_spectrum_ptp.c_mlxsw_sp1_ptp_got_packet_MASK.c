
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {size_t ing_types; size_t egr_types; } ;
struct mlxsw_sp_port {TYPE_1__ ptp; } ;
struct mlxsw_sp1_ptp_key {size_t local_port; int ingress; int message_type; int sequence_id; int domain_number; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; } ;
typedef int key ;


 int FUNC_0 (struct mlxsw_sp1_ptp_key*,int ,int) ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp1_ptp_key,struct sk_buff*,int ) ;
 int FUNC_2 (struct mlxsw_sp*,struct sk_buff*,size_t,int,int *) ;
 int FUNC_3 (struct sk_buff*,int *,int*,int *) ;

__attribute__((used)) static void FUNC_4(struct mlxsw_sp *VAR_0,
         struct sk_buff *VAR_1, u8 VAR_2,
         bool VAR_3)
{
 struct mlxsw_sp_port *VAR_4;
 struct mlxsw_sp1_ptp_key VAR_5;
 u8 VAR_6;
 int VAR_7;

 VAR_4 = VAR_0->ports[VAR_2];
 if (!VAR_4)
  goto immediate;

 VAR_6 = VAR_3 ? VAR_4->ptp.ing_types :
     VAR_4->ptp.egr_types;
 if (!VAR_6)
  goto immediate;

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.local_port = VAR_2;
 VAR_5.ingress = VAR_3;

 VAR_7 = FUNC_3(VAR_1, &VAR_5.domain_number, &VAR_5.message_type,
     &VAR_5.sequence_id);
 if (VAR_7)
  goto immediate;




 if (!((1 << VAR_5.message_type) & VAR_6))
  goto immediate;

 FUNC_1(VAR_0, VAR_5, VAR_1, 0);
 return;

immediate:
 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0));
}
