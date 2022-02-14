
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {struct pci_dev* pci_dev; } ;
struct pci_device_id {scalar_t__ subvendor; scalar_t__ subdevice; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*) ;
 struct pqi_ctrl_info* FUNC_4 (int) ;
 int FUNC_5 (struct pqi_ctrl_info*) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (struct pqi_ctrl_info*) ;
 int FUNC_7 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_8 (struct pqi_ctrl_info*) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_5,
 const struct pci_device_id *VAR_6)
{
 int VAR_7;
 int VAR_8, VAR_9;
 struct pqi_ctrl_info *VAR_10;

 FUNC_7(VAR_5, VAR_6);

 if (VAR_4 &&
  VAR_6->subvendor == VAR_3 &&
  VAR_6->subdevice == VAR_3) {
  FUNC_3(&VAR_5->dev,
   "controller not probed because device ID wildcards are disabled\n");
  return -VAR_0;
 }

 if (VAR_6->subvendor == VAR_3 || VAR_6->subdevice == VAR_3)
  FUNC_3(&VAR_5->dev,
   "controller device ID matched using wildcards\n");

 VAR_8 = FUNC_2(&VAR_5->dev);
 if (VAR_8 == VAR_2) {
  VAR_9 = FUNC_0(0);
  if (VAR_9 == VAR_2)
   VAR_9 = 0;
  FUNC_9(&VAR_5->dev, VAR_9);
 }

 VAR_10 = FUNC_4(VAR_8);
 if (!VAR_10) {
  FUNC_1(&VAR_5->dev,
   "failed to allocate controller info block\n");
  return -VAR_1;
 }

 VAR_10->pci_dev = VAR_5;

 VAR_7 = FUNC_6(VAR_10);
 if (VAR_7)
  goto error;

 VAR_7 = FUNC_5(VAR_10);
 if (VAR_7)
  goto error;

 return 0;

error:
 FUNC_8(VAR_10);

 return VAR_7;
}
