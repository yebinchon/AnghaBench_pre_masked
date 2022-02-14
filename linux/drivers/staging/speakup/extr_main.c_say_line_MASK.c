
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u16 ;
struct vc_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__* VAR_3 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int * VAR_5 ;
 size_t VAR_6 ;
 int FUNC_2 (scalar_t__*,int) ;
 int FUNC_3 (char*,int) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_4(struct vc_data *VAR_8)
{
 int VAR_9 = FUNC_0(VAR_8);
 u16 *VAR_10;
 u_short VAR_11 = VAR_4;

 if (VAR_9 == 0) {
  FUNC_3("%s\n", FUNC_1(VAR_0));
  return;
 }
 VAR_3[VAR_9++] = '\n';
 if (VAR_7 == VAR_1) {
  VAR_10 = VAR_3;
  while (*VAR_10 == VAR_2)
   VAR_10++;
  FUNC_3("%zd, ", (VAR_10 - VAR_3) + 1);
 }
 VAR_4 = VAR_5[VAR_6];
 FUNC_2(VAR_3, VAR_9);
 VAR_4 = VAR_11;
}
