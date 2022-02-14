
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {struct bbm_info* bbm; } ;
struct mtd_info {struct onenand_chip* priv; } ;
struct bbm_info {int (* isbad_bbt ) (struct mtd_info*,int ,int) ;} ;
typedef int loff_t ;


 int FUNC_0 (struct mtd_info*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct mtd_info *VAR_0, loff_t VAR_1, int VAR_2)
{
 struct onenand_chip *VAR_3 = VAR_0->priv;
 struct bbm_info *VAR_4 = VAR_3->bbm;


 return VAR_4->isbad_bbt(VAR_0, VAR_1, VAR_2);
}
