
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vpd_vers; int scfg_vers; int er_vers; int tp_vers; int bs_vers; int fw_vers; } ;
struct adapter {TYPE_1__ params; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,int *) ;
 int FUNC_2 (struct adapter*,int *) ;
 int FUNC_3 (struct adapter*,int *) ;
 int FUNC_4 (struct adapter*,int *) ;
 int FUNC_5 (struct adapter*,int *) ;
 int FUNC_6 (struct adapter*,int *) ;

int FUNC_7(struct adapter *VAR_0)
{
 int VAR_1 = 0;
 do { int VAR_2 = FUNC_3(VAR_0, &VAR_0->params.fw_vers); if (VAR_2 && !VAR_1) VAR_1 = VAR_2; } while (0);
 do { int VAR_3 = FUNC_1(VAR_0, &VAR_0->params.bs_vers); if (VAR_3 && !VAR_1) VAR_1 = VAR_3; } while (0);
 do { int VAR_4 = FUNC_5(VAR_0, &VAR_0->params.tp_vers); if (VAR_4 && !VAR_1) VAR_1 = VAR_4; } while (0);
 do { int VAR_5 = FUNC_2(VAR_0, &VAR_0->params.er_vers); if (VAR_5 && !VAR_1) VAR_1 = VAR_5; } while (0);
 do { int VAR_6 = FUNC_4(VAR_0, &VAR_0->params.scfg_vers); if (VAR_6 && !VAR_1) VAR_1 = VAR_6; } while (0);
 do { int VAR_7 = FUNC_6(VAR_0, &VAR_0->params.vpd_vers); if (VAR_7 && !VAR_1) VAR_1 = VAR_7; } while (0);


 return VAR_1;
}
