
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; } ;


 int FUNC_0 (struct bnxt*,int,int) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,int,int) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct bnxt *VAR_0, bool VAR_1)
{
 if (!VAR_1)
  FUNC_1(VAR_0);
 if (FUNC_5(VAR_0->dev)) {
  int VAR_2;

  if (!VAR_1)
   FUNC_4(VAR_0);
  FUNC_0(VAR_0, 0, 0);
  VAR_2 = FUNC_2(VAR_0, 0, 0);
  if (!VAR_1 && !VAR_2)
   FUNC_3(VAR_0);
 }
}
