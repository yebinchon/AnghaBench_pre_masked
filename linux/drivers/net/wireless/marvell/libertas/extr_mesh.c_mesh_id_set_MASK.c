
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mrvl_meshie_val {int dummy; } ;
struct TYPE_3__ {int mesh_id_len; struct mrvl_meshie* mesh_id; } ;
struct mrvl_meshie {int len; TYPE_1__ val; } ;
struct mrvl_mesh_defaults {char const meshie; } ;
struct lbs_private {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct cmd_ds_mesh_config {int length; int * data; } ;
typedef int ssize_t ;
struct TYPE_4__ {struct lbs_private* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lbs_private*,struct cmd_ds_mesh_config*,int ,int ) ;
 int FUNC_2 (struct mrvl_meshie*,char const*,int) ;
 int FUNC_3 (struct cmd_ds_mesh_config*,int ,int) ;
 int FUNC_4 (struct device*,struct mrvl_mesh_defaults*) ;
 int FUNC_5 (char const*) ;
 TYPE_2__* FUNC_6 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4, struct device_attribute *VAR_5,
      const char *VAR_6, size_t VAR_7)
{
 struct cmd_ds_mesh_config VAR_8;
 struct mrvl_mesh_defaults VAR_9;
 struct mrvl_meshie *VAR_10;
 struct lbs_private *VAR_11 = FUNC_6(VAR_4)->ml_priv;
 int VAR_12;
 int VAR_13;

 if (VAR_7 < 2 || VAR_7 > VAR_3 + 1)
  return -VAR_2;

 FUNC_3(&VAR_8, 0, sizeof(struct cmd_ds_mesh_config));
 VAR_10 = (struct mrvl_meshie *) &VAR_8.data[0];


 VAR_13 = FUNC_4(VAR_4, &VAR_9);

 VAR_8.length = FUNC_0(sizeof(struct mrvl_meshie));


 FUNC_2(VAR_10, &VAR_9.meshie, sizeof(struct mrvl_meshie));

 VAR_12 = VAR_7 - 1;
 FUNC_2(VAR_10->val.mesh_id, VAR_6, VAR_12);

 VAR_10->val.mesh_id_len = VAR_12;

 VAR_10->len = sizeof(struct mrvl_meshie_val) - VAR_3 + VAR_12;

 VAR_13 = FUNC_1(VAR_11, &VAR_8, VAR_0,
       VAR_1);
 if (VAR_13)
  return VAR_13;

 return FUNC_5(VAR_6);
}
