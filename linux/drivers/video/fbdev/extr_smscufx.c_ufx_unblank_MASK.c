
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ufx_data {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ufx_data*,int,int*) ;
 int FUNC_2 (struct ufx_data*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ufx_data *VAR_1, bool VAR_2)
{
 u32 VAR_3, VAR_4;
 int VAR_5;

 int VAR_6 = FUNC_1(VAR_1, 0x2004, &VAR_4);
 FUNC_0(VAR_6, "ufx_unblank error reading 0x2004");

 VAR_6 = FUNC_1(VAR_1, 0x2000, &VAR_3);
 FUNC_0(VAR_6, "ufx_unblank error reading 0x2000");


 if (((VAR_4 & 0x00000100) == 0) || ((VAR_3 & 0x00000100) == 0))
  return 0;


 VAR_3 &= ~0x00000100;
 VAR_6 = FUNC_2(VAR_1, 0x2000, VAR_3);
 FUNC_0(VAR_6, "ufx_unblank error writing 0x2000");


 if (!VAR_2)
  return 0;

 for (VAR_5 = 0; VAR_5 < 250; VAR_5++) {
  VAR_6 = FUNC_1(VAR_1, 0x2004, &VAR_4);
  FUNC_0(VAR_6, "ufx_unblank error reading 0x2004");

  if ((VAR_4 & 0x00000100) == 0)
   return 0;
 }


 return -VAR_0;
}
