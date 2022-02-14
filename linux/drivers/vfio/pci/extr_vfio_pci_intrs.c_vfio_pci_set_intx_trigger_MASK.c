
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vfio_pci_device {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vfio_pci_device*) ;
 scalar_t__ FUNC_1 (struct vfio_pci_device*) ;
 int FUNC_2 (struct vfio_pci_device*) ;
 int FUNC_3 (struct vfio_pci_device*) ;
 int FUNC_4 (struct vfio_pci_device*,int ) ;
 int FUNC_5 (struct vfio_pci_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct vfio_pci_device *VAR_4,
         unsigned VAR_5, unsigned VAR_6,
         unsigned VAR_7, uint32_t VAR_8, void *VAR_9)
{
 if (FUNC_0(VAR_4) && !VAR_7 && (VAR_8 & VAR_3)) {
  FUNC_2(VAR_4);
  return 0;
 }

 if (!(FUNC_0(VAR_4) || FUNC_1(VAR_4)) || VAR_6 != 0 || VAR_7 != 1)
  return -VAR_0;

 if (VAR_8 & VAR_2) {
  int32_t VAR_10 = *(int32_t *)VAR_9;
  int VAR_11;

  if (FUNC_0(VAR_4))
   return FUNC_4(VAR_4, VAR_10);

  VAR_11 = FUNC_3(VAR_4);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_4(VAR_4, VAR_10);
  if (VAR_11)
   FUNC_2(VAR_4);

  return VAR_11;
 }

 if (!FUNC_0(VAR_4))
  return -VAR_0;

 if (VAR_8 & VAR_3) {
  FUNC_5(VAR_4, ((void*)0));
 } else if (VAR_8 & VAR_1) {
  uint8_t VAR_12 = *(uint8_t *)VAR_9;
  if (VAR_12)
   FUNC_5(VAR_4, ((void*)0));
 }
 return 0;
}
