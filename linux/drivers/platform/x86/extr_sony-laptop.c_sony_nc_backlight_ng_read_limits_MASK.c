
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u8 ;
typedef int u64 ;
struct sony_backlight_props {int handle; unsigned char offset; int maxlvl; } ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char*,unsigned char,...) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int *,unsigned char*,int) ;

__attribute__((used)) static void FUNC_4(int VAR_1,
  struct sony_backlight_props *VAR_2)
{
 u64 VAR_3;
 int VAR_4;
 int VAR_5 = 0;
 u8 VAR_6 = 0xff, VAR_7 = 0x00;
 unsigned char VAR_8[32] = { 0 };

 VAR_2->handle = VAR_1;
 VAR_2->offset = 0;
 VAR_2->maxlvl = 0xff;

 VAR_3 = FUNC_2(VAR_1);




 VAR_4 = FUNC_3(VAR_0, "SN06", &VAR_3, VAR_8,
   32);
 if (VAR_4 < 0)
  return;

 switch (VAR_1) {
 case 0x012f:
 case 0x0137:
  VAR_5 = 9;
  break;
 case 0x143:
 case 0x14b:
 case 0x14c:
  VAR_5 = 16;
  break;
 }





 for (VAR_4 = 0; VAR_4 < VAR_5 && VAR_4 < FUNC_0(VAR_8); VAR_4++) {

  FUNC_1("Brightness level: %d\n", VAR_8[VAR_4]);

  if (!VAR_8[VAR_4])
   break;

  if (VAR_8[VAR_4] > VAR_7)
   VAR_7 = VAR_8[VAR_4];
  if (VAR_8[VAR_4] < VAR_6)
   VAR_6 = VAR_8[VAR_4];
 }
 VAR_2->offset = VAR_6;
 VAR_2->maxlvl = VAR_7;
 FUNC_1("Brightness levels: min=%d max=%d\n", VAR_2->offset,
   VAR_2->maxlvl);
}
