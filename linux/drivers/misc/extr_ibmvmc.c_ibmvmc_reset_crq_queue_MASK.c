
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int unit_address; } ;
struct crq_queue {int msg_token; scalar_t__ cur; int msgs; } ;
struct crq_server_adapter {int dev; struct crq_queue queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct vio_dev* FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct crq_server_adapter *VAR_2)
{
 struct vio_dev *VAR_3 = FUNC_5(VAR_2->dev);
 struct crq_queue *VAR_4 = &VAR_2->queue;
 int VAR_5 = 0;


 FUNC_2(VAR_3->unit_address);


 FUNC_3(VAR_4->msgs, 0x00, VAR_1);
 VAR_4->cur = 0;


 VAR_5 = FUNC_4(VAR_0,
    VAR_3->unit_address,
    VAR_4->msg_token, VAR_1);
 if (VAR_5 == 2)

  FUNC_1(VAR_2->dev, "Partner adapter not ready\n");
 else if (VAR_5 != 0)
  FUNC_0(VAR_2->dev, "couldn't register crq--rc 0x%x\n", VAR_5);

 return VAR_5;
}
