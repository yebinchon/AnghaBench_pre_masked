
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, u32 VAR_1)
{
 u32 VAR_2, VAR_3, VAR_4 = 0xffffffff;

 FUNC_1(VAR_0, "ErrInt, EDATA:\n");
 VAR_2 = VAR_1 / 32;
 if (VAR_1 % 32) {
  VAR_2++;
  VAR_4 = ~(VAR_4 << VAR_1 % 32);
 }
 VAR_3 = 16 - VAR_2;
 FUNC_1(VAR_0, "  0x%08x\n", FUNC_2(FUNC_0(VAR_3)) & VAR_4);
 VAR_3++;
 for (; VAR_3 < 16; VAR_3++)
  FUNC_1(VAR_0, "  0x%08x\n", FUNC_2(FUNC_0(VAR_3)));
}
