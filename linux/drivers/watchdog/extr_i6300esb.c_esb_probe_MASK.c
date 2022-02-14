
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct TYPE_6__ {int timeout; int max_timeout; int min_timeout; int * ops; int * info; } ;
struct esb_dev {struct pci_dev* pdev; int base; TYPE_1__ wdd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,int ) ;
 struct esb_dev* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct esb_dev*) ;
 int VAR_6 ;
 int FUNC_3 (struct esb_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ) ;
 int VAR_9 ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_12(struct pci_dev *VAR_10,
  const struct pci_device_id *VAR_11)
{
 struct esb_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_1(&VAR_10->dev, sizeof(*VAR_12), VAR_5);
 if (!VAR_12)
  return -VAR_1;


 VAR_12->pdev = VAR_10;
 if (!FUNC_2(VAR_12))
  return -VAR_0;


 VAR_12->wdd.info = &VAR_6;
 VAR_12->wdd.ops = &VAR_7;
 VAR_12->wdd.min_timeout = VAR_4;
 VAR_12->wdd.max_timeout = VAR_3;
 VAR_12->wdd.timeout = VAR_2;
 FUNC_7(&VAR_12->wdd, VAR_8, ((void*)0));
 FUNC_9(&VAR_12->wdd, VAR_9);
 FUNC_10(&VAR_12->wdd);
 FUNC_11(&VAR_12->wdd);
 FUNC_3(VAR_12);


 VAR_13 = FUNC_8(&VAR_12->wdd);
 if (VAR_13 != 0)
  goto err_unmap;
 FUNC_0(&VAR_10->dev,
  "initialized. heartbeat=%d sec (nowayout=%d)\n",
  VAR_12->wdd.timeout, VAR_9);
 return 0;

err_unmap:
 FUNC_4(VAR_12->base);
 FUNC_6(VAR_12->pdev, 0);
 FUNC_5(VAR_12->pdev);
 return VAR_13;
}
