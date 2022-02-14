
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_6__ {int reset_work; } ;
struct nvme_dev {TYPE_1__ ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (struct nvme_dev*,int) ;
 int FUNC_3 (struct nvme_dev*) ;
 int FUNC_4 (struct nvme_dev*) ;
 int FUNC_5 (struct nvme_dev*) ;
 int FUNC_6 (struct nvme_dev*,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct nvme_dev*) ;
 int FUNC_9 (struct nvme_dev*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct pci_dev*) ;
 struct nvme_dev* FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*,int *) ;

__attribute__((used)) static void FUNC_16(struct pci_dev *VAR_2)
{
 struct nvme_dev *VAR_3 = FUNC_14(VAR_2);

 FUNC_1(&VAR_3->ctrl, VAR_1);
 FUNC_15(VAR_2, ((void*)0));

 if (!FUNC_13(VAR_2)) {
  FUNC_1(&VAR_3->ctrl, VAR_0);
  FUNC_2(VAR_3, 1);
  FUNC_3(VAR_3);
 }

 FUNC_0(&VAR_3->ctrl.reset_work);
 FUNC_11(&VAR_3->ctrl);
 FUNC_10(&VAR_3->ctrl);
 FUNC_2(VAR_3, 1);
 FUNC_8(VAR_3);
 FUNC_5(VAR_3);
 FUNC_3(VAR_3);
 FUNC_6(VAR_3, 0);
 FUNC_12(&VAR_3->ctrl);
 FUNC_9(VAR_3);
 FUNC_4(VAR_3);
 FUNC_7(&VAR_3->ctrl);
}
