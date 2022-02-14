
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_3__ {scalar_t__ mode; } ;
struct TYPE_4__ {TYPE_1__ ecc; } ;
struct davinci_nand_info {TYPE_2__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*) ;
 struct davinci_nand_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct davinci_nand_info *VAR_4 = FUNC_1(VAR_3);

 FUNC_2(&VAR_1);
 if (VAR_4->chip.ecc.mode == VAR_0)
  VAR_2 = 0;
 FUNC_3(&VAR_1);

 FUNC_0(&VAR_4->chip);

 return 0;
}
