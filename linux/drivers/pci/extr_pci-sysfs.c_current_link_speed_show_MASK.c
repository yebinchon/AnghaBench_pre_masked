
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (struct pci_dev*,int ,int*) ;
 int FUNC_1 (char*,char*,char const*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
           struct device_attribute *VAR_4, char *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_2(VAR_3);
 u16 VAR_7;
 int VAR_8;
 const char *VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_1, &VAR_7);
 if (VAR_8)
  return -VAR_0;

 switch (VAR_7 & VAR_2) {
 case 130:
  VAR_9 = "32 GT/s";
  break;
 case 132:
  VAR_9 = "16 GT/s";
  break;
 case 128:
  VAR_9 = "8 GT/s";
  break;
 case 129:
  VAR_9 = "5 GT/s";
  break;
 case 131:
  VAR_9 = "2.5 GT/s";
  break;
 default:
  VAR_9 = "Unknown speed";
 }

 return FUNC_1(VAR_5, "%s\n", VAR_9);
}
