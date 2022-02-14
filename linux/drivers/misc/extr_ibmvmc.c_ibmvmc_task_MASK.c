
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_dev {int dummy; } ;
struct ibmvmc_crq_msg {int valid; } ;
struct crq_server_adapter {int queue; int dev; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 struct ibmvmc_crq_msg* FUNC_0 (int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (struct ibmvmc_crq_msg*,struct crq_server_adapter*) ;
 scalar_t__ VAR_1 ;
 struct vio_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct vio_dev*) ;
 int FUNC_4 (struct vio_dev*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct crq_server_adapter *VAR_3 =
  (struct crq_server_adapter *)VAR_2;
 struct vio_dev *VAR_4 = FUNC_2(VAR_3->dev);
 struct ibmvmc_crq_msg *VAR_5;
 int VAR_6 = 0;

 while (!VAR_6) {

  while ((VAR_5 = FUNC_0(&VAR_3->queue)) != ((void*)0)) {
   FUNC_1(VAR_5, VAR_3);
   VAR_5->valid = 0x00;



   if (VAR_0.state == VAR_1)
    return;
  }

  FUNC_4(VAR_4);
  VAR_5 = FUNC_0(&VAR_3->queue);
  if (VAR_5) {
   FUNC_3(VAR_4);
   FUNC_1(VAR_5, VAR_3);
   VAR_5->valid = 0x00;



   if (VAR_0.state == VAR_1)
    return;
  } else {
   VAR_6 = 1;
  }
 }
}
