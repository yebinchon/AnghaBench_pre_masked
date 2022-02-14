
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct cpcap_battery_ddata {int reg; } ;


 int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct platform_device*,struct cpcap_battery_ddata*,char const* const) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2,
      struct cpcap_battery_ddata *VAR_3)
{
 static const char * const VAR_4[] = {
  "eol", "lowbph", "lowbpl",
  "chrgcurr1", "battdetb"
 };
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++) {
  VAR_6 = FUNC_1(VAR_2, VAR_3,
            VAR_4[VAR_5]);
  if (VAR_6)
   return VAR_6;
 }


 VAR_6 = FUNC_2(VAR_3->reg, VAR_0,
       0xffff,
       VAR_1);
 if (VAR_6)
  return VAR_6;

 return 0;
}
