
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int,int) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,int) ;
 unsigned long VAR_5 ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_5 (struct pci_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

int FUNC_7(struct pci_dev *VAR_6, int VAR_7, int VAR_8)
{
 u32 VAR_9;
 unsigned long VAR_10;

 FUNC_4(VAR_6, VAR_7 + VAR_3,
   &VAR_9);
 if (FUNC_1(VAR_9, 20)) {
  FUNC_3(&VAR_6->dev,
   "Can't terminate PASID %#x, previous termination didn't complete\n",
   VAR_8);
  return -VAR_0;
 }

 VAR_9 &= ~VAR_4;
 VAR_9 |= VAR_8 & VAR_4;
 VAR_9 |= FUNC_0(20);
 FUNC_5(VAR_6,
   VAR_7 + VAR_3,
   VAR_9);

 VAR_10 = VAR_5 + (VAR_1 * VAR_2);
 FUNC_4(VAR_6, VAR_7 + VAR_3,
   &VAR_9);
 while (FUNC_1(VAR_9, 20)) {
  if (FUNC_6(VAR_5, VAR_10)) {
   FUNC_3(&VAR_6->dev,
    "Timeout while waiting for AFU to terminate PASID %#x\n",
    VAR_8);
   return -VAR_0;
  }
  FUNC_2();
  FUNC_4(VAR_6,
    VAR_7 + VAR_3,
    &VAR_9);
 }
 return 0;
}
