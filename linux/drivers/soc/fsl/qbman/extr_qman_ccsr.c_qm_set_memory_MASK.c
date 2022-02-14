
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
typedef enum qm_memory { ____Placeholder_qm_memory } qm_memory ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (void*,int ,int) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int) ;
 int VAR_8 ;
 int FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(enum qm_memory VAR_9, u64 VAR_10, u32 VAR_11)
{
 void *VAR_12;
 u32 VAR_13 = (VAR_9 == VAR_8) ? VAR_3 : VAR_4;
 u32 VAR_14 = FUNC_2(VAR_11);
 u32 VAR_15, VAR_16;


 FUNC_0((VAR_11 >= 4096) && (VAR_11 <= 1024*1024*1024) &&
      FUNC_3(VAR_11));

 FUNC_0(!(VAR_10 & (VAR_11 - 1)));


 VAR_15 = FUNC_10(VAR_13 + VAR_6);
 if (VAR_15) {

  VAR_16 = FUNC_10(VAR_13);
  if (VAR_16 != FUNC_12(VAR_10) || VAR_15 != FUNC_4(VAR_10)) {
   FUNC_9("Attempted to reinitialize QMan with different BAR, got 0x%llx read BARE=0x%x BAR=0x%x\n",
          VAR_10, VAR_16, VAR_15);
   return -VAR_0;
  }
  VAR_7 = 1;

  return 1;
 }

 VAR_12 = FUNC_5(VAR_10, VAR_11, VAR_1);
 if (!VAR_12) {
  FUNC_8("memremap() of QMan private memory failed\n");
  return -VAR_0;
 }
 FUNC_6(VAR_12, 0, VAR_11);
 FUNC_7(VAR_12);

 FUNC_11(VAR_13, FUNC_12(VAR_10));
 FUNC_11(VAR_13 + VAR_6, FUNC_4(VAR_10));
 FUNC_11(VAR_13 + VAR_5, VAR_2 | (VAR_14 - 1));
 return 0;
}
