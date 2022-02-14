
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radio_isa_card {int io; } ;
typedef int buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct radio_isa_card *VAR_3, u32 VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 long VAR_8;
 unsigned char VAR_9[25];

 VAR_4 = VAR_4 / 160;
 FUNC_0(VAR_9, 0, sizeof(VAR_9));

 VAR_8 = VAR_4 * 10 + 10700;

 VAR_5 = 13;
 VAR_6 = 10;
 VAR_7 = 102400;
 while (VAR_8 != 0) {
  if (VAR_8 % VAR_7 == VAR_8)
   VAR_9[VAR_5] = 0;
  else {
   VAR_9[VAR_5] = 1;
   VAR_8 = VAR_8 - VAR_7;
  }
  VAR_5--;
  VAR_6--;
  VAR_7 = VAR_7 / 2;
 }

 for (VAR_5 = 24; VAR_5 > -1; VAR_5--) {
  if (VAR_9[VAR_5] == 1) {
   FUNC_1(VAR_2 | VAR_1, VAR_3->io);
   FUNC_1(VAR_2 | VAR_1 | VAR_0, VAR_3->io);
   FUNC_1(VAR_2 | VAR_1, VAR_3->io);
  } else {
   FUNC_1(VAR_2 | 0x00, VAR_3->io);
   FUNC_1(VAR_2 | 0x00 | VAR_0, VAR_3->io);
  }
 }
 FUNC_1(0x00, VAR_3->io);
 return 0;
}
