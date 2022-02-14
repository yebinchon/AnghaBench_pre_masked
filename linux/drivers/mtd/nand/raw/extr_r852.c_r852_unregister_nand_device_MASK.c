
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r852_device {scalar_t__ card_registered; int chip; } ;
struct mtd_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 struct mtd_info* FUNC_2 (int ) ;
 int FUNC_3 (struct r852_device*) ;

__attribute__((used)) static void FUNC_4(struct r852_device *VAR_1)
{
 struct mtd_info *VAR_2 = FUNC_2(VAR_1->chip);

 if (!VAR_1->card_registered)
  return;

 FUNC_0(&VAR_2->dev, &VAR_0);
 FUNC_1(VAR_1->chip);
 FUNC_3(VAR_1);
 VAR_1->card_registered = 0;
}
