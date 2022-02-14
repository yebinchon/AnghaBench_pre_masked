
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned long,unsigned int,char*,char*,unsigned long) ;
 int FUNC_2 (int ,unsigned int,int,int) ;
 unsigned long FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_1, unsigned VAR_2,
  bool VAR_3, bool VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;
 u32 VAR_7;

 FUNC_0(VAR_2 > 0x1fff);


 VAR_5 = FUNC_3(VAR_1);

 VAR_7 = FUNC_4(VAR_1, VAR_0);
 VAR_7 = FUNC_2(VAR_7, 1, 31, 31);
 VAR_7 = FUNC_2(VAR_7, VAR_4 ? 1 : 0, 30, 30);
 VAR_7 = FUNC_2(VAR_7, VAR_3 ? 1 : 0, 29, 29);
 VAR_7 = FUNC_2(VAR_7, VAR_2, 28, 16);
 FUNC_5(VAR_1, VAR_0, VAR_7);

 VAR_6 = VAR_2 * (VAR_4 ? 16 : 1) * (VAR_3 ? 8 : 1);

 FUNC_1("TA_TO %lu ticks (%#x%s%s) = %lu ns\n",
   VAR_6,
   VAR_2, VAR_3 ? " x8" : "", VAR_4 ? " x16" : "",
   (VAR_6 * 1000) / (VAR_5 / 1000 / 1000));
}
