
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int (* unlock_all ) (struct mtd_info*) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;
struct device {int dummy; } ;


 struct mtd_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtd_info*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0)
{
 struct mtd_info *VAR_1 = FUNC_0(VAR_0);
 struct onenand_chip *VAR_2 = VAR_1->priv;

 VAR_2->unlock_all(VAR_1);
 return 0;
}
