
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct vnt_private {int rf_type; } ;


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






 int ** VAR_12 ;
 int ** VAR_13 ;
 int ** VAR_14 ;
 int ** VAR_15 ;
 int ** VAR_16 ;
 int ** VAR_17 ;
 int ** VAR_18 ;
 int ** VAR_19 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct vnt_private*,int ,int,int ,int,int *) ;
 int ** VAR_20 ;
 int ** VAR_21 ;
 int ** VAR_22 ;
 int ** VAR_23 ;
 int ** VAR_24 ;
 int ** VAR_25 ;
 int ** VAR_26 ;

int FUNC_2(struct vnt_private *VAR_27)
{
 int VAR_28 = 0;
 u16 VAR_29 = 0, VAR_30 = 0, VAR_31 = 0;
 u8 *VAR_32 = ((void*)0), *VAR_33 = ((void*)0), *VAR_34 = ((void*)0);
 u16 VAR_35, VAR_36;
 u8 VAR_37[256];

 switch (VAR_27->rf_type) {
 case 132:
 case 131:
  VAR_29 = VAR_0 * 3;
  VAR_30 = VAR_3 * 3;
  VAR_31 = VAR_3 * 3;
  VAR_32 = &VAR_14[0][0];
  VAR_33 = &VAR_12[0][0];
  VAR_34 = &VAR_13[0][0];
  break;
 case 133:
  VAR_29 = VAR_1 * 3;
  VAR_30 = VAR_2 * 3;
  VAR_31 = VAR_2 * 3;
  VAR_32 = &VAR_18[0][0];
  VAR_33 = &VAR_15[0][0];
  VAR_34 = &VAR_16[0][0];
  break;
 case 130:
  VAR_29 = VAR_4 * 3;
  VAR_30 = VAR_3 * 3;
  VAR_31 = VAR_3 * 3;
  VAR_32 = &VAR_22[0][0];
  VAR_33 = &VAR_20[0][0];
  VAR_34 = &VAR_21[0][0];
  break;
 case 129:
  VAR_29 = VAR_4 * 3;
  VAR_30 = VAR_3 * 3;
  VAR_31 = VAR_3 * 3;
  VAR_32 = &VAR_23[0][0];
  VAR_33 = &VAR_20[0][0];
  VAR_34 = &VAR_21[0][0];
  break;
 case 128:
  VAR_29 = VAR_5 * 3;
  VAR_30 = VAR_2 * 3;
  VAR_31 = VAR_2 * 3;
  VAR_32 = &VAR_26[0][0];
  VAR_33 = &VAR_24[0][0];
  VAR_34 = &VAR_25[0][0];
  break;
 }


 FUNC_0(VAR_37, VAR_32, VAR_29);

 VAR_28 = FUNC_1(VAR_27, VAR_11, 0,
         VAR_9, VAR_29, VAR_37);
 if (VAR_28)
  goto end;


 VAR_36 = 0;
 while (VAR_30 > 0) {
  if (VAR_30 >= 64)
   VAR_35 = 64;
  else
   VAR_35 = VAR_30;

  FUNC_0(VAR_37, VAR_33, VAR_35);

  VAR_28 = FUNC_1(VAR_27, VAR_11, VAR_36,
          VAR_6, VAR_35, VAR_37);
  if (VAR_28)
   goto end;

  VAR_30 -= VAR_35;
  VAR_36 += VAR_35;
  VAR_33 += VAR_35;
 }


 VAR_36 = 0;
 while (VAR_31 > 0) {
  if (VAR_31 >= 64)
   VAR_35 = 64;
  else
   VAR_35 = VAR_31;

  FUNC_0(VAR_37, VAR_34, VAR_35);

  VAR_28 = FUNC_1(VAR_27, VAR_11, VAR_36,
          VAR_7, VAR_35, VAR_37);
  if (VAR_28)
   goto end;

  VAR_31 -= VAR_35;
  VAR_36 += VAR_35;
  VAR_34 += VAR_35;
 }

 if (VAR_27->rf_type == 133) {
  VAR_29 = VAR_1 * 3;
  VAR_30 = VAR_2 * 3;
  VAR_32 = &VAR_19[0][0];
  VAR_33 = &VAR_17[0][0];

  FUNC_0(VAR_37, VAR_32, VAR_29);


  VAR_28 = FUNC_1(VAR_27, VAR_11, 0,
          VAR_10, VAR_29, VAR_37);
  if (VAR_28)
   goto end;


  VAR_36 = 0;
  while (VAR_30 > 0) {
   if (VAR_30 >= 64)
    VAR_35 = 64;
   else
    VAR_35 = VAR_30;

   FUNC_0(VAR_37, VAR_33, VAR_35);

   VAR_28 = FUNC_1(VAR_27, VAR_11, VAR_36,
           VAR_8, VAR_35,
           VAR_37);
   if (VAR_28)
    goto end;

   VAR_30 -= VAR_35;
   VAR_36 += VAR_35;
   VAR_33 += VAR_35;
  }
 }

end:
 return VAR_28;
}
