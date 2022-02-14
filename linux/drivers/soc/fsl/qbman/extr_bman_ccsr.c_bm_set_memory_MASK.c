
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(u64 VAR_5, u32 VAR_6)
{
 u32 VAR_7, VAR_8;
 u32 VAR_9 = FUNC_3(VAR_6);

 FUNC_0(VAR_6 >= 4096 && VAR_6 <= 1024*1024*1024 &&
     FUNC_4(VAR_6));

 FUNC_0(!(VAR_5 & (VAR_6 - 1)));


 VAR_7 = FUNC_1(VAR_2);
 if (VAR_7) {

  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8 != FUNC_8(VAR_5) || VAR_7 != FUNC_5(VAR_5)) {
   FUNC_6("Attempted to reinitialize BMan with different BAR, got 0x%llx read BARE=0x%x BAR=0x%x\n",
          VAR_5, VAR_8, VAR_7);
   return -VAR_0;
  }
  FUNC_7("BMan BAR already configured\n");
  VAR_4 = 1;
  return 1;
 }

 FUNC_2(VAR_3, FUNC_8(VAR_5));
 FUNC_2(VAR_2, FUNC_5(VAR_5));
 FUNC_2(VAR_1, VAR_9 - 1);
 return 0;
}
