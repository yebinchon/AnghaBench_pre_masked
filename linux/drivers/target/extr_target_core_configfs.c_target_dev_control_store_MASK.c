
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* set_configfs_dev_params ) (struct se_device*,char const*,size_t) ;} ;


 int FUNC_0 (struct se_device*,char const*,size_t) ;
 struct se_device* FUNC_1 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_0,
  const char *VAR_1, size_t VAR_2)
{
 struct se_device *VAR_3 = FUNC_1(VAR_0);

 return VAR_3->transport->set_configfs_dev_params(VAR_3, VAR_1, VAR_2);
}
