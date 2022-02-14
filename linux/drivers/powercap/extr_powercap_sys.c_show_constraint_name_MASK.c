
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct powercap_zone_constraint {TYPE_2__* ops; } ;
struct powercap_zone {int const_id_cnt; struct powercap_zone_constraint* constraints; } ;
struct TYPE_3__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* (* get_name ) (struct powercap_zone*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,size_t,char*,char const*) ;
 int FUNC_1 (int ,char*,int*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (struct powercap_zone*,int) ;
 struct powercap_zone* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
    struct device_attribute *VAR_4,
    char *VAR_5)
{
 const char *VAR_6;
 struct powercap_zone *VAR_7 = FUNC_4(VAR_3);
 int VAR_8;
 ssize_t VAR_9 = -VAR_1;
 struct powercap_zone_constraint *VAR_10;

 if (!FUNC_1(VAR_4->attr.name, "constraint_%d_", &VAR_8))
  return -VAR_0;
 if (VAR_8 >= VAR_7->const_id_cnt)
  return -VAR_0;
 VAR_10 = &VAR_7->constraints[VAR_8];

 if (VAR_10 && VAR_10->ops && VAR_10->ops->get_name) {
  VAR_6 = VAR_10->ops->get_name(VAR_7, VAR_8);
  if (VAR_6) {
   FUNC_0(VAR_5, VAR_2,
        "%s\n", VAR_6);
   VAR_5[VAR_2] = '\0';
   VAR_9 = FUNC_2(VAR_5);
  }
 }

 return VAR_9;
}
