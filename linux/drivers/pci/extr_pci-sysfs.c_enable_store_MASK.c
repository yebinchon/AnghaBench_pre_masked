
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {scalar_t__ driver; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 size_t FUNC_3 (char const*,int ,unsigned long*) ;
 int FUNC_4 (struct pci_dev*) ;
 size_t FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 struct pci_dev* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_4, struct device_attribute *VAR_5,
        const char *VAR_6, size_t VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_7(VAR_4);
 unsigned long VAR_9;
 ssize_t VAR_10 = FUNC_3(VAR_6, 0, &VAR_9);

 if (VAR_10 < 0)
  return VAR_10;


 if (!FUNC_0(VAR_0))
  return -VAR_3;

 FUNC_1(VAR_4);
 if (VAR_4->driver)
  VAR_10 = -VAR_1;
 else if (VAR_9)
  VAR_10 = FUNC_5(VAR_8);
 else if (FUNC_6(VAR_8))
  FUNC_4(VAR_8);
 else
  VAR_10 = -VAR_2;
 FUNC_2(VAR_4);

 return VAR_10 < 0 ? VAR_10 : VAR_7;
}
