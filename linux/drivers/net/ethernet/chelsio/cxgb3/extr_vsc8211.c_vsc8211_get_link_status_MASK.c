
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cphy {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 int FUNC_0 (unsigned int) ;
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
 int FUNC_1 (struct cphy*,int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct cphy *VAR_22, int *VAR_23,
       int *VAR_24, int *VAR_25, int *VAR_26)
{
 unsigned int VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31, VAR_32 = -1, VAR_33 = -1, VAR_34 = 0;

 VAR_31 = FUNC_1(VAR_22, VAR_11, VAR_13, &VAR_27);
 if (!VAR_31)
  VAR_31 = FUNC_1(VAR_22, VAR_11, VAR_14, &VAR_28);
 if (VAR_31)
  return VAR_31;

 if (VAR_23) {




  if (!(VAR_28 & VAR_7))
   VAR_31 = FUNC_1(VAR_22, VAR_11, VAR_14,
        &VAR_28);
  if (VAR_31)
   return VAR_31;
  *VAR_23 = (VAR_28 & VAR_7) != 0;
 }
 if (!(VAR_27 & VAR_2)) {
  VAR_33 = (VAR_27 & VAR_3) ? VAR_8 : VAR_9;
  if (VAR_27 & VAR_5)
   VAR_32 = VAR_20;
  else if (VAR_27 & VAR_4)
   VAR_32 = VAR_19;
  else
   VAR_32 = VAR_18;
 } else if (VAR_28 & VAR_6) {
  VAR_31 = FUNC_1(VAR_22, VAR_11, VAR_21,
       &VAR_28);
  if (VAR_31)
   return VAR_31;

  VAR_33 = (VAR_28 & VAR_10) ? VAR_8 : VAR_9;
  VAR_32 = FUNC_0(VAR_28);
  if (VAR_32 == 0)
   VAR_32 = VAR_18;
  else if (VAR_32 == 1)
   VAR_32 = VAR_19;
  else
   VAR_32 = VAR_20;

  if (VAR_26 && VAR_33 == VAR_8) {
   VAR_31 = FUNC_1(VAR_22, VAR_11, VAR_15,
        &VAR_29);
   if (!VAR_31)
    VAR_31 = FUNC_1(VAR_22, VAR_11,
         VAR_12, &VAR_30);
   if (VAR_31)
    return VAR_31;

   if (VAR_29 & VAR_30 & VAR_1)
    VAR_34 = VAR_16 | VAR_17;
   else if ((VAR_29 & VAR_1) &&
     (VAR_29 & VAR_0) &&
     (VAR_30 & VAR_0))
    VAR_34 = VAR_17;
   else if ((VAR_29 & VAR_0) &&
     (VAR_30 & VAR_1))
    VAR_34 = VAR_16;
  }
 }
 if (VAR_24)
  *VAR_24 = VAR_32;
 if (VAR_25)
  *VAR_25 = VAR_33;
 if (VAR_26)
  *VAR_26 = VAR_34;
 return 0;
}
