
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef int u_char ;
typedef int u16 ;
struct vc_data {int vc_cols; int vc_rows; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vc_data*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct vc_data*,scalar_t__*,int *) ;
 int FUNC_3 (struct vc_data*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_7)
{
 u_char VAR_8;
 u16 VAR_9;
 u_short VAR_10 = 0, VAR_11 = 2, VAR_12 = 0;

 VAR_3 |= 0x01;
 if (VAR_5 == VAR_7->vc_cols - 1 && VAR_6 == VAR_7->vc_rows - 1) {
  FUNC_1(VAR_7, VAR_1);
  return;
 }
 while (1) {
  VAR_9 = FUNC_2(VAR_7, (u_short *)VAR_4, &VAR_8);
  if (VAR_9 == VAR_0 || VAR_9 == 0)
   VAR_12 = 0;
  else if (VAR_9 < 0x100 && FUNC_0(VAR_9))
   VAR_12 = 1;
  else
   VAR_12 = 2;
  if (VAR_12 > VAR_11)
   break;
  if (VAR_5 >= VAR_7->vc_cols - 1) {
   if (VAR_6 == VAR_7->vc_rows - 1) {
    VAR_10 = VAR_1;
    break;
   }
   VAR_12 = 0;
   VAR_6++;
   VAR_5 = 0;
   VAR_10 = VAR_2;
  } else {
   VAR_5++;
  }
  VAR_4 += 2;
  VAR_11 = VAR_12;
 }
 if (VAR_10 > 0)
  FUNC_1(VAR_7, VAR_10);
 FUNC_3(VAR_7);
}
