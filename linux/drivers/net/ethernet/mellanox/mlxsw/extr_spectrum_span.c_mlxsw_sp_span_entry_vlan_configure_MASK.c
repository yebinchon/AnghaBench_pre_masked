
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlxsw_sp_span_parms {int vid; struct mlxsw_sp_port* dest_port; } ;
struct mlxsw_sp_span_entry {int id; } ;
struct mlxsw_sp_port {int local_port; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int,int ,int,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct mlxsw_sp_span_entry *VAR_3,
       struct mlxsw_sp_span_parms VAR_4)
{
 struct mlxsw_sp_port *VAR_5 = VAR_4.dest_port;
 struct mlxsw_sp *VAR_6 = VAR_5->mlxsw_sp;
 u8 VAR_7 = VAR_5->local_port;
 char VAR_8[VAR_0];
 int VAR_9 = VAR_3->id;

 FUNC_2(VAR_8, VAR_9, VAR_7, 1,
       VAR_1);
 FUNC_1(VAR_8, VAR_4.vid);

 return FUNC_3(VAR_6->core, FUNC_0(VAR_2), VAR_8);
}
