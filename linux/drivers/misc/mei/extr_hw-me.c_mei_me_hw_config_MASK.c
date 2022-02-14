
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct mei_me_hw {int hbuf_depth; int d0i3_supported; int pg_state; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mei_device*) ;
 int FUNC_1 (struct mei_device*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 struct mei_me_hw* FUNC_3 (struct mei_device*) ;
 struct pci_dev* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct mei_device *VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_4(VAR_6->dev);
 struct mei_me_hw *VAR_8 = FUNC_3(VAR_6);
 u32 VAR_9, VAR_10;


 VAR_9 = FUNC_0(VAR_6);
 VAR_8->hbuf_depth = (VAR_9 & VAR_0) >> 24;

 VAR_10 = 0;
 FUNC_2(VAR_7, VAR_4, &VAR_10);
 FUNC_5(VAR_6->dev, "PCI_CFG_HFS_1", VAR_4, VAR_10);
 VAR_8->d0i3_supported =
  ((VAR_10 & VAR_5) == VAR_5);

 VAR_8->pg_state = VAR_2;
 if (VAR_8->d0i3_supported) {
  VAR_10 = FUNC_1(VAR_6);
  if (VAR_10 & VAR_1)
   VAR_8->pg_state = VAR_3;
 }
}
