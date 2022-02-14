
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lbs_private {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmd_ds_mesh_access {int * data; } ;
typedef int ssize_t ;
typedef int mesh_access ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lbs_private*,int ,struct cmd_ds_mesh_access*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cmd_ds_mesh_access*,int ,int) ;
 int FUNC_4 (char*,int,char*,int) ;
 TYPE_1__* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_2,
  struct device_attribute *VAR_3, char *VAR_4)
{
 struct lbs_private *VAR_5 = FUNC_5(VAR_2)->ml_priv;
 struct cmd_ds_mesh_access VAR_6;
 int VAR_7;
 u32 VAR_8;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.data[0] = FUNC_0(VAR_0);

 VAR_7 = FUNC_1(VAR_5, VAR_1,
   &VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_8 = FUNC_2(VAR_6.data[1]);
 return FUNC_4(VAR_4, 10, "%d\n", VAR_8);
}
