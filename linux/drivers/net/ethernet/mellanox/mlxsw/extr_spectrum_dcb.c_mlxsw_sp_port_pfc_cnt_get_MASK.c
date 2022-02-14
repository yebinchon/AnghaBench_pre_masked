
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {struct ieee_pfc* pfc; } ;
struct mlxsw_sp_port {int local_port; TYPE_1__ dcb; struct mlxsw_sp* mlxsw_sp; } ;
struct mlxsw_sp {int core; } ;
struct ieee_pfc {int * indications; int * requests; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,size_t) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp_port *VAR_3,
         u8 VAR_4)
{
 struct mlxsw_sp *VAR_5 = VAR_3->mlxsw_sp;
 struct ieee_pfc *VAR_6 = VAR_3->dcb.pfc;
 char VAR_7[VAR_0];
 int VAR_8;

 FUNC_1(VAR_7, VAR_3->local_port,
        VAR_1, VAR_4);
 VAR_8 = FUNC_4(VAR_5->core, FUNC_0(VAR_2), VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_6->requests[VAR_4] = FUNC_3(VAR_7);
 VAR_6->indications[VAR_4] = FUNC_2(VAR_7);

 return 0;
}
