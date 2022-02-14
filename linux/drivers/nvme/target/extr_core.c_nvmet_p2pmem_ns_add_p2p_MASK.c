
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct nvmet_ns {int nsid; int device_path; scalar_t__ p2p_dev; int use_p2pmem; } ;
struct nvmet_ctrl {int p2p_ns_map; struct device* p2p_client; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device**) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct nvmet_ns*) ;
 struct pci_dev* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (scalar_t__,struct device*,int) ;
 struct pci_dev* FUNC_7 (struct device**,int ) ;
 int FUNC_8 (char*,int ,int ) ;
 int FUNC_9 (char*,int ,int ) ;
 int FUNC_10 (int *,int ,struct pci_dev*) ;

__attribute__((used)) static void FUNC_11(struct nvmet_ctrl *VAR_0,
        struct nvmet_ns *VAR_1)
{
 struct device *VAR_2[2];
 struct pci_dev *VAR_3;
 int VAR_4;

 if (!VAR_0->p2p_client || !VAR_1->use_p2pmem)
  return;

 if (VAR_1->p2p_dev) {
  VAR_4 = FUNC_6(VAR_1->p2p_dev, VAR_0->p2p_client, 1);
  if (VAR_4 < 0)
   return;

  VAR_3 = FUNC_3(VAR_1->p2p_dev);
 } else {
  VAR_2[0] = VAR_0->p2p_client;
  VAR_2[1] = FUNC_2(VAR_1);

  VAR_3 = FUNC_7(VAR_2, FUNC_0(VAR_2));
  if (!VAR_3) {
   FUNC_8("no peer-to-peer memory is available that's supported by %s and %s\n",
          FUNC_1(VAR_0->p2p_client), VAR_1->device_path);
   return;
  }
 }

 VAR_4 = FUNC_10(&VAR_0->p2p_ns_map, VAR_1->nsid, VAR_3);
 if (VAR_4 < 0)
  FUNC_4(VAR_3);

 FUNC_9("using p2pmem on %s for nsid %d\n", FUNC_5(VAR_3),
  VAR_1->nsid);
}
