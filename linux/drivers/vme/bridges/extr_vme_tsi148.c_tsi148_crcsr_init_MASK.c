
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vme_bridge {int parent; struct tsi148_driver* driver_priv; } ;
struct tsi148_driver {int flush_image; scalar_t__ base; int crcsr_bus; int crcsr_kernel; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*,int ,int *) ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int ,int,int,int,int ,int ,int ) ;
 int FUNC_7 (struct vme_bridge*) ;

__attribute__((used)) static int FUNC_8(struct vme_bridge *VAR_12,
 struct pci_dev *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;
 u32 VAR_17, VAR_18;
 int VAR_19;
 struct tsi148_driver *VAR_20;

 VAR_20 = VAR_12->driver_priv;


 VAR_20->crcsr_kernel = FUNC_4(VAR_13, VAR_8,
           &VAR_20->crcsr_bus);
 if (!VAR_20->crcsr_kernel) {
  FUNC_0(VAR_12->parent, "Failed to allocate memory for "
   "CR/CSR image\n");
  return -VAR_0;
 }

 FUNC_5(VAR_20->crcsr_bus, &VAR_17, &VAR_18);

 FUNC_3(VAR_17, VAR_20->base + VAR_6);
 FUNC_3(VAR_18, VAR_20->base + VAR_5);


 VAR_14 = FUNC_2(VAR_20->base + VAR_1);
 VAR_14 = (VAR_14 & VAR_2)>>3;

 VAR_16 = FUNC_7(VAR_12);

 if (VAR_14 != VAR_16) {
  VAR_14 = VAR_16;
  FUNC_1(VAR_12->parent, "Setting CR/CSR offset\n");
  FUNC_3(VAR_14<<3, VAR_20->base + VAR_1);
 }
 FUNC_1(VAR_12->parent, "CR/CSR Offset: %d\n", VAR_14);

 VAR_15 = FUNC_2(VAR_20->base + VAR_3);
 if (VAR_15 & VAR_4)
  FUNC_1(VAR_12->parent, "CR/CSR already enabled\n");
 else {
  FUNC_1(VAR_12->parent, "Enabling CR/CSR space\n");
  FUNC_3(VAR_15 | VAR_4,
   VAR_20->base + VAR_3);
 }





 if (VAR_11) {
  VAR_19 = FUNC_6(VAR_20->flush_image, 1,
   (VAR_16 * 0x80000), 0x80000, VAR_7, VAR_10,
   VAR_9);
  if (VAR_19)
   FUNC_0(VAR_12->parent, "Configuring flush image"
    " failed\n");
 }

 return 0;

}
