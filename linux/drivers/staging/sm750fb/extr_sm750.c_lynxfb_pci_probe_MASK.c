
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vram; } ;
struct TYPE_3__ {int de_imageblit; int de_copyarea; int de_fillrect; int de_init; } ;
struct sm750_dev {int vidmem_size; int pvMem; int vidmem_start; TYPE_2__ mtrr; int mtrr_off; TYPE_1__ accel; int accel_off; int slock; struct pci_dev* pdev; int revid; int devid; int ** fbinfo; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int revision; int device; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct sm750_dev* FUNC_1 (int *,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sm750_dev*,struct pci_dev*) ;
 int FUNC_3 (struct sm750_dev*,struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct pci_dev*,struct sm750_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct sm750_dev*,int) ;
 int FUNC_9 (struct sm750_dev*) ;
 int FUNC_10 (struct sm750_dev*,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_10,
       const struct pci_device_id *VAR_11)
{
 struct sm750_dev *VAR_12 = ((void*)0);
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_4(VAR_10);
 if (VAR_15)
  return VAR_15;


 VAR_15 = FUNC_7(VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_15 = -VAR_0;
 VAR_12 = FUNC_1(&VAR_10->dev, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return VAR_15;

 VAR_12->fbinfo[0] = VAR_12->fbinfo[1] = ((void*)0);
 VAR_12->devid = VAR_10->device;
 VAR_12->revid = VAR_10->revision;
 VAR_12->pdev = VAR_10;
 VAR_12->mtrr_off = VAR_4;
 VAR_12->mtrr.vram = 0;
 VAR_12->accel_off = VAR_3;
 FUNC_11(&VAR_12->slock);

 if (!VAR_12->accel_off) {






  VAR_12->accel.de_init = VAR_7;
  VAR_12->accel.de_fillrect = VAR_8;
  VAR_12->accel.de_copyarea = VAR_6;
  VAR_12->accel.de_imageblit = VAR_9;
 }


 FUNC_10(VAR_12, VAR_5);


 VAR_15 = FUNC_3(VAR_12, VAR_10);
 if (VAR_15)
  return VAR_15;

 if (!VAR_12->mtrr_off)
  VAR_12->mtrr.vram = FUNC_0(VAR_12->vidmem_start,
       VAR_12->vidmem_size);

 FUNC_5(VAR_12->pvMem, 0, VAR_12->vidmem_size);

 FUNC_6(VAR_10, VAR_12);


 FUNC_2(VAR_12, VAR_10);


 VAR_13 = VAR_2 ? 2 : 1;
 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  VAR_15 = FUNC_8(VAR_12, VAR_14);
  if (VAR_15)
   goto release_fb;
 }

 return 0;

release_fb:
 FUNC_9(VAR_12);
 return VAR_15;
}
