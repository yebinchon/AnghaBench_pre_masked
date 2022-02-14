
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int dev; int unit_address; int irq; } ;
struct ibmvnic_crq_queue {int active; int * msgs; int msg_token; } ;
struct ibmvnic_adapter {int tasklet; int netdev; struct vio_dev* vdev; struct ibmvnic_crq_queue crq; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (long) ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,struct ibmvnic_adapter*) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ,char*) ;
 long FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ibmvnic_adapter *VAR_4)
{
 struct ibmvnic_crq_queue *VAR_5 = &VAR_4->crq;
 struct vio_dev *VAR_6 = VAR_4->vdev;
 long VAR_7;

 if (!VAR_5->msgs)
  return;

 FUNC_4(VAR_4->netdev, "Releasing CRQ\n");
 FUNC_2(VAR_6->irq, VAR_4);
 FUNC_6(&VAR_4->tasklet);
 do {
  VAR_7 = FUNC_5(VAR_2, VAR_6->unit_address);
 } while (VAR_7 == VAR_1 || FUNC_0(VAR_7));

 FUNC_1(&VAR_6->dev, VAR_5->msg_token, VAR_3,
    VAR_0);
 FUNC_3((unsigned long)VAR_5->msgs);
 VAR_5->msgs = ((void*)0);
 VAR_5->active = 0;
}
