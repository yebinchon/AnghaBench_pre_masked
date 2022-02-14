
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data_type; } ;
struct most_channel {TYPE_1__ cfg; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int most_ch_data_type; char* name; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (char*,int ,char*,...) ;
 struct most_channel* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3,
     char *VAR_4)
{
 int VAR_5;
 struct most_channel *VAR_6 = FUNC_2(VAR_2);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_6->cfg.data_type & VAR_1[VAR_5].most_ch_data_type)
   return FUNC_1(VAR_4, VAR_0, "%s",
     VAR_1[VAR_5].name);
 }
 return FUNC_1(VAR_4, VAR_0, "unconfigured\n");
}
