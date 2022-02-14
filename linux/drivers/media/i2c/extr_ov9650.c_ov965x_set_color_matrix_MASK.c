
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ov965x {int dummy; } ;


 unsigned int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ov965x*,int,int const) ;

__attribute__((used)) static int FUNC_3(struct ov965x *VAR_0)
{
 static const u8 VAR_1[] = {

  0x3a, 0x3d, 0x03, 0x12, 0x26, 0x38, 0x40, 0x40, 0x40, 0x0d
 };
 u8 VAR_2 = FUNC_1(1);
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  int VAR_4 = FUNC_2(VAR_0, VAR_2, VAR_1[VAR_3]);

  if (VAR_4 < 0)
   return VAR_4;
  VAR_2++;
 }

 return 0;
}
