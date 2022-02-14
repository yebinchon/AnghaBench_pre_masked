
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct lpc32xx_udc {int udp_baseaddr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct lpc32xx_udc *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 u16 *VAR_6;
 u32 *VAR_7, VAR_8, VAR_9;


 switch (((uintptr_t) VAR_1) & 0x3) {
 case 0:
  VAR_7 = (u32 *) VAR_1;
  VAR_9 = (VAR_2 & ~0x3);


  for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3 += 4)
   FUNC_1(*VAR_7++, FUNC_0(VAR_0->udp_baseaddr));


  VAR_5 = VAR_2 - VAR_9;
  if (VAR_5) {
   VAR_8 = 0;
   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
    VAR_8 |= VAR_1[VAR_9 + VAR_3] << (VAR_3 * 8);

   FUNC_1(VAR_8, FUNC_0(VAR_0->udp_baseaddr));
  }
  break;

 case 1:
 case 3:

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3 += 4) {
   VAR_5 = VAR_2 - VAR_3;
   if (VAR_5 > 4)
    VAR_5 = 4;

   VAR_8 = 0;
   for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++)
    VAR_8 |= VAR_1[VAR_3 + VAR_4] << (VAR_4 * 8);

   FUNC_1(VAR_8, FUNC_0(VAR_0->udp_baseaddr));
  }
  break;

 case 2:
  VAR_6 = (u16 *) VAR_1;
  VAR_9 = (VAR_2 & ~0x3);


  for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3 += 4) {
   VAR_8 = *VAR_6++ & 0xFFFF;
   VAR_8 |= (*VAR_6++ & 0xFFFF) << 16;
   FUNC_1(VAR_8, FUNC_0(VAR_0->udp_baseaddr));
  }


  VAR_5 = VAR_2 - VAR_9;
  if (VAR_5) {
   VAR_8 = 0;
   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
    VAR_8 |= VAR_1[VAR_9 + VAR_3] << (VAR_3 * 8);

   FUNC_1(VAR_8, FUNC_0(VAR_0->udp_baseaddr));
  }
  break;
 }
}
