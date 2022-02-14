
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct pci_dev*,int*) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 int * VAR_6 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*,char*) ;
 int FUNC_9 (struct pci_dev*,int ) ;

__attribute__((used)) static int
FUNC_10(struct pci_dev *VAR_7, const struct pci_device_id *VAR_8)
{
 int VAR_9 = -1;
 int VAR_10;

 FUNC_0("ips_insert_device", 1);
 VAR_10 = FUNC_6(VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_10 = FUNC_8(VAR_7, "ips");
 if (VAR_10)
  goto err_out;

 VAR_10 = FUNC_2(VAR_7, &VAR_9);
 if (VAR_10 == VAR_1)
  VAR_10 = FUNC_3(VAR_9);

 if (VAR_3)
  if (FUNC_4(VAR_9)) {
   FUNC_1(VAR_2[VAR_9]);
   VAR_10 = -1;
  }

 if (VAR_10 == VAR_1)
  VAR_5++;

 VAR_4 = VAR_5;

 if (VAR_10 < 0) {
  VAR_10 = -VAR_0;
  goto err_out_regions;
 }

 FUNC_9(VAR_7, VAR_6[VAR_9]);
 return 0;

err_out_regions:
 FUNC_7(VAR_7);
err_out:
 FUNC_5(VAR_7);
 return VAR_10;
}
