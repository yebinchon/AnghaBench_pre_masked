
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct pcf50633_mbc {TYPE_2__* pcf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* pdata; } ;
struct TYPE_3__ {int charger_reference_current_ma; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcf50633_mbc* FUNC_0 (struct device*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (char*,char*,unsigned int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct pcf50633_mbc *VAR_5 = FUNC_0(VAR_2);
 u8 VAR_6 = FUNC_1(VAR_5->pcf, VAR_1);
 unsigned int VAR_7;

 if (!VAR_5->pcf->pdata->charger_reference_current_ma)
  return -VAR_0;

 VAR_7 = (VAR_5->pcf->pdata->charger_reference_current_ma * VAR_6) >> 8;

 return FUNC_2(VAR_4, "%u\n", VAR_7);
}
