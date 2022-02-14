
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_device_id {int dummy; } ;
struct vio_dev {int dev; int unit_address; } ;
struct crq_server_adapter {int * reset_task; int * dev; int reset_wait_queue; int riobn; int liobn; } ;
struct TYPE_2__ {void* state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *,struct crq_server_adapter*) ;
 int FUNC_6 (int *,char*) ;
 TYPE_1__ VAR_2 ;
 struct crq_server_adapter VAR_3 ;
 int FUNC_7 (struct crq_server_adapter*) ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (struct crq_server_adapter*,int,int ) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int ,struct crq_server_adapter*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct crq_server_adapter*,int ,int) ;
 int FUNC_13 (struct vio_dev*,struct crq_server_adapter*) ;

__attribute__((used)) static int FUNC_14(struct vio_dev *VAR_7, const struct vio_device_id *VAR_8)
{
 struct crq_server_adapter *VAR_9 = &VAR_3;
 int VAR_10;

 FUNC_5(&VAR_7->dev, ((void*)0));
 FUNC_12(VAR_9, 0, sizeof(*VAR_9));
 VAR_9->dev = &VAR_7->dev;

 FUNC_4(VAR_9->dev, "Probe for UA 0x%x\n", VAR_7->unit_address);

 VAR_10 = FUNC_13(VAR_7, VAR_9);
 if (VAR_10 != 0) {
  VAR_2.state = VAR_6;
  return -1;
 }

 FUNC_2(VAR_9->dev, "Probe: liobn 0x%x, riobn 0x%x\n",
  VAR_9->liobn, VAR_9->riobn);

 FUNC_9(&VAR_9->reset_wait_queue);
 VAR_9->reset_task = FUNC_10(VAR_4, VAR_9, "ibmvmc");
 if (FUNC_0(VAR_9->reset_task)) {
  FUNC_3(VAR_9->dev, "Failed to start reset thread\n");
  VAR_2.state = VAR_6;
  VAR_10 = FUNC_1(VAR_9->reset_task);
  VAR_9->reset_task = ((void*)0);
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_9);
 if (VAR_10 != 0 && VAR_10 != VAR_1) {
  FUNC_3(VAR_9->dev, "Error initializing CRQ.  rc = 0x%x\n",
   VAR_10);
  VAR_2.state = VAR_6;
  goto crq_failed;
 }

 VAR_2.state = VAR_5;





 if (FUNC_8(VAR_9, 0xC001000000000000LL, 0) != 0 &&
     VAR_10 != VAR_1)
  FUNC_6(VAR_9->dev, "Failed to send initialize CRQ message\n");

 FUNC_5(&VAR_7->dev, VAR_9);

 return 0;

crq_failed:
 FUNC_11(VAR_9->reset_task);
 VAR_9->reset_task = ((void*)0);
 return -VAR_0;
}
