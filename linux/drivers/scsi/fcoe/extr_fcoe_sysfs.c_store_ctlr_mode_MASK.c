
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr_device {int enabled; TYPE_1__* f; int mode; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* set_fcoe_ctlr_mode ) (struct fcoe_ctlr_device*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct fcoe_ctlr_device*,char*,...) ;
 struct fcoe_ctlr_device* FUNC_1 (struct device*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (struct fcoe_ctlr_device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_5,
          struct device_attribute *VAR_6,
          const char *VAR_7, size_t VAR_8)
{
 struct fcoe_ctlr_device *VAR_9 = FUNC_1(VAR_5);
 char VAR_10[VAR_3 + 1];

 if (VAR_8 > VAR_3)
  return -VAR_1;

 FUNC_3(VAR_10, VAR_7, VAR_8);

 if (VAR_10[VAR_8 - 1] == '\n')
  VAR_10[VAR_8 - 1] = '\0';
 else
  VAR_10[VAR_8] = '\0';

 switch (VAR_9->enabled) {
 case 129:
  FUNC_0(VAR_9, "Cannot change mode when enabled.\n");
  return -VAR_0;
 case 130:
  if (!VAR_9->f->set_fcoe_ctlr_mode) {
   FUNC_0(VAR_9,
       "Mode change not supported by LLD.\n");
   return -VAR_2;
  }

  VAR_9->mode = FUNC_2(VAR_10);
  if (VAR_9->mode == VAR_4) {
   FUNC_0(VAR_9, "Unknown mode %s provided.\n",
       VAR_7);
   return -VAR_1;
  }

  VAR_9->f->set_fcoe_ctlr_mode(VAR_9);
  FUNC_0(VAR_9, "Mode changed to %s.\n", VAR_7);

  return VAR_8;
 case 128:
 default:
  FUNC_0(VAR_9, "Mode change not supported.\n");
  return -VAR_2;
 };
}
