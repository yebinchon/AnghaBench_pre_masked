
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onenand_chip {int (* wait ) (struct mtd_info*,int ) ;} ;
struct mtd_info {struct onenand_chip* priv; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct mtd_info* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtd_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_0(VAR_1);
 struct onenand_chip *VAR_3 = VAR_2->priv;

 VAR_3->wait(VAR_2, VAR_0);
 return 0;
}
