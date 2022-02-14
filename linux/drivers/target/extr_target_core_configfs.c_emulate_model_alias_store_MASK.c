
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int model; } ;
struct se_device {TYPE_2__* transport; TYPE_1__ t10_wwn; scalar_t__ export_count; } ;
struct se_dev_attrib {int emulate_model_alias; struct se_device* da_dev; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int inquiry_prod; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct se_device*) ;
 int FUNC_2 (char*,struct se_device*,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (char const*,int*) ;
 struct se_dev_attrib* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct se_dev_attrib *VAR_5 = FUNC_5(VAR_2);
 struct se_device *VAR_6 = VAR_5->da_dev;
 bool VAR_7;
 int VAR_8;

 if (VAR_6->export_count) {
  FUNC_2("dev[%p]: Unable to change model alias"
   " while export_count is %d\n",
   VAR_6, VAR_6->export_count);
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_3, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_0(sizeof(VAR_6->t10_wwn.model) != VAR_1 + 1);
 if (VAR_7) {
  FUNC_1(VAR_6);
 } else {
  FUNC_3(VAR_6->t10_wwn.model, VAR_6->transport->inquiry_prod,
   sizeof(VAR_6->t10_wwn.model));
 }
 VAR_5->emulate_model_alias = VAR_7;
 return VAR_4;
}
