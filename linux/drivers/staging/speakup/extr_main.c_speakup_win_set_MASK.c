
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_cols; } ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,char*,...) ;
 char* FUNC_1 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static void FUNC_3(struct vc_data *VAR_13)
{
 char VAR_14[40];

 if (VAR_11 > 1) {
  FUNC_2("%s\n", FUNC_1(VAR_3));
  return;
 }
 if (VAR_6 < VAR_9 || VAR_7 < VAR_12) {
  FUNC_2("%s\n", FUNC_1(VAR_1));
  return;
 }
 if (VAR_11 && VAR_6 == VAR_9 && VAR_7 == VAR_12) {
  VAR_9 = 0;
  VAR_10 = VAR_13->vc_cols - 1;
  VAR_8 = VAR_7;
  FUNC_0(VAR_14, sizeof(VAR_14), FUNC_1(VAR_5),
    (int)VAR_12 + 1);
 } else {
  if (!VAR_11) {
   VAR_12 = VAR_7;
   VAR_9 = VAR_6;
  } else {
   VAR_8 = VAR_7;
   VAR_10 = VAR_6;
  }
  FUNC_0(VAR_14, sizeof(VAR_14), FUNC_1(VAR_4),
    (VAR_11) ?
    FUNC_1(VAR_0) : FUNC_1(VAR_2),
    (int)VAR_7 + 1, (int)VAR_6 + 1);
 }
 FUNC_2("%s\n", VAR_14);
 VAR_11++;
}
