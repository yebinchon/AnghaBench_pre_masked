
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int egr_types; int ing_types; } ;
struct mlxsw_sp_port {struct mlxsw_sp* mlxsw_sp; int dev; TYPE_1__ ptp; } ;
struct mlxsw_sp {struct mlxsw_sp_port** ports; int core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ,int ) ;
 int FUNC_2 (struct mlxsw_sp*) ;
 int FUNC_3 (struct mlxsw_sp*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp_port *VAR_0,
           u16 VAR_1, u16 VAR_2)
{
 struct mlxsw_sp *VAR_3 = VAR_0->mlxsw_sp;
 struct mlxsw_sp_port *VAR_4;
 u16 VAR_5 = 0;
 u16 VAR_6 = 0;
 int VAR_7;
 int VAR_8;




 for (VAR_8 = 1; VAR_8 < FUNC_0(VAR_3->core); VAR_8++) {
  VAR_4 = VAR_3->ports[VAR_8];
  if (VAR_4) {
   VAR_5 |= VAR_4->ptp.ing_types;
   VAR_6 |= VAR_4->ptp.egr_types;
  }
  if (VAR_4 && VAR_4 != VAR_0) {
   VAR_1 |= VAR_4->ptp.ing_types;
   VAR_2 |= VAR_4->ptp.egr_types;
  }
 }

 if ((VAR_1 || VAR_2) && !(VAR_5 || VAR_6)) {
  VAR_7 = FUNC_2(VAR_3);
  if (VAR_7) {
   FUNC_4(VAR_0->dev, "Failed to increase parsing depth");
   return VAR_7;
  }
 }
 if (!(VAR_1 || VAR_2) && (VAR_5 || VAR_6))
  FUNC_3(VAR_3);

 return FUNC_1(VAR_0->mlxsw_sp,
           VAR_1, VAR_2);
}
