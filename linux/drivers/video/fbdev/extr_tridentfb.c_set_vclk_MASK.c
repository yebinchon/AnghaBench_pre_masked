
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tridentfb_par {int io_virt; int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned char,unsigned char) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct tridentfb_par*,unsigned char,int) ;
 int FUNC_5 (int ,int ,unsigned char) ;

__attribute__((used)) static void FUNC_6(struct tridentfb_par *VAR_2, unsigned long VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7, VAR_8, VAR_9;
 unsigned char VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
 unsigned char VAR_13, VAR_14;
 unsigned char VAR_15 = !FUNC_3(VAR_2->chip_id) ? 2 : 1;

 VAR_8 = 20000;
 for (VAR_6 = VAR_15; VAR_6 >= 0; VAR_6--)
  for (VAR_4 = 1; VAR_4 < 32; VAR_4++) {
   VAR_5 = ((VAR_4 + 2) << VAR_15) - 8;
   for (VAR_5 = (VAR_5 < 0 ? 0 : VAR_5); VAR_5 < 122; VAR_5++) {
    VAR_7 = ((14318l * (VAR_5 + 8)) / (VAR_4 + 2)) >> VAR_6;
    VAR_9 = FUNC_0(VAR_7 - VAR_3);
    if (VAR_9 < VAR_8 || (VAR_9 == VAR_8 && VAR_6 == VAR_12)) {
     VAR_8 = VAR_9;
     VAR_11 = VAR_5;
     VAR_10 = VAR_4;
     VAR_12 = VAR_6;
    }
    if (VAR_7 > VAR_3)
     break;
   }
  }

 if (FUNC_3(VAR_2->chip_id)) {
  VAR_14 = VAR_11 | (VAR_10 << 7);
  VAR_13 = (VAR_10 >> 1) | (VAR_12 << 4);
 } else {
  VAR_14 = VAR_11;
  VAR_13 = VAR_10 | (VAR_12 << 6);
 }

 if (FUNC_2(VAR_2->chip_id)) {
  FUNC_5(VAR_2->io_virt, VAR_0, VAR_13);
  FUNC_5(VAR_2->io_virt, VAR_1, VAR_14);
 } else {
  FUNC_4(VAR_2, VAR_14, 0x43C8);
  FUNC_4(VAR_2, VAR_13, 0x43C9);
 }
 FUNC_1("VCLK = %X %X\n", VAR_13, VAR_14);
}
