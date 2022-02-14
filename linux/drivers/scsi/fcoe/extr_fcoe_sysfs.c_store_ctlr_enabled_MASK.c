
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fcoe_ctlr_device {int enabled; TYPE_1__* f; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* set_fcoe_ctlr_enabled ) (struct fcoe_ctlr_device*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;



 struct fcoe_ctlr_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct fcoe_ctlr_device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
      struct device_attribute *VAR_3,
      const char *VAR_4, size_t VAR_5)
{
 struct fcoe_ctlr_device *VAR_6 = FUNC_0(VAR_2);
 bool VAR_7;
 int VAR_8;

 if (*VAR_4 == '1')
  VAR_7 = 1;
 else if (*VAR_4 == '0')
  VAR_7 = 0;
 else
  return -VAR_0;

 switch (VAR_6->enabled) {
 case 129:
  if (VAR_7)
   return VAR_5;
  VAR_6->enabled = 130;
  break;
 case 130:
  if (!VAR_7)
   return VAR_5;
  VAR_6->enabled = 129;
  break;
 case 128:
  return -VAR_1;
 };

 VAR_8 = VAR_6->f->set_fcoe_ctlr_enabled(VAR_6);
 if (VAR_8)
  return VAR_8;

 return VAR_5;
}
