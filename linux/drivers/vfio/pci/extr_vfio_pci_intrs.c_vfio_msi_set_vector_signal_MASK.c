
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vfio_pci_device {int num_ctx; TYPE_1__* ctx; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;
struct msi_msg {int dummy; } ;
struct eventfd_ctx {int dummy; } ;
struct TYPE_5__ {int irq; struct eventfd_ctx* token; } ;
struct TYPE_4__ {struct eventfd_ctx* trigger; TYPE_2__ producer; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (struct eventfd_ctx*) ;
 int FUNC_2 (int *,char*,struct eventfd_ctx*,int) ;
 struct eventfd_ctx* FUNC_3 (int) ;
 int FUNC_4 (struct eventfd_ctx*) ;
 int FUNC_5 (int,struct eventfd_ctx*) ;
 int FUNC_6 (int,struct msi_msg*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,char*,char*,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct pci_dev*,int) ;
 int FUNC_12 (struct pci_dev*) ;
 int FUNC_13 (int,struct msi_msg*) ;
 int FUNC_14 (int,int ,int ,int ,struct eventfd_ctx*) ;
 scalar_t__ FUNC_15 (int) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_16(struct vfio_pci_device *VAR_4,
          int VAR_5, int VAR_6, bool VAR_7)
{
 struct pci_dev *VAR_8 = VAR_4->pdev;
 struct eventfd_ctx *VAR_9;
 int VAR_10, VAR_11;

 if (VAR_5 < 0 || VAR_5 >= VAR_4->num_ctx)
  return -VAR_0;

 VAR_10 = FUNC_11(VAR_8, VAR_5);

 if (VAR_4->ctx[VAR_5].trigger) {
  FUNC_5(VAR_10, VAR_4->ctx[VAR_5].trigger);
  FUNC_8(&VAR_4->ctx[VAR_5].producer);
  FUNC_10(VAR_4->ctx[VAR_5].name);
  FUNC_4(VAR_4->ctx[VAR_5].trigger);
  VAR_4->ctx[VAR_5].trigger = ((void*)0);
 }

 if (VAR_6 < 0)
  return 0;

 VAR_4->ctx[VAR_5].name = FUNC_9(VAR_2, "vfio-msi%s[%d](%s)",
        VAR_7 ? "x" : "", VAR_5,
        FUNC_12(VAR_8));
 if (!VAR_4->ctx[VAR_5].name)
  return -VAR_1;

 VAR_9 = FUNC_3(VAR_6);
 if (FUNC_0(VAR_9)) {
  FUNC_10(VAR_4->ctx[VAR_5].name);
  return FUNC_1(VAR_9);
 }
 if (VAR_7) {
  struct msi_msg VAR_12;

  FUNC_6(VAR_10, &VAR_12);
  FUNC_13(VAR_10, &VAR_12);
 }

 VAR_11 = FUNC_14(VAR_10, VAR_3, 0,
     VAR_4->ctx[VAR_5].name, VAR_9);
 if (VAR_11) {
  FUNC_10(VAR_4->ctx[VAR_5].name);
  FUNC_4(VAR_9);
  return VAR_11;
 }

 VAR_4->ctx[VAR_5].producer.token = VAR_9;
 VAR_4->ctx[VAR_5].producer.irq = VAR_10;
 VAR_11 = FUNC_7(&VAR_4->ctx[VAR_5].producer);
 if (FUNC_15(VAR_11))
  FUNC_2(&VAR_8->dev,
  "irq bypass producer (token %p) registration fails: %d\n",
  VAR_4->ctx[VAR_5].producer.token, VAR_11);

 VAR_4->ctx[VAR_5].trigger = VAR_9;

 return 0;
}
