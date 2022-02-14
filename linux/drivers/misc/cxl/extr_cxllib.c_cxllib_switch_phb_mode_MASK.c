
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
typedef enum cxllib_mode { ____Placeholder_cxllib_mode } cxllib_mode ;


 int VAR_0 ;

 unsigned long VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,int ) ;

int FUNC_2(struct pci_dev *VAR_8, enum cxllib_mode VAR_9,
   unsigned long VAR_10)
{
 int VAR_11 = 0;

 if (!FUNC_0(VAR_0))
  return -VAR_3;

 switch (VAR_9) {
 case 128:
  VAR_11 = FUNC_1(VAR_8, VAR_6);
  if (VAR_11)
   VAR_11 = -VAR_2;
  else
   VAR_11 = -VAR_4;
  break;
 case 129:

  if (VAR_10 != VAR_1)
   return -VAR_3;
  VAR_11 = FUNC_1(VAR_8, VAR_5);
  if (VAR_11)
   return VAR_11;
  VAR_11 = FUNC_1(VAR_8, VAR_7);
  break;
 default:
  VAR_11 = -VAR_3;
 }
 return VAR_11;
}
