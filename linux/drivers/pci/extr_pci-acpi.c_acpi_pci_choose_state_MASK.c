
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; scalar_t__ no_d3cold; } ;
typedef int pci_power_t ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static pci_power_t FUNC_1(struct pci_dev *VAR_6)
{
 int VAR_7, VAR_8;

 if (VAR_6->no_d3cold)
  VAR_8 = 128;
 else
  VAR_8 = 129;
 VAR_7 = FUNC_0(&VAR_6->dev, ((void*)0), VAR_8);
 if (VAR_7 < 0)
  return VAR_5;

 switch (VAR_7) {
 case 132:
  return VAR_0;
 case 131:
  return VAR_1;
 case 130:
  return VAR_2;
 case 128:
  return VAR_4;
 case 129:
  return VAR_3;
 }
 return VAR_5;
}
