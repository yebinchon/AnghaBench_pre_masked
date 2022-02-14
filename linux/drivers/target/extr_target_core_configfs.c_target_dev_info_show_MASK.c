
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* show_configfs_dev_params ) (struct se_device*,char*) ;} ;


 int FUNC_0 (struct se_device*,char*) ;
 struct se_device* FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct se_device*,char*,int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct config_item *VAR_0, char *VAR_1)
{
 struct se_device *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = 0;
 ssize_t VAR_4 = 0;

 FUNC_2(VAR_2, VAR_1, &VAR_3);
 VAR_4 += VAR_3;
 VAR_4 += VAR_2->transport->show_configfs_dev_params(VAR_2,
   VAR_1+VAR_4);
 return VAR_4;
}
