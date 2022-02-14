
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {scalar_t__ vc_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct vc_data*,int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_5 (struct vc_data*,int ) ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct vc_data *VAR_10)
{
 if ((VAR_10->vc_num != VAR_4) || !VAR_9 || VAR_8)
  return;
 if (!FUNC_7())
  return;
 if (VAR_3 != VAR_7)
  VAR_6 = VAR_3;
 VAR_3 = VAR_7;
 FUNC_4(0);
 if (FUNC_1(VAR_10, 0) == -1) {
  FUNC_0(&VAR_2);
  if (!VAR_5)
   FUNC_3();
  FUNC_5(VAR_10, VAR_0);
 } else {
  FUNC_2(0, 0);
  FUNC_6(0);
  FUNC_5(VAR_10, VAR_1);
 }
}
