
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct vfio_pci_device {unsigned int irq_type; unsigned int num_ctx; TYPE_1__* ctx; } ;
typedef int int32_t ;
struct TYPE_2__ {int trigger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (struct vfio_pci_device*,unsigned int) ;
 scalar_t__ FUNC_2 (struct vfio_pci_device*) ;
 int FUNC_3 (struct vfio_pci_device*,int) ;
 int FUNC_4 (struct vfio_pci_device*,unsigned int,int) ;
 int FUNC_5 (struct vfio_pci_device*,unsigned int,unsigned int,int *,int) ;

__attribute__((used)) static int FUNC_6(struct vfio_pci_device *VAR_5,
        unsigned VAR_6, unsigned VAR_7,
        unsigned VAR_8, uint32_t VAR_9, void *VAR_10)
{
 int VAR_11;
 bool VAR_12 = (VAR_6 == VAR_4) ? 1 : 0;

 if (FUNC_1(VAR_5, VAR_6) && !VAR_8 && (VAR_9 & VAR_3)) {
  FUNC_3(VAR_5, VAR_12);
  return 0;
 }

 if (!(FUNC_1(VAR_5, VAR_6) || FUNC_2(VAR_5)))
  return -VAR_0;

 if (VAR_9 & VAR_2) {
  int32_t *VAR_13 = VAR_10;
  int VAR_14;

  if (VAR_5->irq_type == VAR_6)
   return FUNC_5(VAR_5, VAR_7, VAR_8,
        VAR_13, VAR_12);

  VAR_14 = FUNC_4(VAR_5, VAR_7 + VAR_8, VAR_12);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_5(VAR_5, VAR_7, VAR_8, VAR_13, VAR_12);
  if (VAR_14)
   FUNC_3(VAR_5, VAR_12);

  return VAR_14;
 }

 if (!FUNC_1(VAR_5, VAR_6) || VAR_7 + VAR_8 > VAR_5->num_ctx)
  return -VAR_0;

 for (VAR_11 = VAR_7; VAR_11 < VAR_7 + VAR_8; VAR_11++) {
  if (!VAR_5->ctx[VAR_11].trigger)
   continue;
  if (VAR_9 & VAR_3) {
   FUNC_0(VAR_5->ctx[VAR_11].trigger, 1);
  } else if (VAR_9 & VAR_1) {
   uint8_t *VAR_15 = VAR_10;
   if (VAR_15[VAR_11 - VAR_7])
    FUNC_0(VAR_5->ctx[VAR_11].trigger, 1);
  }
 }
 return 0;
}
