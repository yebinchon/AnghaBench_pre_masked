
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct be_resources {int member_0; } ;
struct be_adapter {int num_vfs; int pool_res; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int,struct be_resources*) ;
 int FUNC_1 (struct be_adapter*,int ,int,struct be_resources*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct be_adapter*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,char*) ;
 struct be_adapter* FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*) ;
 scalar_t__ FUNC_11 (struct pci_dev*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_15(struct pci_dev *VAR_1, int VAR_2)
{
 struct be_adapter *VAR_3 = FUNC_9(VAR_1);
 struct be_resources VAR_4 = {0};
 int VAR_5;

 if (!VAR_2)
  FUNC_5(VAR_3);

 VAR_3->num_vfs = VAR_2;

 if (VAR_3->num_vfs == 0 && FUNC_11(VAR_1)) {
  FUNC_8(&VAR_1->dev,
    "Cannot disable VFs while they are assigned\n");
  return -VAR_0;
 }
 if (FUNC_14(VAR_3) && !FUNC_10(VAR_1)) {
  FUNC_0(VAR_3, VAR_3->num_vfs,
        &VAR_4);
  VAR_5 = FUNC_1(VAR_3, VAR_3->pool_res,
       VAR_3->num_vfs, &VAR_4);
  if (VAR_5)
   FUNC_7(&VAR_1->dev,
    "Failed to optimize SR-IOV resources\n");
 }

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5)
  return FUNC_2(VAR_5);


 FUNC_12();
 VAR_5 = FUNC_4(VAR_3);
 FUNC_13();
 if (VAR_5)
  return FUNC_2(VAR_5);

 if (VAR_3->num_vfs)
  VAR_5 = FUNC_6(VAR_3);

 if (!VAR_5)
  return VAR_3->num_vfs;

 return 0;
}
