
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_char ;
typedef int u16 ;
struct vc_data {scalar_t__ vc_cols; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vc_data*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct vc_data*,scalar_t__*,int *) ;
 int FUNC_3 (struct vc_data*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_8)
{
 u_char VAR_9;
 u16 VAR_10;
 u_short VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

 VAR_4 |= 0x01;

 if (VAR_6 == 0) {
  if (VAR_7 == 0) {
   FUNC_1(VAR_8, VAR_3);
   return;
  }
  VAR_7--;
  VAR_6 = VAR_8->vc_cols;
  VAR_11 = VAR_2;
 }
 while (1) {
  if (VAR_6 == 0) {
   if (VAR_7 == 0) {
    VAR_11 = VAR_3;
    break;
   }
   if (VAR_11 != VAR_2)
    VAR_11 = VAR_1;
   if (VAR_13 > 0)
    break;
   VAR_7--;
   VAR_6 = VAR_8->vc_cols - 1;
  } else {
   VAR_6--;
  }
  VAR_5 -= 2;
  VAR_10 = FUNC_2(VAR_8, (u_short *)VAR_5, &VAR_9);
  if (VAR_10 == VAR_0 || VAR_10 == 0)
   VAR_13 = 0;
  else if (VAR_10 < 0x100 && FUNC_0(VAR_10))
   VAR_13 = 1;
  else
   VAR_13 = 2;
  if (VAR_13 < VAR_12) {
   VAR_5 += 2;
   VAR_6++;
   break;
  }
  VAR_12 = VAR_13;
 }
 if (VAR_6 == 0 && VAR_11 == VAR_2)
  VAR_11 = VAR_1;
 if (VAR_11 > 0 && VAR_11 < VAR_2)
  FUNC_1(VAR_8, VAR_11);
 FUNC_3(VAR_8);
}
