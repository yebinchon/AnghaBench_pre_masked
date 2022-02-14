
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcf50633_mbc {TYPE_2__* pcf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* pdata; } ;
struct TYPE_3__ {unsigned long charger_reference_current_ma; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcf50633_mbc* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct pcf50633_mbc *VAR_6 = FUNC_0(VAR_2);
 unsigned long VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 if (!VAR_6->pcf->pdata->charger_reference_current_ma)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4, 10, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_8 = (VAR_7 << 8) / VAR_6->pcf->pdata->charger_reference_current_ma;
 if (VAR_8 > 255)
  VAR_8 = 255;
 FUNC_2(VAR_6->pcf, VAR_1, VAR_8);

 return VAR_5;
}
