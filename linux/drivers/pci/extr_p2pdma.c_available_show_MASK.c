
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* p2pdma; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ pool; } ;


 int VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int ,char*,size_t) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_1);
 size_t VAR_5 = 0;

 if (VAR_4->p2pdma->pool)
  VAR_5 = FUNC_0(VAR_4->p2pdma->pool);

 return FUNC_1(VAR_3, VAR_0, "%zd\n", VAR_5);
}
