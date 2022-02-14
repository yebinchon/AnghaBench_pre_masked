
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int devt; int release; int groups; int * parent; int class; } ;
struct cdev {int owner; } ;
struct switchtec_dev {int alive; struct device dev; struct cdev cdev; int event_cnt; int event_wq; int link_event_work; int mrpc_timeout; int mrpc_work; scalar_t__ mrpc_busy; int mrpc_mutex; int mrpc_queue; struct pci_dev* pdev; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 struct switchtec_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_2 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct cdev*,int *) ;
 int FUNC_8 (struct device*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (int *,int ,int ,int ) ;
 int FUNC_12 (int *) ;
 struct switchtec_dev* FUNC_13 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static struct switchtec_dev *FUNC_16(struct pci_dev *VAR_12)
{
 struct switchtec_dev *VAR_13;
 int VAR_14;
 struct device *VAR_15;
 struct cdev *VAR_16;
 int VAR_17;

 VAR_13 = FUNC_13(sizeof(*VAR_13), VAR_1,
        FUNC_9(&VAR_12->dev));
 if (!VAR_13)
  return FUNC_0(-VAR_0);

 VAR_13->alive = 1;
 VAR_13->pdev = VAR_12;
 FUNC_2(&VAR_13->mrpc_queue);
 FUNC_14(&VAR_13->mrpc_mutex);
 VAR_13->mrpc_busy = 0;
 FUNC_3(&VAR_13->mrpc_work, VAR_4);
 FUNC_1(&VAR_13->mrpc_timeout, VAR_5);
 FUNC_3(&VAR_13->link_event_work, VAR_3);
 FUNC_12(&VAR_13->event_wq);
 FUNC_6(&VAR_13->event_cnt, 0);

 VAR_15 = &VAR_13->dev;
 FUNC_10(VAR_15);
 VAR_15->class = VAR_7;
 VAR_15->parent = &VAR_12->dev;
 VAR_15->groups = VAR_8;
 VAR_15->release = VAR_6;

 VAR_14 = FUNC_11(&VAR_11, 0, 0,
          VAR_1);
 if (VAR_14 < 0) {
  VAR_17 = VAR_14;
  goto err_put;
 }

 VAR_15->devt = FUNC_5(FUNC_4(VAR_9), VAR_14);
 FUNC_8(VAR_15, "switchtec%d", VAR_14);

 VAR_16 = &VAR_13->cdev;
 FUNC_7(VAR_16, &VAR_10);
 VAR_16->owner = VAR_2;

 return VAR_13;

err_put:
 FUNC_15(&VAR_13->dev);
 return FUNC_0(VAR_17);
}
