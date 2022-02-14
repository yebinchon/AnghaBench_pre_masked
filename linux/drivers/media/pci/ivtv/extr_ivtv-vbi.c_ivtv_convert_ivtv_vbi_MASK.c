
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* sliced_dec_data; } ;
struct ivtv {TYPE_2__ vbi; } ;
struct TYPE_3__ {int line; int field; int id; int* data; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,char*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ivtv *VAR_4, u8 *VAR_5)
{
 u32 VAR_6[2];
 int VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;

 if (!FUNC_0(VAR_5, "itv0", 4)) {
  FUNC_1(VAR_6, VAR_5 + 4, 8);
  VAR_5 += 12;
 } else if (!FUNC_0(VAR_5, "ITV0", 4)) {
  VAR_6[0] = 0xffffffff;
  VAR_6[1] = 0xf;
  VAR_5 += 4;
 } else {

  VAR_6[0] = VAR_6[1] = 0;
 }
 for (VAR_7 = 0; VAR_7 < 36; VAR_7++) {
  int VAR_11 = 0;

  if (VAR_7 < 32 && !(VAR_6[0] & (1 << VAR_7)))
   continue;
  if (VAR_7 >= 32 && !(VAR_6[1] & (1 << (VAR_7 - 32))))
   continue;
  VAR_9 = *VAR_5 & 0xf;
  switch (VAR_9) {
  case 130:
   VAR_9 = VAR_1;
   break;
  case 131:
   VAR_9 = VAR_0;
   VAR_11 = !FUNC_2(VAR_5[1]) || !FUNC_2(VAR_5[2]);
   break;
  case 129:
   VAR_9 = VAR_2;
   break;
  case 128:
   VAR_9 = VAR_3;
   break;
  default:
   VAR_9 = 0;
   break;
  }
  if (VAR_11 == 0) {
   VAR_8 = (VAR_7 < 18) ? VAR_7 + 6 : VAR_7 - 18 + 6;
   VAR_4->vbi.sliced_dec_data[VAR_10].line = VAR_8;
   VAR_4->vbi.sliced_dec_data[VAR_10].field = VAR_7 >= 18;
   VAR_4->vbi.sliced_dec_data[VAR_10].id = VAR_9;
   FUNC_1(VAR_4->vbi.sliced_dec_data[VAR_10].data, VAR_5 + 1, 42);
   VAR_10++;
  }
  VAR_5 += 43;
 }
 while (VAR_10 < 36) {
  VAR_4->vbi.sliced_dec_data[VAR_10].id = 0;
  VAR_4->vbi.sliced_dec_data[VAR_10].line = 0;
  VAR_4->vbi.sliced_dec_data[VAR_10].field = 0;
  VAR_10++;
 }
 return VAR_10 * sizeof(VAR_4->vbi.sliced_dec_data[0]);
}
