
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vfio_pci_device {scalar_t__* rbar; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,scalar_t__*) ;

__attribute__((used)) static bool FUNC_1(struct vfio_pci_device *VAR_2)
{
 int VAR_3 = 0, VAR_4 = VAR_0, VAR_5;
 u32 VAR_6;

 for (; VAR_4 <= VAR_1; VAR_3++, VAR_4 += 4) {
  if (VAR_2->rbar[VAR_3]) {
   VAR_5 = FUNC_0(VAR_2->pdev, VAR_4, &VAR_6);
   if (VAR_5 || VAR_2->rbar[VAR_3] != VAR_6)
    return 1;
  }
 }

 return 0;
}
