
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vf_data_storage {int flags; int trusted; } ;
struct pci_dev {int dev; } ;
struct igb_adapter {struct vf_data_storage* vf_data; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct igb_adapter*,int,unsigned char*) ;
 int FUNC_2 (struct igb_adapter*,int,int,unsigned char*) ;
 int FUNC_3 (unsigned char*) ;

__attribute__((used)) static int FUNC_4(struct igb_adapter *VAR_3, u32 *VAR_4, int VAR_5)
{
 struct pci_dev *VAR_6 = VAR_3->pdev;
 struct vf_data_storage *VAR_7 = &VAR_3->vf_data[VAR_5];
 u32 VAR_8 = VAR_4[0] & VAR_0;




 unsigned char *VAR_9 = (unsigned char *)&VAR_4[1];
 int VAR_10 = 0;

 if (!VAR_8) {
  if ((VAR_7->flags & VAR_2) &&
      !VAR_7->trusted) {
   FUNC_0(&VAR_6->dev,
     "VF %d attempted to override administratively set MAC address\nReload the VF driver to resume operations\n",
     VAR_5);
   return -VAR_1;
  }

  if (!FUNC_3(VAR_9)) {
   FUNC_0(&VAR_6->dev,
     "VF %d attempted to set invalid MAC\n",
     VAR_5);
   return -VAR_1;
  }

  VAR_10 = FUNC_1(VAR_3, VAR_5, VAR_9);
 } else {
  VAR_10 = FUNC_2(VAR_3, VAR_5, VAR_8, VAR_9);
 }

 return VAR_10;
}
