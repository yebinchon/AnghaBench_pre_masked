
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef scalar_t__ u_char ;
typedef scalar_t__ u16 ;
struct vc_data {int vc_cols; int vc_rows; int vc_size_row; scalar_t__ vc_origin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct vc_data*) ;
 int FUNC_1 (struct vc_data*) ;
 int FUNC_2 (scalar_t__*,char**,int) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (scalar_t__*,int) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(struct vc_data *VAR_12, u_char VAR_13, u_char VAR_14, u_short VAR_15)
{
 static u_char VAR_16[8];
 static int VAR_17;
 int VAR_18;
 char *VAR_19;
 u16 VAR_20;

 if (VAR_13 == VAR_1 && VAR_14 == VAR_3)
  goto do_goto;
 if (VAR_13 == VAR_0 && VAR_14 == '\n')
  goto do_goto;
 if (VAR_13 != 0)
  goto oops;
 if (VAR_14 == 8) {
  u16 VAR_21;

  if (VAR_17 == 0)
   return -1;
  VAR_21 = VAR_16[--VAR_17];
  VAR_16[VAR_17] = '\0';
  FUNC_4(&VAR_21, 1);
  return 1;
 }
 if (VAR_14 < '+' || VAR_14 > 'y')
  goto oops;
 VAR_20 = VAR_14;
 VAR_16[VAR_17++] = VAR_14;
 VAR_16[VAR_17] = '\0';
 FUNC_4(&VAR_20, 1);
 VAR_18 = (*VAR_16 >= '0') ? 3 : 4;
 if ((VAR_14 == '+' || VAR_14 == '-') && VAR_17 == 1)
  return 1;
 if (VAR_14 >= '0' && VAR_14 <= '9' && VAR_17 < VAR_18)
  return 1;
 if (VAR_17 < VAR_18 - 1 || VAR_17 > VAR_18)
  goto oops;
 if (VAR_14 < 'x' || VAR_14 > 'y') {
oops:
  if (!VAR_6)
   FUNC_5(" %s\n", FUNC_3(VAR_2));
  VAR_16[VAR_17 = 0] = '\0';
  VAR_9 = ((void*)0);
  return 1;
 }


 VAR_4 = FUNC_2(VAR_16, &VAR_19, 10);

 if (*VAR_19 == 'x') {
  if (*VAR_16 < '0')
   VAR_4 += VAR_10;
  else if (VAR_4 > 0)
   VAR_4--;

  if (VAR_4 >= VAR_12->vc_cols)
   VAR_4 = VAR_12->vc_cols - 1;
  VAR_5 = 1;
 } else {
  if (*VAR_16 < '0')
   VAR_4 += VAR_11;
  else if (VAR_4 > 0)
   VAR_4--;

  if (VAR_4 >= VAR_12->vc_rows)
   VAR_4 = VAR_12->vc_rows - 1;
  VAR_5 = 0;
 }
 VAR_16[VAR_17 = 0] = '\0';
do_goto:
 VAR_9 = ((void*)0);
 VAR_7 |= 0x01;
 if (VAR_5) {
  VAR_8 -= VAR_10 * 2;
  VAR_10 = VAR_4;
  VAR_8 += VAR_4 * 2;
  FUNC_1(VAR_12);
 } else {
  VAR_11 = VAR_4;
  VAR_8 = VAR_12->vc_origin + (VAR_4 * VAR_12->vc_size_row);
  FUNC_0(VAR_12);
 }
 return 1;
}
