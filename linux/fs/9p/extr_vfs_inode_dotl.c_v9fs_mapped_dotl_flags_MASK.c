
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dotl_openflag_map {int open_flag; int dotl_flag; int member_1; int member_0; } ;


 int FUNC_0 (struct dotl_openflag_map*) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

__attribute__((used)) static int FUNC_1(int VAR_28)
{
 int VAR_29;
 int VAR_30 = 0;
 struct dotl_openflag_map VAR_31[] = {
  { VAR_3, VAR_16 },
  { VAR_7, VAR_20 },
  { VAR_10, VAR_24 },
  { VAR_1, VAR_14 },
  { VAR_12, VAR_26 },
  { VAR_6, VAR_19 },
  { VAR_0, VAR_21 },
  { VAR_4, VAR_17 },
  { VAR_8, VAR_22 },
  { VAR_5, VAR_18 },
  { VAR_11, VAR_25 },
  { VAR_9, VAR_23 },
  { VAR_2, VAR_15 },
  { VAR_13, VAR_27},
 };
 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_31); VAR_29++) {
  if (VAR_28 & VAR_31[VAR_29].open_flag)
   VAR_30 |= VAR_31[VAR_29].dotl_flag;
 }
 return VAR_30;
}
