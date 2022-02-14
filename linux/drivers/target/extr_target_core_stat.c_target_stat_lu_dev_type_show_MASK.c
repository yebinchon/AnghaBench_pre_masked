
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {TYPE_1__* transport; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* get_device_type ) (struct se_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int) ;
 int FUNC_1 (struct se_device*) ;
 int FUNC_2 (struct se_device*) ;
 struct se_device* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1, char *VAR_2)
{
 struct se_device *VAR_3 = FUNC_3(VAR_1);


 return FUNC_0(VAR_2, VAR_0, "%u\n",
   VAR_3->transport->get_device_type(VAR_3));
}
