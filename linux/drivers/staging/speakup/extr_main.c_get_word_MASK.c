
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_long ;
typedef int u_char ;
typedef int u16 ;
struct vc_data {int vc_cols; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_1 (struct vc_data*,int *,int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static u_long FUNC_4(struct vc_data *VAR_8)
{
 u_long VAR_9 = 0, VAR_10 = VAR_7, VAR_11 = VAR_5;
 u16 VAR_12;
 u16 VAR_13;
 u_char VAR_14;

 VAR_4 = VAR_3;
 VAR_12 = FUNC_1(VAR_8, (u_short *)VAR_11, &VAR_14);


 if (VAR_6 && VAR_12 == VAR_1) {
  *VAR_2 = '\0';
  FUNC_3("%s\n", FUNC_2(VAR_0));
  return 0;
 } else if (VAR_10 < VAR_8->vc_cols - 2 &&
     (VAR_12 == VAR_1 || VAR_12 == 0 || (VAR_12 < 0x100 && FUNC_0(VAR_12))) &&
     FUNC_1(VAR_8, (u_short *)&VAR_11 + 1, &VAR_14) > VAR_1) {
  VAR_11 += 2;
  VAR_10++;
 } else {
  while (VAR_10 > 0) {
   VAR_12 = FUNC_1(VAR_8, (u_short *)VAR_11 - 1, &VAR_14);
   if ((VAR_12 == VAR_1 || VAR_12 == 0 ||
        (VAR_12 < 0x100 && FUNC_0(VAR_12))) &&
       FUNC_1(VAR_8, (u_short *)VAR_11, &VAR_14) > VAR_1)
    break;
   VAR_11 -= 2;
   VAR_10--;
  }
 }
 VAR_13 = FUNC_1(VAR_8, (u_short *)VAR_11, &VAR_3);
 VAR_2[VAR_9++] = VAR_13;
 while (VAR_10 < VAR_8->vc_cols - 1) {
  VAR_11 += 2;
  VAR_10++;
  VAR_12 = FUNC_1(VAR_8, (u_short *)VAR_11, &VAR_14);
  if (VAR_12 == VAR_1 || VAR_12 == 0 ||
      (VAR_2[VAR_9 - 1] < 0x100 && FUNC_0(VAR_2[VAR_9 - 1]) &&
       VAR_12 > VAR_1))
   break;
  VAR_2[VAR_9++] = VAR_12;
 }
 VAR_2[VAR_9] = '\0';
 return VAR_9;
}
