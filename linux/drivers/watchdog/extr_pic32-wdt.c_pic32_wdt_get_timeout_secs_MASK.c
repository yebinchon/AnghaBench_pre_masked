
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pic32_wdt {int clk; } ;
struct device {int dummy; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,unsigned long,unsigned long,...) ;
 int FUNC_3 (struct pic32_wdt*) ;
 unsigned long FUNC_4 (struct pic32_wdt*) ;

__attribute__((used)) static u32 FUNC_5(struct pic32_wdt *VAR_0, struct device *VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3, VAR_4, VAR_5;

 VAR_2 = FUNC_1(VAR_0->clk);

 FUNC_2(VAR_1, "wdt: clk_id %d, clk_rate %lu (prescale)\n",
  FUNC_3(VAR_0), VAR_2);


 VAR_2 >>= 5;
 if (!VAR_2)
  return 0;


 VAR_4 = FUNC_4(VAR_0);
 VAR_5 = FUNC_0(VAR_4);


 VAR_3 = VAR_5 / VAR_2;
 FUNC_2(VAR_1,
  "wdt: clk_rate %lu (postscale) / terminal %d, timeout %dsec\n",
  VAR_2, VAR_5, VAR_3);

 return VAR_3;
}
