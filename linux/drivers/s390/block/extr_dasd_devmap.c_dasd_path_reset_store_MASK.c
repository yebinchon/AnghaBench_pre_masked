
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; } ;
typedef size_t ssize_t ;
typedef int __u8 ;
struct TYPE_2__ {int (* reset_path ) (struct dasd_device*,int ) ;} ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct dasd_device*) ;
 struct dasd_device* FUNC_1 (int ) ;
 int FUNC_2 (struct dasd_device*) ;
 scalar_t__ FUNC_3 (char const*,int,unsigned int*) ;
 int FUNC_4 (struct dasd_device*,int ) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_1, struct device_attribute *VAR_2,
        const char *VAR_3, size_t VAR_4)
{
 struct dasd_device *VAR_5;
 unsigned int VAR_6;

 VAR_5 = FUNC_1(FUNC_5(VAR_1));
 if (FUNC_0(VAR_5))
  return -VAR_0;

 if ((FUNC_3(VAR_3, 16, &VAR_6) != 0) || VAR_6 > 0xff)
  VAR_6 = 0;

 if (VAR_5->discipline && VAR_5->discipline->reset_path)
  VAR_5->discipline->reset_path(VAR_5, (__u8) VAR_6);

 FUNC_2(VAR_5);
 return VAR_4;
}
