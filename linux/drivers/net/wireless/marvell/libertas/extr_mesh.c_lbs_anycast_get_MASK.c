
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmd_ds_mesh_access {int * data; } ;
typedef int ssize_t ;
typedef int mesh_access ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct lbs_private*,int ,struct cmd_ds_mesh_access*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cmd_ds_mesh_access*,int ,int) ;
 int FUNC_3 (char*,int,char*,int) ;
 TYPE_1__* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, char * VAR_3)
{
 struct lbs_private *VAR_4 = FUNC_4(VAR_1)->ml_priv;
 struct cmd_ds_mesh_access VAR_5;
 int VAR_6;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = FUNC_0(VAR_4, VAR_0, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_3, 12, "0x%X\n", FUNC_1(VAR_5.data[0]));
}
