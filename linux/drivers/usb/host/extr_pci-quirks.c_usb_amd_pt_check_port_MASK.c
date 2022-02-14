
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int device; } ;
struct device {int dummy; } ;


 unsigned char FUNC_0 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 unsigned char VAR_11 ;
 int VAR_12 ;
 unsigned char VAR_13 ;
 int VAR_14 ;
 unsigned char VAR_15 ;
 int FUNC_1 (struct pci_dev*,int ,unsigned char*) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_3 (struct device*) ;

bool FUNC_4(struct device *VAR_16, int VAR_17)
{
 unsigned char VAR_18, VAR_19;
 struct pci_dev *VAR_20;
 u16 VAR_21;

 VAR_20 = FUNC_3(VAR_16);
 FUNC_2(VAR_20, VAR_6, VAR_8);

 FUNC_1(VAR_20, VAR_7, &VAR_18);
 if (VAR_18 != VAR_9)
  return 0;

 FUNC_2(VAR_20, VAR_6, VAR_10);

 FUNC_1(VAR_20, VAR_7, &VAR_18);
 if (VAR_18 != VAR_11)
  return 0;

 FUNC_2(VAR_20, VAR_6, VAR_12);

 FUNC_1(VAR_20, VAR_7, &VAR_18);
 if (VAR_18 != VAR_13)
  return 0;

 FUNC_2(VAR_20, VAR_6, VAR_14);

 FUNC_1(VAR_20, VAR_7, &VAR_18);
 if (VAR_18 != VAR_15)
  return 0;


 switch (VAR_20->device) {
 case 0x43b9:
 case 0x43ba:





  if (VAR_17 > 6) {
   VAR_21 = VAR_5;
   VAR_19 = VAR_17 - 7;
  } else {
   VAR_21 = VAR_4;
   VAR_19 = VAR_17 + 1;
  }
  break;
 case 0x43bb:





  if (VAR_17 > 2) {
   VAR_21 = VAR_3;
   VAR_19 = VAR_17 - 3;
  } else {
   VAR_21 = VAR_2;
   VAR_19 = VAR_17 + 5;
  }
  break;
 case 0x43bc:





  if (VAR_17 > 3) {
   VAR_21 = VAR_1;
   VAR_19 = VAR_17 - 4;
  } else {
   VAR_21 = VAR_0;
   VAR_19 = VAR_17 + 4;
  }
  break;
 default:
  return 0;
 }
 FUNC_2(VAR_20, VAR_6, VAR_21);
 FUNC_1(VAR_20, VAR_7, &VAR_18);

 return !(VAR_18 & FUNC_0(VAR_19));
}
