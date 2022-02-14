
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pm8001_hba_info {int dummy; } ;


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
 int FUNC_0 (struct pm8001_hba_info*,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct pm8001_hba_info *VAR_11)
{
 u32 VAR_12, VAR_13;
 u32 VAR_14;

 VAR_12 = FUNC_0(VAR_11, 0, VAR_1);
 VAR_13 = FUNC_0(VAR_11, 0, VAR_2);

 if (VAR_4 == (VAR_12 & VAR_10)) {

  VAR_12 = FUNC_0(VAR_11, 0, VAR_0);
  return -1;
 }


 if (VAR_7 == (VAR_13 & VAR_10)) {

  VAR_13 = FUNC_0(VAR_11, 0, VAR_3);
  return -1;
 }



 if (VAR_12 & VAR_6) {

  FUNC_0(VAR_11, 0, VAR_0);
  return -1;
 }



 if (VAR_13 & VAR_9) {

  return -1;
 }

 VAR_14 = 1 * 1000 * 1000;


 do {
  FUNC_1(1);
  VAR_12 = FUNC_0(VAR_11, 0, VAR_1)
   & VAR_5;
  VAR_13 = FUNC_0(VAR_11, 0, VAR_2)
   & VAR_8;
  if ((--VAR_14) == 0)
   return -1;
 } while ((VAR_12 != VAR_5) || (VAR_13 != VAR_8));
 return 0;
}
