
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ptp_clock {int pincfg_mux; TYPE_2__* info; } ;
struct TYPE_6__ {int name; } ;
struct device_attribute {TYPE_3__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {TYPE_1__* pin_config; } ;
struct TYPE_4__ {unsigned int func; unsigned int chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ptp_clock* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ptp_clock*,int ) ;
 int FUNC_4 (char*,int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3, struct device_attribute *VAR_4,
       char *VAR_5)
{
 struct ptp_clock *VAR_6 = FUNC_0(VAR_3);
 unsigned int VAR_7, VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_4->attr.name);
 if (VAR_9 < 0)
  return -VAR_0;

 if (FUNC_1(&VAR_6->pincfg_mux))
  return -VAR_1;

 VAR_7 = VAR_6->info->pin_config[VAR_9].func;
 VAR_8 = VAR_6->info->pin_config[VAR_9].chan;

 FUNC_2(&VAR_6->pincfg_mux);

 return FUNC_4(VAR_5, VAR_2, "%u %u\n", VAR_7, VAR_8);
}
