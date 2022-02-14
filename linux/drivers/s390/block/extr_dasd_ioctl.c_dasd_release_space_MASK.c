
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct format_data_t {int dummy; } ;
struct dasd_device {TYPE_1__* discipline; } ;
struct TYPE_2__ {int (* release_space ) (struct dasd_device*,struct format_data_t*) ;int (* is_ese ) (struct dasd_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dasd_device*) ;
 int FUNC_1 (struct dasd_device*,struct format_data_t*) ;

__attribute__((used)) static int FUNC_2(struct dasd_device *VAR_1,
         struct format_data_t *VAR_2)
{
 if (!VAR_1->discipline->is_ese && !VAR_1->discipline->is_ese(VAR_1))
  return -VAR_0;
 if (!VAR_1->discipline->release_space)
  return -VAR_0;

 return VAR_1->discipline->release_space(VAR_1, VAR_2);
}
