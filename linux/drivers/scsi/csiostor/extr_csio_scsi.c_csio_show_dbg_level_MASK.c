
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int log_level; } ;
struct csio_lnode {TYPE_1__ params; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct csio_lnode* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct csio_lnode *VAR_4 = FUNC_1(FUNC_0(VAR_1));

 return FUNC_2(VAR_3, VAR_0, "%x\n", VAR_4->params.log_level);
}
