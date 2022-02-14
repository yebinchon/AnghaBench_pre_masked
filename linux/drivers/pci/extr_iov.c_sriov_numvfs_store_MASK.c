
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dev; TYPE_2__* driver; TYPE_1__* sriov; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* sriov_configure ) (struct pci_dev*,int) ;} ;
struct TYPE_3__ {int num_VFs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char const*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,char*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,char*,int,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
      struct device_attribute *VAR_4,
      const char *VAR_5, size_t VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_8(VAR_3);
 int VAR_8;
 u16 VAR_9;

 VAR_8 = FUNC_2(VAR_5, 0, &VAR_9);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_9 > FUNC_4(VAR_7))
  return -VAR_2;

 FUNC_0(&VAR_7->dev);

 if (VAR_9 == VAR_7->sriov->num_VFs)
  goto exit;


 if (!VAR_7->driver || !VAR_7->driver->sriov_configure) {
  FUNC_3(VAR_7, "Driver does not support SRIOV configuration via sysfs\n");
  VAR_8 = -VAR_1;
  goto exit;
 }

 if (VAR_9 == 0) {

  VAR_8 = VAR_7->driver->sriov_configure(VAR_7, 0);
  goto exit;
 }


 if (VAR_7->sriov->num_VFs) {
  FUNC_5(VAR_7, "%d VFs already enabled. Disable before enabling %d VFs\n",
    VAR_7->sriov->num_VFs, VAR_9);
  VAR_8 = -VAR_0;
  goto exit;
 }

 VAR_8 = VAR_7->driver->sriov_configure(VAR_7, VAR_9);
 if (VAR_8 < 0)
  goto exit;

 if (VAR_8 != VAR_9)
  FUNC_5(VAR_7, "%d VFs requested; only %d enabled\n",
    VAR_9, VAR_8);

exit:
 FUNC_1(&VAR_7->dev);

 if (VAR_8 < 0)
  return VAR_8;

 return VAR_6;
}
