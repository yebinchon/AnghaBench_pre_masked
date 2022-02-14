
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int error_state; int dev; } ;
typedef int pci_channel_state_t ;


 int FUNC_0 (int *) ;




__attribute__((used)) static inline bool FUNC_1(struct pci_dev *VAR_0,
     pci_channel_state_t VAR_1)
{
 bool VAR_2 = 0;

 FUNC_0(&VAR_0->dev);
 switch (VAR_1) {
 case 128:
  switch (VAR_0->error_state) {
  case 130:
  case 129:
  case 128:
   VAR_2 = 1;
   break;
  }
  break;
 case 130:
  switch (VAR_0->error_state) {
  case 130:
  case 129:
   VAR_2 = 1;
   break;
  }
  break;
 case 129:
  switch (VAR_0->error_state) {
  case 130:
  case 129:
   VAR_2 = 1;
   break;
  }
  break;
 }
 if (VAR_2)
  VAR_0->error_state = VAR_1;
 return VAR_2;
}
