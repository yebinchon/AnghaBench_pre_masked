
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdswap_dev {int mtd; } ;
struct mtd_blktrans_dev {int dummy; } ;


 struct mtdswap_dev* FUNC_0 (struct mtd_blktrans_dev*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct mtd_blktrans_dev *VAR_0)
{
 struct mtdswap_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->mtd);
 return 0;
}
