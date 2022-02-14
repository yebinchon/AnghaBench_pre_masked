
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ecc {int dev; int done; } ;
typedef enum mtk_ecc_operation { ____Placeholder_mtk_ecc_operation } mtk_ecc_operation ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(struct mtk_ecc *VAR_2, enum mtk_ecc_operation VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_2(&VAR_2->done, FUNC_1(500));
 if (!VAR_4) {
  FUNC_0(VAR_2->dev, "%s timeout - interrupt did not arrive)\n",
   (VAR_3 == VAR_0) ? "encoder" : "decoder");
  return -VAR_1;
 }

 return 0;
}
