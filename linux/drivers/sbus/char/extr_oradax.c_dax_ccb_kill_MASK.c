
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (char*,char*,...) ;
 char* FUNC_1 (unsigned long,int*) ;
 int FUNC_2 (char*,int,...) ;
 unsigned long FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(u64 VAR_4, u16 *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7, VAR_8 = 0;
 char *VAR_9;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0("attempting kill on ca_ra 0x%llx", VAR_4);
  VAR_6 = FUNC_3(VAR_4, VAR_5);

  if (VAR_6 == VAR_3) {
   FUNC_2("HV_EOK (ca_ra 0x%llx): %d", VAR_4,
         *VAR_5);
  } else {
   VAR_9 = FUNC_1(VAR_6, &VAR_8);
   FUNC_0("%s (ca_ra 0x%llx)", VAR_9, VAR_4);
  }

  if (VAR_8 != -VAR_2)
   return VAR_8;
  FUNC_2("ccb_kill count = %d", VAR_7);
  FUNC_4(VAR_1);
 }

 return -VAR_2;
}
