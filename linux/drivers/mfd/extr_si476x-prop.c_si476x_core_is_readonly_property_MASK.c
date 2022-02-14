
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct si476x_core {int revision; } ;


 int FUNC_0 (int) ;




__attribute__((used)) static bool FUNC_1(struct si476x_core *VAR_0,
          u16 VAR_1)
{
 FUNC_0(VAR_0->revision > 128 ||
        VAR_0->revision == -1);

 switch (VAR_0->revision) {
 case 130:
  return (VAR_1 == 0x3200);
 case 129:
  return (VAR_1 == 0x1006 ||
   VAR_1 == 0x2210 ||
   VAR_1 == 0x3200);
 case 128:
  return 0;
 }

 return 0;
}
