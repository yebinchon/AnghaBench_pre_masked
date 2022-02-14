
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int biosbuild; int biosrev; } ;
struct aac_dev {TYPE_1__ adapter_info; } ;
typedef int ssize_t ;
struct TYPE_4__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*,int,int,int,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct aac_dev *VAR_4 = (struct aac_dev*)FUNC_0(VAR_1)->hostdata;
 int VAR_5, VAR_6;

 VAR_6 = FUNC_1(VAR_4->adapter_info.biosrev);
 VAR_5 = FUNC_2(VAR_3, VAR_0, "%d.%d-%d[%d]\n",
   VAR_6 >> 24, (VAR_6 >> 16) & 0xff, VAR_6 & 0xff,
   FUNC_1(VAR_4->adapter_info.biosbuild));
 return VAR_5;
}
