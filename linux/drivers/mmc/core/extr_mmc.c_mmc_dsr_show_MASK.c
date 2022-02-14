
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int dsr; scalar_t__ dsr_req; } ;
struct TYPE_2__ {scalar_t__ dsr_imp; } ;
struct mmc_card {TYPE_1__ csd; struct mmc_host* host; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct mmc_card* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0,
       struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct mmc_card *VAR_3 = FUNC_0(VAR_0);
 struct mmc_host *VAR_4 = VAR_3->host;

 if (VAR_3->csd.dsr_imp && VAR_4->dsr_req)
  return FUNC_1(VAR_2, "0x%x\n", VAR_4->dsr);
 else

  return FUNC_1(VAR_2, "0x%x\n", 0x404);
}
