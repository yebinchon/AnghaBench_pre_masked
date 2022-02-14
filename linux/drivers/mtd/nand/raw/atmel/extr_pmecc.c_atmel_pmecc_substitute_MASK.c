
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_pmecc_user {int* partial_syn; int* si; TYPE_1__* gf_tables; } ;
typedef int s16 ;
struct TYPE_2__ {int* alpha_to; int* index_of; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct atmel_pmecc_user*) ;
 int FUNC_2 (struct atmel_pmecc_user*) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct atmel_pmecc_user *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0) == 512 ? 13 : 14;
 int VAR_2 = FUNC_0(VAR_1) - 1;
 int VAR_3 = FUNC_2(VAR_0);
 s16 *VAR_4 = VAR_0->gf_tables->alpha_to;
 s16 *VAR_5 = VAR_0->gf_tables->index_of;
 s16 *VAR_6 = VAR_0->partial_syn;
 s16 *VAR_7;
 int VAR_8, VAR_9;





 VAR_7 = VAR_0->si;

 FUNC_3(&VAR_7[1], 0, sizeof(s16) * ((2 * VAR_3) - 1));



 for (VAR_8 = 1; VAR_8 < 2 * VAR_3; VAR_8 += 2) {
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   if (VAR_6[VAR_8] & FUNC_0(VAR_9))
    VAR_7[VAR_8] = VAR_4[VAR_8 * VAR_9] ^ VAR_7[VAR_8];
  }
 }

 for (VAR_8 = 2, VAR_9 = 1; VAR_9 <= VAR_3; VAR_8 = ++VAR_9 << 1) {
  if (VAR_7[VAR_9] == 0) {
   VAR_7[VAR_8] = 0;
  } else {
   s16 VAR_10;

   VAR_10 = VAR_5[VAR_7[VAR_9]];
   VAR_10 = (VAR_10 * 2) % VAR_2;
   VAR_7[VAR_8] = VAR_4[VAR_10];
  }
 }
}
