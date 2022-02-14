
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct esas2r_adapter {int flash_rev; scalar_t__ flash_ver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (int ,char*) ;

bool FUNC_7(struct esas2r_adapter *VAR_0)
{
 u16 VAR_1 = FUNC_3(VAR_0->flash_ver);
 u8 VAR_2 = FUNC_2(FUNC_1(VAR_0->flash_ver));
 u8 VAR_3 = FUNC_0(FUNC_1(VAR_0->flash_ver));

 if (VAR_2 == 0
     || VAR_3 == 0
     || VAR_2 > 31
     || VAR_3 > 12
     || VAR_1 < 2006
     || VAR_1 > 9999) {
  FUNC_6(VAR_0->flash_rev, "not found");
  VAR_0->flash_ver = 0;
  return 0;
 }

 FUNC_5(VAR_0->flash_rev, "%02d/%02d/%04d", VAR_3, VAR_2, VAR_1);
 FUNC_4("flash version: %s", VAR_0->flash_rev);
 return 1;
}
