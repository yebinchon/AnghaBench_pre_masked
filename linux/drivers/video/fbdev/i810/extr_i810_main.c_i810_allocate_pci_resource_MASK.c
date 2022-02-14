
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {size_t driver_data; } ;
struct TYPE_2__ {int size; int virtual; void* physical; } ;
struct i810fb_par {int mmio_start_virtual; void* mmio_start_phys; int res_flags; TYPE_1__ aperture; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 void* FUNC_4 (int ,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (void*,int,int ) ;

__attribute__((used)) static int FUNC_7(struct i810fb_par *VAR_7,
          const struct pci_device_id *VAR_8)
{
 int VAR_9;

 if ((VAR_9 = FUNC_2(VAR_7->dev))) {
  FUNC_5("i810fb_init: cannot enable device\n");
  return VAR_9;
 }
 VAR_7->res_flags |= VAR_5;

 if (FUNC_3(VAR_7->dev, 0) > 512 * 1024) {
  VAR_7->aperture.physical = FUNC_4(VAR_7->dev, 0);
  VAR_7->aperture.size = FUNC_3(VAR_7->dev, 0);
  VAR_7->mmio_start_phys = FUNC_4(VAR_7->dev, 1);
 } else {
  VAR_7->aperture.physical = FUNC_4(VAR_7->dev, 1);
  VAR_7->aperture.size = FUNC_3(VAR_7->dev, 1);
  VAR_7->mmio_start_phys = FUNC_4(VAR_7->dev, 0);
 }
 if (!VAR_7->aperture.size) {
  FUNC_5("i810fb_init: device is disabled\n");
  return -VAR_1;
 }

 if (!FUNC_6(VAR_7->aperture.physical,
    VAR_7->aperture.size,
    VAR_6[VAR_8->driver_data])) {
  FUNC_5("i810fb_init: cannot request framebuffer region\n");
  return -VAR_0;
 }
 VAR_7->res_flags |= VAR_2;

 VAR_7->aperture.virtual = FUNC_1(VAR_7->aperture.physical,
        VAR_7->aperture.size);
 if (!VAR_7->aperture.virtual) {
  FUNC_5("i810fb_init: cannot remap framebuffer region\n");
  return -VAR_0;
 }

 if (!FUNC_6(VAR_7->mmio_start_phys,
    VAR_4,
    VAR_6[VAR_8->driver_data])) {
  FUNC_5("i810fb_init: cannot request mmio region\n");
  return -VAR_0;
 }
 VAR_7->res_flags |= VAR_3;

 VAR_7->mmio_start_virtual = FUNC_0(VAR_7->mmio_start_phys,
        VAR_4);
 if (!VAR_7->mmio_start_virtual) {
  FUNC_5("i810fb_init: cannot remap mmio region\n");
  return -VAR_0;
 }

 return 0;
}
