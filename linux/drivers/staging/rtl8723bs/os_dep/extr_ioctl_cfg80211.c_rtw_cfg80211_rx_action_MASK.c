
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct adapter {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,int *,int *) ;
 int FUNC_3 (struct adapter*,int ,int ,int *,int ,int ) ;
 int FUNC_4 (struct adapter*) ;
 int FUNC_5 (int,int ) ;

void FUNC_6(struct adapter *VAR_2, u8 *VAR_3, uint VAR_4, const char*VAR_5)
{
 s32 VAR_6;
 int VAR_7;
 u8 VAR_8, VAR_9;

 VAR_7 = FUNC_4(VAR_2);

 FUNC_2(VAR_3, VAR_4, &VAR_8, &VAR_9);

 FUNC_0("RTW_Rx:cur_ch =%d\n", VAR_7);
 if (VAR_5)
  FUNC_1("RTW_Rx:%s\n", VAR_5);
 else
  FUNC_1("RTW_Rx:category(%u), action(%u)\n", VAR_8, VAR_9);

 VAR_6 = FUNC_5(VAR_7, VAR_1);

 FUNC_3(VAR_2, VAR_6, 0, VAR_3, VAR_4, VAR_0);
}
