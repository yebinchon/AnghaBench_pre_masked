
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ptp_clock_info {int n_pins; TYPE_1__* pin_config; } ;
struct TYPE_5__ {char* name; TYPE_3__** attrs; } ;
struct ptp_clock {struct device_attribute* pin_dev_attr; TYPE_2__ pin_attr_group; TYPE_2__** pin_attr_groups; TYPE_3__** pin_attr; struct ptp_clock_info* info; } ;
struct TYPE_6__ {int mode; int name; } ;
struct device_attribute {TYPE_3__ attr; int store; int show; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct device_attribute*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3(struct ptp_clock *VAR_4)
{
 struct ptp_clock_info *VAR_5 = VAR_4->info;
 int VAR_6 = -VAR_0, VAR_7, VAR_8 = VAR_5->n_pins;

 if (!VAR_8)
  return 0;

 VAR_4->pin_dev_attr = FUNC_0(VAR_8, sizeof(*VAR_4->pin_dev_attr),
        VAR_1);
 if (!VAR_4->pin_dev_attr)
  goto no_dev_attr;

 VAR_4->pin_attr = FUNC_0(1 + VAR_8, sizeof(*VAR_4->pin_attr), VAR_1);
 if (!VAR_4->pin_attr)
  goto no_pin_attr;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  struct device_attribute *VAR_9 = &VAR_4->pin_dev_attr[VAR_7];
  FUNC_2(&VAR_9->attr);
  VAR_9->attr.name = VAR_5->pin_config[VAR_7].name;
  VAR_9->attr.mode = 0644;
  VAR_9->show = VAR_2;
  VAR_9->store = VAR_3;
  VAR_4->pin_attr[VAR_7] = &VAR_9->attr;
 }

 VAR_4->pin_attr_group.name = "pins";
 VAR_4->pin_attr_group.attrs = VAR_4->pin_attr;

 VAR_4->pin_attr_groups[0] = &VAR_4->pin_attr_group;

 return 0;

no_pin_attr:
 FUNC_1(VAR_4->pin_dev_attr);
no_dev_attr:
 return VAR_6;
}
