
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_1;

 VAR_1 = FUNC_3();
 if (VAR_1) {
  FUNC_5("Failed to initialize fw-mgmt core (%d)\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_1();
 if (VAR_1) {
  FUNC_5("Failed to initialize component authentication core (%d)\n",
         VAR_1);
  goto fw_mgmt_exit;
 }

 VAR_1 = FUNC_4(&VAR_0);
 if (VAR_1)
  goto cap_exit;

 return 0;

cap_exit:
 FUNC_0();
fw_mgmt_exit:
 FUNC_2();

 return VAR_1;
}
