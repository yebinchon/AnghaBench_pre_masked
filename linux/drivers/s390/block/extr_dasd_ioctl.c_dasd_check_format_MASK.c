
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct format_check_t {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; } ;
struct dasd_block {struct dasd_device* base; } ;
struct TYPE_2__ {int (* check_device_format ) (struct dasd_device*,struct format_check_t*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dasd_device*,struct format_check_t*,int) ;
 int FUNC_1 (struct dasd_device*,struct format_check_t*,int) ;

__attribute__((used)) static int FUNC_2(struct dasd_block *VAR_2,
        struct format_check_t *VAR_3)
{
 struct dasd_device *VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->base;
 if (!VAR_4->discipline->check_device_format)
  return -VAR_1;

 VAR_5 = VAR_4->discipline->check_device_format(VAR_4, VAR_3, 1);
 if (VAR_5 == -VAR_0)
  VAR_5 = VAR_4->discipline->check_device_format(VAR_4, VAR_3, 0);

 return VAR_5;
}
