
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int*,int,int *,int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_1, int VAR_2)
{
 u32 *VAR_3;
 u8 VAR_4[16] = { '\0' };
 int VAR_5 = 0;

 VAR_3 = (u32 *)&VAR_4;
 VAR_3[0] = VAR_1;
 VAR_3[1] = VAR_2;

 VAR_5 = FUNC_0(
   VAR_0,
   0,
   VAR_3,
   2,
   ((void*)0),
   0);

 if (VAR_5 != 0)
  FUNC_1("Error setting SCU watchdog timer: %x\n", VAR_5);

 return VAR_5;
}
