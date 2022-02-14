
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vfio_pci_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vfio_pci_device*) ;
 int FUNC_1 (struct vfio_pci_device*) ;

__attribute__((used)) static int FUNC_2(struct vfio_pci_device *VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      unsigned VAR_8, uint32_t VAR_9, void *VAR_10)
{
 if (!FUNC_0(VAR_5) || VAR_7 != 0 || VAR_8 != 1)
  return -VAR_0;

 if (VAR_9 & VAR_4) {
  FUNC_1(VAR_5);
 } else if (VAR_9 & VAR_2) {
  uint8_t VAR_11 = *(uint8_t *)VAR_10;
  if (VAR_11)
   FUNC_1(VAR_5);
 } else if (VAR_9 & VAR_3) {
  return -VAR_1;
 }

 return 0;
}
