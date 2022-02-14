
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* cal; int* pwr; } ;
struct TYPE_3__ {int* cal; int* pwr; } ;
struct ath_hw {TYPE_2__ nf_2g; TYPE_1__ nf_5g; } ;
struct ath_common {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ath_hw*,int,int,int,int*,int*,int*,int*,int*,int*) ;
 int FUNC_1 (struct ath_hw*,int,int*,int*,int*) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,int,int,int,int,...) ;
 int FUNC_4 (int,int,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct ath_hw *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 int VAR_11[VAR_1],
     VAR_12[VAR_1],
     VAR_13[VAR_1], VAR_14[VAR_1],
     VAR_15[VAR_1], VAR_16[VAR_1];
 int VAR_17[VAR_1],
     VAR_18[VAR_1],
     VAR_19[VAR_1], VAR_20[VAR_1],
     VAR_21[VAR_1], VAR_22[VAR_1];
 int VAR_23;
 int VAR_24[VAR_1],
     VAR_25[VAR_1], VAR_26[VAR_1],
     VAR_27[VAR_1], VAR_28[VAR_1];
 int VAR_29, VAR_30, VAR_31, VAR_32,
     VAR_33, VAR_34;
 struct ath_common *VAR_35 = FUNC_2(VAR_5);

 VAR_10 = (VAR_6 >= 4000);
 if (VAR_10)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_2;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_11[VAR_7] = 0;
  VAR_17[VAR_7] = 100000;
 }

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
   if (!FUNC_0(VAR_5, VAR_10, VAR_8, VAR_7,
          &VAR_29, &VAR_30,
          &VAR_31, &VAR_32,
          &VAR_33, &VAR_34)) {
    VAR_23 = VAR_6 - VAR_29;





    if (VAR_23 <= 0) {
     if (VAR_17[VAR_7] <= 0 ||
         VAR_17[VAR_7] >= 100000 ||
         VAR_23 >
         (VAR_6 - VAR_17[VAR_7])) {




      VAR_17[VAR_7] = VAR_29;
      VAR_18[VAR_7] =
          VAR_30;
      VAR_19[VAR_7] =
          VAR_31;
      VAR_20[VAR_7] = VAR_32;
      VAR_21[VAR_7] = VAR_33;
      VAR_22[VAR_7] = VAR_34;
     }
    }
    if (VAR_23 >= 0) {
     if (VAR_11[VAR_7] <= 0
         || VAR_23 <
         (VAR_6 - VAR_11[VAR_7])) {




      VAR_11[VAR_7] = VAR_29;
      VAR_12[VAR_7] =
          VAR_30;
      VAR_13[VAR_7] =
          VAR_31;
      VAR_14[VAR_7] = VAR_32;
      VAR_15[VAR_7] = VAR_33;
      VAR_16[VAR_7] = VAR_34;
     }
    }
   }
  }
 }


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  FUNC_3(VAR_35, VAR_4,
   "ch=%d f=%d low=%d %d h=%d %d n=%d %d p=%d %d\n",
   VAR_7, VAR_6, VAR_11[VAR_7],
   VAR_12[VAR_7], VAR_17[VAR_7],
   VAR_18[VAR_7], VAR_15[VAR_7],
   VAR_21[VAR_7], VAR_16[VAR_7],
   VAR_22[VAR_7]);

  if (VAR_17[VAR_7] == VAR_11[VAR_7]) {
   VAR_24[VAR_7] = VAR_12[VAR_7];
   VAR_25[VAR_7] = VAR_14[VAR_7];
   VAR_26[VAR_7] = VAR_13[VAR_7];
   VAR_27[VAR_7] = VAR_15[VAR_7];
   VAR_28[VAR_7] = VAR_16[VAR_7];
  }

  else if (VAR_6 - VAR_11[VAR_7] < 1000) {

   if (VAR_17[VAR_7] - VAR_6 < 1000) {

    VAR_24[VAR_7] = FUNC_4(VAR_6,
      VAR_11[VAR_7],
      VAR_17[VAR_7],
      VAR_12[VAR_7],
      VAR_18[VAR_7]);

    VAR_26[VAR_7] = FUNC_4(VAR_6,
      VAR_11[VAR_7],
      VAR_17[VAR_7],
      VAR_13[VAR_7],
      VAR_19[VAR_7]);

    VAR_25[VAR_7] = FUNC_4(VAR_6,
      VAR_11[VAR_7],
      VAR_17[VAR_7],
      VAR_14[VAR_7],
      VAR_20[VAR_7]);

    VAR_27[VAR_7] = FUNC_4(VAR_6,
      VAR_11[VAR_7],
      VAR_17[VAR_7],
      VAR_15[VAR_7],
      VAR_21[VAR_7]);

    VAR_28[VAR_7] = FUNC_4(VAR_6,
      VAR_11[VAR_7],
      VAR_17[VAR_7],
      VAR_16[VAR_7],
      VAR_22[VAR_7]);
   }

   else {
    VAR_24[VAR_7] = VAR_12[VAR_7];
    VAR_26[VAR_7] = VAR_13[VAR_7];
    VAR_25[VAR_7] = VAR_14[VAR_7];
    VAR_27[VAR_7] = VAR_15[VAR_7];
    VAR_28[VAR_7] = VAR_16[VAR_7];
   }
  }

  else if (VAR_17[VAR_7] - VAR_6 < 1000) {
   VAR_24[VAR_7] = VAR_18[VAR_7];
   VAR_26[VAR_7] = VAR_19[VAR_7];
   VAR_25[VAR_7] = VAR_20[VAR_7];
   VAR_27[VAR_7] = VAR_21[VAR_7];
   VAR_28[VAR_7] = VAR_22[VAR_7];
  } else {
   VAR_24[VAR_7] = 0;
   VAR_26[VAR_7] = 0;
   VAR_25[VAR_7] = 0;
   VAR_27[VAR_7] = 0;
   VAR_28[VAR_7] = 0;
  }
 }

 FUNC_1(VAR_5, VAR_6, VAR_24, VAR_25,
      VAR_26);

 FUNC_3(VAR_35, VAR_4,
  "for frequency=%d, calibration correction = %d %d %d\n",
  VAR_6, VAR_24[0], VAR_24[1], VAR_24[2]);


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_10) {
   VAR_5->nf_5g.cal[VAR_7] = VAR_27[VAR_7];
   VAR_5->nf_5g.pwr[VAR_7] = VAR_28[VAR_7];
  } else {
   VAR_5->nf_2g.cal[VAR_7] = VAR_27[VAR_7];
   VAR_5->nf_2g.pwr[VAR_7] = VAR_28[VAR_7];
  }

 return 0;
}
