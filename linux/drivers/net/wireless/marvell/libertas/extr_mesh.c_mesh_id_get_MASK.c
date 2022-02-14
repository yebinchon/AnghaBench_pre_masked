
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t mesh_id_len; int mesh_id; } ;
struct TYPE_4__ {TYPE_1__ val; } ;
struct mrvl_mesh_defaults {TYPE_2__ meshie; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (char*,int ,size_t) ;
 int FUNC_2 (struct device*,struct mrvl_mesh_defaults*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct mrvl_mesh_defaults VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_1, &VAR_4);

 if (VAR_5)
  return VAR_5;

 if (VAR_4.meshie.val.mesh_id_len > VAR_0) {
  FUNC_0(VAR_1, "inconsistent mesh ID length\n");
  VAR_4.meshie.val.mesh_id_len = VAR_0;
 }

 FUNC_1(VAR_3, VAR_4.meshie.val.mesh_id, VAR_4.meshie.val.mesh_id_len);
 VAR_3[VAR_4.meshie.val.mesh_id_len] = '\n';
 VAR_3[VAR_4.meshie.val.mesh_id_len + 1] = '\0';

 return VAR_4.meshie.val.mesh_id_len + 1;
}
