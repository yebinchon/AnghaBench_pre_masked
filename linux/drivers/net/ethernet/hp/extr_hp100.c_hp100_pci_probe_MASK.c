
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct net_device {int name; } ;
struct hp100_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int *) ;
 struct net_device* FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int,int ,struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int*) ;
 int FUNC_7 (struct pci_dev*,int ) ;
 int FUNC_8 (struct pci_dev*,struct net_device*) ;
 int FUNC_9 (struct pci_dev*,int ,int) ;
 int FUNC_10 (char*,int ,...) ;

__attribute__((used)) static int FUNC_11(struct pci_dev *VAR_6,
      const struct pci_device_id *VAR_7)
{
 struct net_device *VAR_8;
 int VAR_9;
 u_short VAR_10;
 int VAR_11;

 if (FUNC_5(VAR_6))
  return -VAR_0;

 VAR_8 = FUNC_1(sizeof(struct hp100_private));
 if (!VAR_8) {
  VAR_11 = -VAR_1;
  goto out0;
 }

 FUNC_0(VAR_8, &VAR_6->dev);

 FUNC_6(VAR_6, VAR_3, &VAR_10);
 if (!(VAR_10 & VAR_4)) {



  VAR_10 |= VAR_4;
  FUNC_9(VAR_6, VAR_3, VAR_10);
 }

 if (!(VAR_10 & VAR_5)) {



  VAR_10 |= VAR_5;
  FUNC_9(VAR_6, VAR_3, VAR_10);
 }

 VAR_9 = FUNC_7(VAR_6, 0);
 VAR_11 = FUNC_3(VAR_8, VAR_9, VAR_2, VAR_6);
 if (VAR_11)
  goto out1;




 FUNC_8(VAR_6, VAR_8);
 return 0;
 out1:
 FUNC_2(VAR_8);
 out0:
 FUNC_4(VAR_6);
 return VAR_11;
}
