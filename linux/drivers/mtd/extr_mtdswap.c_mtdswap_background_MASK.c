
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdswap_dev {int dummy; } ;
struct mtd_blktrans_dev {int dummy; } ;


 struct mtdswap_dev* FUNC_0 (struct mtd_blktrans_dev*) ;
 scalar_t__ FUNC_1 (struct mtd_blktrans_dev*) ;
 int FUNC_2 (struct mtdswap_dev*,int) ;

__attribute__((used)) static void FUNC_3(struct mtd_blktrans_dev *VAR_0)
{
 struct mtdswap_dev *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 while (1) {
  VAR_2 = FUNC_2(VAR_1, 1);
  if (VAR_2 || FUNC_1(VAR_0))
   return;
 }
}
