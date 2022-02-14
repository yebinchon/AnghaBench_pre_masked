
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item {int dummy; } ;
typedef unsigned int ssize_t ;
struct TYPE_2__ {char* hr_dev_name; scalar_t__ hr_bdev; } ;


 unsigned int FUNC_0 (char*,char*,char*) ;
 TYPE_1__* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0, char *VAR_1)
{
 unsigned int VAR_2 = 0;

 if (FUNC_1(VAR_0)->hr_bdev)
  VAR_2 = FUNC_0(VAR_1, "%s\n", FUNC_1(VAR_0)->hr_dev_name);

 return VAR_2;
}
