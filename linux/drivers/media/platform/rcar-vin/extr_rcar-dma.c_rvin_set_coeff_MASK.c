
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vin_coeff {unsigned short xs_value; int * coeff_set; } ;
struct rvin_dev {int dummy; } ;


 int FUNC_0 (struct vin_coeff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct rvin_dev*,int ,int ) ;
 struct vin_coeff* VAR_24 ;

__attribute__((used)) static void FUNC_2(struct rvin_dev *VAR_25, unsigned short VAR_26)
{
 int VAR_27;
 const struct vin_coeff *VAR_28 = ((void*)0);
 const struct vin_coeff *VAR_29 = ((void*)0);


 for (VAR_27 = 0; VAR_27 < FUNC_0(VAR_24); VAR_27++) {
  VAR_28 = VAR_29;
  VAR_29 = &VAR_24[VAR_27];

  if (VAR_26 < VAR_29->xs_value)
   break;
 }


 if (VAR_28 &&
     VAR_26 - VAR_28->xs_value < VAR_29->xs_value - VAR_26)
  VAR_29 = VAR_28;


 FUNC_1(VAR_25, VAR_29->coeff_set[0], VAR_0);
 FUNC_1(VAR_25, VAR_29->coeff_set[1], VAR_1);
 FUNC_1(VAR_25, VAR_29->coeff_set[2], VAR_2);

 FUNC_1(VAR_25, VAR_29->coeff_set[3], VAR_3);
 FUNC_1(VAR_25, VAR_29->coeff_set[4], VAR_4);
 FUNC_1(VAR_25, VAR_29->coeff_set[5], VAR_5);

 FUNC_1(VAR_25, VAR_29->coeff_set[6], VAR_6);
 FUNC_1(VAR_25, VAR_29->coeff_set[7], VAR_7);
 FUNC_1(VAR_25, VAR_29->coeff_set[8], VAR_8);

 FUNC_1(VAR_25, VAR_29->coeff_set[9], VAR_9);
 FUNC_1(VAR_25, VAR_29->coeff_set[10], VAR_10);
 FUNC_1(VAR_25, VAR_29->coeff_set[11], VAR_11);

 FUNC_1(VAR_25, VAR_29->coeff_set[12], VAR_12);
 FUNC_1(VAR_25, VAR_29->coeff_set[13], VAR_13);
 FUNC_1(VAR_25, VAR_29->coeff_set[14], VAR_14);

 FUNC_1(VAR_25, VAR_29->coeff_set[15], VAR_15);
 FUNC_1(VAR_25, VAR_29->coeff_set[16], VAR_16);
 FUNC_1(VAR_25, VAR_29->coeff_set[17], VAR_17);

 FUNC_1(VAR_25, VAR_29->coeff_set[18], VAR_18);
 FUNC_1(VAR_25, VAR_29->coeff_set[19], VAR_19);
 FUNC_1(VAR_25, VAR_29->coeff_set[20], VAR_20);

 FUNC_1(VAR_25, VAR_29->coeff_set[21], VAR_21);
 FUNC_1(VAR_25, VAR_29->coeff_set[22], VAR_22);
 FUNC_1(VAR_25, VAR_29->coeff_set[23], VAR_23);
}
