
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int*,char*,char*,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static bool FUNC_4(void)
{
 int VAR_2 = 0;

 if (!VAR_1)
  return 0;

 if (!FUNC_2(VAR_1, "MLCG")) {
  FUNC_3(VAR_0, "kbdlight MLCG is unavailable\n");
  return 0;
 }

 if (!FUNC_1(VAR_1, &VAR_2, "MLCG", "qdd", 0)) {
  FUNC_3(VAR_0, "kbdlight MLCG failed\n");
  return 0;
 }

 if (VAR_2 < 0) {
  FUNC_3(VAR_0, "kbdlight MLCG err: %d\n", VAR_2);
  return 0;
 }

 FUNC_3(VAR_0, "kbdlight MLCG returned 0x%x\n", VAR_2);
 return VAR_2 & FUNC_0(9);
}
