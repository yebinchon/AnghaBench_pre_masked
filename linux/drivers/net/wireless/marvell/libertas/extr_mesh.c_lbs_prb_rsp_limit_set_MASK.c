
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lbs_private {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmd_ds_mesh_access {void** data; } ;
typedef int ssize_t ;
typedef int mesh_access ;
struct TYPE_2__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (struct lbs_private*,int ,struct cmd_ds_mesh_access*) ;
 int FUNC_3 (struct cmd_ds_mesh_access*,int ,int) ;
 int FUNC_4 (char const*) ;
 TYPE_1__* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct lbs_private *VAR_7 = FUNC_5(VAR_3)->ml_priv;
 struct cmd_ds_mesh_access VAR_8;
 int VAR_9;
 unsigned long VAR_10;

 FUNC_3(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.data[0] = FUNC_0(VAR_1);

 VAR_9 = FUNC_1(VAR_5, 10, &VAR_10);
 if (VAR_9)
  return VAR_9;
 if (VAR_10 > 15)
  return -VAR_2;

 VAR_8.data[1] = FUNC_0(VAR_10);

 VAR_9 = FUNC_2(VAR_7, VAR_0,
   &VAR_8);
 if (VAR_9)
  return VAR_9;

 return FUNC_4(VAR_5);
}
