
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct atmel_pmecc_user {int* lmu; int* si; int* mu; int* dmu; int* delta; int* smu; TYPE_1__* gf_tables; } ;
typedef int s32 ;
typedef int s16 ;
struct TYPE_2__ {int* index_of; int* alpha_to; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct atmel_pmecc_user*) ;
 int FUNC_2 (struct atmel_pmecc_user*) ;
 int FUNC_3 (int*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct atmel_pmecc_user *VAR_0)
{
 s16 *VAR_1 = VAR_0->lmu;
 s16 *VAR_2 = VAR_0->si;
 s32 *VAR_3 = VAR_0->mu;
 s32 *VAR_4 = VAR_0->dmu;
 s32 *VAR_5 = VAR_0->delta;
 int VAR_6 = FUNC_1(VAR_0) == 512 ? 13 : 14;
 int VAR_7 = FUNC_0(VAR_6) - 1;
 int VAR_8 = FUNC_2(VAR_0);
 int VAR_9 = 2 * VAR_8 + 1;
 s16 *VAR_10 = VAR_0->gf_tables->index_of;
 s16 *VAR_11 = VAR_0->gf_tables->alpha_to;
 int VAR_12, VAR_13, VAR_14;
 u32 VAR_15, VAR_16;
 s16 *VAR_17 = VAR_0->smu;


 int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_15 = 0;




 VAR_3[0] = -1;

 FUNC_3(VAR_17, 0, sizeof(s16) * VAR_9);
 VAR_17[0] = 1;


 VAR_4[0] = 1;

 VAR_1[0] = 0;
 VAR_5[0] = (VAR_3[0] * 2 - VAR_1[0]) >> 1;




 VAR_3[1] = 0;

 FUNC_3(&VAR_17[VAR_9], 0, sizeof(s16) * VAR_9);
 VAR_17[VAR_9] = 1;


 VAR_4[1] = VAR_2[1];


 VAR_1[1] = 0;

 VAR_5[1] = (VAR_3[1] * 2 - VAR_1[1]) >> 1;


 FUNC_3(&VAR_17[(VAR_8 + 1) * VAR_9], 0, sizeof(s16) * VAR_9);

 for (VAR_12 = 1; VAR_12 <= VAR_8; VAR_12++) {
  VAR_3[VAR_12 + 1] = VAR_12 << 1;


  if (VAR_4[VAR_12] == 0) {
   VAR_15++;

   VAR_16 = ((VAR_8 - (VAR_1[VAR_12] >> 1) - 1) / 2);
   if ((VAR_8 - (VAR_1[VAR_12] >> 1) - 1) & 0x1)
    VAR_16 += 2;
   else
    VAR_16 += 1;

   if (VAR_15 == VAR_16) {
    for (VAR_13 = 0; VAR_13 <= (VAR_1[VAR_12] >> 1) + 1; VAR_13++)
     VAR_17[(VAR_8 + 1) * VAR_9 + VAR_13] =
       VAR_17[VAR_12 * VAR_9 + VAR_13];

    VAR_1[VAR_8 + 1] = VAR_1[VAR_12];
    return;
   }


   for (VAR_13 = 0; VAR_13 <= VAR_1[VAR_12] >> 1; VAR_13++)
    VAR_17[(VAR_12 + 1) * VAR_9 + VAR_13] = VAR_17[VAR_12 * VAR_9 + VAR_13];


   VAR_1[VAR_12 + 1] = VAR_1[VAR_12];
  } else {
   VAR_18 = 0;
   VAR_19 = -1;

   for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
    if ((VAR_4[VAR_13]) && (VAR_5[VAR_13] > VAR_19)) {
     VAR_19 = VAR_5[VAR_13];
     VAR_18 = VAR_13;
    }
   }


   VAR_20 = (VAR_3[VAR_12] - VAR_3[VAR_18]);


   if ((VAR_1[VAR_12] >> 1) > ((VAR_1[VAR_18] >> 1) + VAR_20))
    VAR_1[VAR_12 + 1] = VAR_1[VAR_12];
   else
    VAR_1[VAR_12 + 1] = ((VAR_1[VAR_18] >> 1) + VAR_20) * 2;


   for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
    VAR_17[(VAR_12 + 1) * VAR_9 + VAR_14] = 0;


   for (VAR_14 = 0; VAR_14 <= VAR_1[VAR_18] >> 1; VAR_14++) {
    s16 VAR_21, VAR_22, VAR_23;

    if (!(VAR_17[VAR_18 * VAR_9 + VAR_14] && VAR_4[VAR_12]))
     continue;

    VAR_21 = VAR_10[VAR_4[VAR_12]];
    VAR_22 = VAR_10[VAR_4[VAR_18]];
    VAR_23 = VAR_10[VAR_17[VAR_18 * VAR_9 + VAR_14]];
    VAR_16 = VAR_21 + (VAR_7 - VAR_22) + VAR_23;
    VAR_21 = VAR_11[VAR_16 % VAR_7];
    VAR_17[(VAR_12 + 1) * VAR_9 + (VAR_14 + VAR_20)] = VAR_21;
   }

   for (VAR_14 = 0; VAR_14 <= VAR_1[VAR_12] >> 1; VAR_14++)
    VAR_17[(VAR_12 + 1) * VAR_9 + VAR_14] ^= VAR_17[VAR_12 * VAR_9 + VAR_14];
  }



  VAR_5[VAR_12 + 1] = (VAR_3[VAR_12 + 1] * 2 - VAR_1[VAR_12 + 1]) >> 1;


  if (VAR_12 >= VAR_8)
   continue;

  for (VAR_14 = 0; VAR_14 <= (VAR_1[VAR_12 + 1] >> 1); VAR_14++) {
   VAR_16 = 2 * (VAR_12 - 1);
   if (VAR_14 == 0) {
    VAR_4[VAR_12 + 1] = VAR_2[VAR_16 + 3];
   } else if (VAR_17[(VAR_12 + 1) * VAR_9 + VAR_14] && VAR_2[VAR_16 + 3 - VAR_14]) {
    s16 VAR_24, VAR_25, VAR_26;

    VAR_24 = VAR_10[VAR_17[(VAR_12 + 1) * VAR_9 + VAR_14]];
    VAR_25 = VAR_2[2 * (VAR_12 - 1) + 3 - VAR_14];
    VAR_26 = VAR_10[VAR_25];
    VAR_16 = VAR_24 + VAR_26;
    VAR_16 %= VAR_7;
    VAR_4[VAR_12 + 1] = VAR_11[VAR_16] ^ VAR_4[VAR_12 + 1];
   }
  }
 }
}
