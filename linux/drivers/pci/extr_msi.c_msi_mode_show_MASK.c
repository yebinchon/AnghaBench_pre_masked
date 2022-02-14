
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ is_msix; } ;
struct msi_desc {TYPE_2__ msi_attrib; } ;
struct TYPE_3__ {int name; } ;
struct device_attribute {TYPE_1__ attr; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct msi_desc* FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,int,unsigned long*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct msi_desc *VAR_4;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_2->attr.name, 10, &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_4 = FUNC_0(VAR_5);
 if (VAR_4)
  return FUNC_2(VAR_3, "%s\n",
    VAR_4->msi_attrib.is_msix ? "msix" : "msi");

 return -VAR_0;
}
