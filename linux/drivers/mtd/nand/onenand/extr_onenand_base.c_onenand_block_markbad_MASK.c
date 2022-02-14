
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int (* block_markbad ) (struct mtd_info*,int ) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (struct mtd_info*,int ) ;
 int FUNC_1 (struct mtd_info*,int ) ;
 int FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (struct mtd_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct mtd_info *VAR_1, loff_t VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_1->priv;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4) {

  if (VAR_4 > 0)
   return 0;
  return VAR_4;
 }

 FUNC_1(VAR_1, VAR_0);
 VAR_4 = VAR_3->block_markbad(VAR_1, VAR_2);
 FUNC_2(VAR_1);
 return VAR_4;
}
