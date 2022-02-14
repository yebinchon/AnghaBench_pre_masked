
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct eg20t_port {int dummy; } ;


 int VAR_0 ;
 struct eg20t_port* FUNC_0 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,struct eg20t_port*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_1,
     const struct pci_device_id *VAR_2)
{
 int VAR_3;
 struct eg20t_port *VAR_4;

 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 < 0)
  goto probe_error;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_4) {
  VAR_3 = -VAR_0;
  goto probe_disable_device;
 }
 FUNC_4(VAR_1, VAR_4);

 return VAR_3;

probe_disable_device:
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
probe_error:
 return VAR_3;
}
