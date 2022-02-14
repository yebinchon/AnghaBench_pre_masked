
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (struct bnxt*,int *,int ) ;
 int FUNC_8 (struct bnxt*) ;
 int FUNC_9 (struct bnxt*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (int ,char*,int) ;

__attribute__((used)) static int FUNC_12(struct bnxt *VAR_1)
{
 int VAR_2;


 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2) {
  FUNC_10(VAR_1->dev, "hwrm query capability failure rc: %x\n",
      VAR_2);
  return -VAR_0;
 }

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  FUNC_11(VAR_1->dev, "hwrm query adv flow mgnt failure rc: %d\n",
       VAR_2);

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  FUNC_11(VAR_1->dev, "hwrm query error recovery failure rc: %d\n",
       VAR_2);

 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2)
  return -VAR_0;

 VAR_2 = FUNC_7(VAR_1, ((void*)0), 0);
 if (VAR_2)
  return -VAR_0;

 FUNC_6(VAR_1);
 FUNC_9(VAR_1);
 FUNC_8(VAR_1);
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 return 0;
}
