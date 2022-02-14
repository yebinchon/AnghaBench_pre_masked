
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* hpf_enabled ) (struct dasd_device*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 int VAR_1 ;
 struct dasd_device* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (char*,int ,char*,int) ;
 int FUNC_4 (struct dasd_device*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3, struct device_attribute *VAR_4,
        char *VAR_5)
{
 struct dasd_device *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(FUNC_5(VAR_3));
 if (FUNC_0(VAR_6))
  return -VAR_0;
 if (!VAR_6->discipline || !VAR_6->discipline->hpf_enabled) {
  FUNC_2(VAR_6);
  return FUNC_3(VAR_5, VAR_1, "%d\n", VAR_2);
 }
 VAR_7 = VAR_6->discipline->hpf_enabled(VAR_6);
 FUNC_2(VAR_6);
 return FUNC_3(VAR_5, VAR_1, "%d\n", VAR_7);
}
