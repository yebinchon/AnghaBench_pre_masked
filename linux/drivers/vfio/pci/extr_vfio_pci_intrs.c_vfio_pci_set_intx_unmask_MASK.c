
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vfio_pci_device {TYPE_1__* ctx; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int unmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vfio_pci_device*) ;
 int FUNC_1 (struct vfio_pci_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int ,int ,int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct vfio_pci_device *VAR_6,
        unsigned VAR_7, unsigned VAR_8,
        unsigned VAR_9, uint32_t VAR_10, void *VAR_11)
{
 if (!FUNC_0(VAR_6) || VAR_8 != 0 || VAR_9 != 1)
  return -VAR_0;

 if (VAR_10 & VAR_3) {
  FUNC_1(VAR_6);
 } else if (VAR_10 & VAR_1) {
  uint8_t VAR_12 = *(uint8_t *)VAR_11;
  if (VAR_12)
   FUNC_1(VAR_6);
 } else if (VAR_10 & VAR_2) {
  int32_t VAR_13 = *(int32_t *)VAR_11;
  if (VAR_13 >= 0)
   return FUNC_3((void *) VAR_6,
        VAR_4,
        VAR_5, ((void*)0),
        &VAR_6->ctx[0].unmask, VAR_13);

  FUNC_2(&VAR_6->ctx[0].unmask);
 }

 return 0;
}
