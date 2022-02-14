
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct cx88_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct cx88_core *VAR_3, int VAR_4, u32 VAR_5)
{
 static const u32 VAR_6[] = { 0, 0, 0, 3, 2, 1 };
 u64 VAR_7;
 u32 VAR_8;
 int VAR_9;

 if (VAR_4 < 2)
  VAR_4 = 2;
 if (VAR_4 > 5)
  VAR_4 = 5;

 VAR_7 = VAR_5 * 8 * VAR_4 * (u64)(1 << 20);
 FUNC_2(VAR_7, VAR_2);
 VAR_8 = (VAR_7 & 0x3ffffff) | (VAR_6[VAR_4] << 26);
 if (((VAR_8 >> 20) & 0x3f) < 14) {
  FUNC_4("pll out of range\n");
  return -1;
 }

 FUNC_3(1, "set_pll:    MO_PLL_REG       0x%08x [old=0x%08x,freq=%d]\n",
  VAR_8, FUNC_0(VAR_1), VAR_5);
 FUNC_1(VAR_1, VAR_8);
 for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
  VAR_8 = FUNC_0(VAR_0);
  if (VAR_8 & (1 << 2)) {
   FUNC_3(1, "pll locked [pre=%d,ofreq=%d]\n",
    VAR_4, VAR_5);
   return 0;
  }
  FUNC_3(1, "pll not locked yet, waiting ...\n");
  FUNC_5(10000, 20000);
 }
 FUNC_3(1, "pll NOT locked [pre=%d,ofreq=%d]\n", VAR_4, VAR_5);
 return -1;
}
