
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_data {unsigned short** key_maps; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned short) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (unsigned short) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned char*,int,int) ;
 size_t* VAR_5 ;

void
FUNC_4(struct kbd_data *VAR_6, unsigned char *VAR_7)
{
 unsigned short *VAR_8, VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_3(VAR_7, 0x40, 256);
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_4); VAR_10++) {
  VAR_8 = VAR_6->key_maps[VAR_10];
  if (!VAR_8)
   continue;
  for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
   VAR_12 = ((VAR_10 & 1) << 7) + VAR_11;
   VAR_9 = VAR_8[VAR_11];
   if (FUNC_1(VAR_9) == (VAR_1 | 0xf0) ||
       FUNC_1(VAR_9) == (VAR_2 | 0xf0))
    VAR_7[FUNC_2(VAR_9)] = VAR_12;
   else if (FUNC_1(VAR_9) == (VAR_0 | 0xf0))
    VAR_7[VAR_5[FUNC_2(VAR_9)]] = VAR_12;
  }
 }
}
