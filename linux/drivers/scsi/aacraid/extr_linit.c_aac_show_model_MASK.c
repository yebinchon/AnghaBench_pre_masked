
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {char* adapter_type_text; } ;
struct aac_dev {size_t cardtype; TYPE_1__ supplement_adapter_info; } ;
typedef int ssize_t ;
struct TYPE_6__ {char* model; } ;
struct TYPE_5__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_2,
         struct device_attribute *VAR_3, char *VAR_4)
{
 struct aac_dev *VAR_5 = (struct aac_dev*)FUNC_0(VAR_2)->hostdata;
 int VAR_6;

 if (VAR_5->supplement_adapter_info.adapter_type_text[0]) {
  char *VAR_7 = VAR_5->supplement_adapter_info.adapter_type_text;
  while (*VAR_7 && *VAR_7 != ' ')
   ++VAR_7;
  while (*VAR_7 == ' ')
   ++VAR_7;
  VAR_6 = FUNC_1(VAR_4, VAR_0, "%s\n", VAR_7);
 } else
  VAR_6 = FUNC_1(VAR_4, VAR_0, "%s\n",
    VAR_1[VAR_5->cardtype].model);
 return VAR_6;
}
