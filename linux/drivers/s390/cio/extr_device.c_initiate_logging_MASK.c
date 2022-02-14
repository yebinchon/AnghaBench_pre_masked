
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sch_no; int ssid; } ;
struct subchannel {TYPE_1__ schid; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (char*,int ,int ,int) ;
 struct subchannel* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
   const char *VAR_2, size_t VAR_3)
{
 struct subchannel *VAR_4 = FUNC_3(VAR_0);
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4->schid);
 if (VAR_5 < 0) {
  FUNC_2("Logging for subchannel 0.%x.%04x failed with errno=%d\n",
   VAR_4->schid.ssid, VAR_4->schid.sch_no, VAR_5);
  return VAR_5;
 }
 FUNC_1("Logging for subchannel 0.%x.%04x was triggered\n",
    VAR_4->schid.ssid, VAR_4->schid.sch_no);
 return VAR_3;
}
