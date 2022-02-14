
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,char*) ;
 int VAR_9 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_9(struct pci_dev *VAR_11, const struct pci_device_id *VAR_12)
{
 int VAR_13;
 u32 VAR_14;


 VAR_13 = FUNC_5(VAR_11);
 if (VAR_13) {
  FUNC_0(&VAR_11->dev, "Unable to enable device\n");
  goto err;
 }


 VAR_13 = FUNC_7(VAR_11, VAR_9);
 if (VAR_13) {
  FUNC_0(&VAR_11->dev, "Unable to reserve resources\n");
  goto err_resource;
 }


 VAR_10 = FUNC_2(FUNC_8(VAR_11, 0), 16);
 if (!VAR_10) {
  FUNC_0(&VAR_11->dev, "Unable to remap CRG region\n");
  VAR_13 = -VAR_7;
  goto err_remap;
 }


 FUNC_3(0, VAR_10 + VAR_8);


 VAR_14 = FUNC_1(VAR_10 + VAR_8) & 0x00000FFF;
 VAR_14 |= VAR_2;
 FUNC_3(VAR_14, VAR_10 + VAR_8);


 VAR_14 = FUNC_1(VAR_10 + VAR_8) & 0x00000FFF;
 VAR_14 = VAR_14 | VAR_4 |
   VAR_5 |
   VAR_0 |
   VAR_1 |
   VAR_3 |
   VAR_6;
 FUNC_3(VAR_14, VAR_10 + VAR_8);

 return 0;

err_remap:
 FUNC_6(VAR_11);
err_resource:
 FUNC_4(VAR_11);
err:
 return VAR_13;
}
