
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vme_bridge {struct ca91cx42_driver* driver_priv; } ;
struct pci_dev {int dev; } ;
struct ca91cx42_driver {unsigned int crcsr_bus; scalar_t__ base; int crcsr_kernel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct vme_bridge*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int) ;
 int VAR_7 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct pci_dev*,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct vme_bridge *VAR_8,
 struct pci_dev *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11, VAR_12;
 struct ca91cx42_driver *VAR_13;

 VAR_13 = VAR_8->driver_priv;

 VAR_12 = FUNC_0(VAR_8);


 if (VAR_7)
  FUNC_4(VAR_7 << 27, VAR_13->base + VAR_3);

 FUNC_2(&VAR_9->dev, "CR/CSR Offset: %d\n", VAR_12);
 if (VAR_12 == 0) {
  FUNC_1(&VAR_9->dev, "Slot number is unset, not configuring "
   "CR/CSR space\n");
  return -VAR_1;
 }


 VAR_13->crcsr_kernel = FUNC_5(VAR_9, VAR_6,
           &VAR_13->crcsr_bus);
 if (!VAR_13->crcsr_kernel) {
  FUNC_1(&VAR_9->dev, "Failed to allocate memory for CR/CSR "
   "image\n");
  return -VAR_2;
 }

 VAR_10 = VAR_12 * (512 * 1024);
 FUNC_4(VAR_13->crcsr_bus - VAR_10, VAR_13->base + VAR_5);

 VAR_11 = FUNC_3(VAR_13->base + VAR_4);
 VAR_11 |= VAR_0;
 FUNC_4(VAR_11, VAR_13->base + VAR_4);

 return 0;
}
