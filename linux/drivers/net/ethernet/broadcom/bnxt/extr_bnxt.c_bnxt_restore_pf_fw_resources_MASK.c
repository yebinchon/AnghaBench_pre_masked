
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct bnxt*,int,int) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*,int,int) ;
 int FUNC_6 (struct bnxt*,int) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;

int FUNC_10(struct bnxt *VAR_0)
{
 int VAR_1;

 FUNC_0();
 FUNC_3(VAR_0);

 if (FUNC_9(VAR_0->dev))
  FUNC_1(VAR_0, 1, 0);

 FUNC_7(VAR_0);
 FUNC_2(VAR_0);
 VAR_1 = FUNC_4(VAR_0);
 FUNC_6(VAR_0, VAR_1);

 if (FUNC_9(VAR_0->dev)) {
  if (VAR_1)
   FUNC_8(VAR_0->dev);
  else
   VAR_1 = FUNC_5(VAR_0, 1, 0);
 }

 return VAR_1;
}
