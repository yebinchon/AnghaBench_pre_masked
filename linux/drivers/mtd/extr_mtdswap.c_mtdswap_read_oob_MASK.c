
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtdswap_dev {int dev; int mtd; } ;
struct mtd_oob_ops {int ooblen; int oobretlen; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int ,...) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ,struct mtd_oob_ops*) ;

__attribute__((used)) static int FUNC_3(struct mtdswap_dev *VAR_1, loff_t VAR_2,
   struct mtd_oob_ops *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1->mtd, VAR_2, VAR_3);

 if (FUNC_1(VAR_4))
  return VAR_4;

 if (VAR_4) {
  FUNC_0(VAR_1->dev, "Read OOB failed %d for block at %08llx\n",
   VAR_4, VAR_2);
  return VAR_4;
 }

 if (VAR_3->oobretlen < VAR_3->ooblen) {
  FUNC_0(VAR_1->dev, "Read OOB return short read (%zd bytes not "
   "%zd) for block at %08llx\n",
   VAR_3->oobretlen, VAR_3->ooblen, VAR_2);
  return -VAR_0;
 }

 return 0;
}
