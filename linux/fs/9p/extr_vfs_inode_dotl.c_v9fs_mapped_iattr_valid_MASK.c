
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dotl_iattr_map {int iattr_valid; int p9_iattr_valid; int member_1; int member_0; } ;


 int FUNC_0 (struct dotl_iattr_map*) ;
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

__attribute__((used)) static int FUNC_1(int VAR_18)
{
 int VAR_19;
 int VAR_20 = 0;
 struct dotl_iattr_map VAR_21[] = {
  { VAR_4, VAR_13 },
  { VAR_8, VAR_17 },
  { VAR_3, VAR_12 },
  { VAR_7, VAR_16 },
  { VAR_0, VAR_9 },
  { VAR_5, VAR_14 },
  { VAR_2, VAR_11 },
  { VAR_1, VAR_10 },
  { VAR_6, VAR_15 },
 };
 for (VAR_19 = 0; VAR_19 < FUNC_0(VAR_21); VAR_19++) {
  if (VAR_18 & VAR_21[VAR_19].iattr_valid)
   VAR_20 |= VAR_21[VAR_19].p9_iattr_valid;
 }
 return VAR_20;
}
