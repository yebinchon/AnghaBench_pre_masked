
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov965x {int dummy; } ;


 unsigned int FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (struct ov965x*,int,int const) ;

__attribute__((used)) static int FUNC_2(struct ov965x *VAR_1)
{
 static const u8 VAR_2[] = {

  0x40, 0x30, 0x4b, 0x60, 0x70, 0x70, 0x70, 0x70,
  0x60, 0x60, 0x50, 0x48, 0x3a, 0x2e, 0x28, 0x22,
  0x04, 0x07, 0x10, 0x28, 0x36, 0x44, 0x52, 0x60,
  0x6c, 0x78, 0x8c, 0x9e, 0xbb, 0xd2, 0xe6
 };
 u8 VAR_3 = VAR_0;
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_2); VAR_4++) {
  int VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_2[VAR_4]);

  if (VAR_5 < 0)
   return VAR_5;
  VAR_3++;
 }

 return 0;
}
