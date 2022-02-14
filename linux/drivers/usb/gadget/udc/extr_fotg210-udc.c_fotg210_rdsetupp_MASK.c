
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct fotg210_udc {scalar_t__ reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct fotg210_udc *VAR_4,
     u8 *VAR_5)
{
 int VAR_6 = 0;
 u8 *VAR_7 = VAR_5;
 u32 VAR_8;
 u32 VAR_9 = 8;

 FUNC_1(VAR_0, VAR_4->reg + VAR_3);

 for (VAR_6 = (VAR_9 >> 2); VAR_6 > 0; VAR_6--) {
  VAR_8 = FUNC_0(VAR_4->reg + VAR_2);
  *VAR_7 = VAR_8 & 0xFF;
  *(VAR_7 + 1) = (VAR_8 >> 8) & 0xFF;
  *(VAR_7 + 2) = (VAR_8 >> 16) & 0xFF;
  *(VAR_7 + 3) = (VAR_8 >> 24) & 0xFF;
  VAR_7 = VAR_7 + 4;
 }

 switch (VAR_9 % 4) {
 case 1:
  VAR_8 = FUNC_0(VAR_4->reg + VAR_2);
  *VAR_7 = VAR_8 & 0xFF;
  break;
 case 2:
  VAR_8 = FUNC_0(VAR_4->reg + VAR_2);
  *VAR_7 = VAR_8 & 0xFF;
  *(VAR_7 + 1) = (VAR_8 >> 8) & 0xFF;
  break;
 case 3:
  VAR_8 = FUNC_0(VAR_4->reg + VAR_2);
  *VAR_7 = VAR_8 & 0xFF;
  *(VAR_7 + 1) = (VAR_8 >> 8) & 0xFF;
  *(VAR_7 + 2) = (VAR_8 >> 16) & 0xFF;
  break;
 default:
  break;
 }

 FUNC_1(VAR_1, VAR_4->reg + VAR_3);
}
