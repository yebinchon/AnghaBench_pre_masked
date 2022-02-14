
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct davinci_mmc_config* platform_data; } ;
struct platform_device {int id; TYPE_1__ dev; } ;
struct mmc_host {int parent; } ;
struct davinci_mmc_config {int (* get_cd ) (int ) ;} ;


 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int ) ;
 struct platform_device* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_2(VAR_0->parent);
 struct davinci_mmc_config *VAR_2 = VAR_1->dev.platform_data;

 if (VAR_2 && VAR_2->get_cd)
  return VAR_2->get_cd(VAR_1->id);

 return FUNC_0(VAR_0);
}
