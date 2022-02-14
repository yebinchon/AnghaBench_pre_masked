
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_sub_crq_queue {scalar_t__ msgs; int msg_token; int crq_num; } ;
struct ibmvnic_adapter {int netdev; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int unit_address; struct device dev; } ;


 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (long) ;
 int VAR_3 ;
 int FUNC_1 (struct device*,int ,int,int ) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (struct ibmvnic_sub_crq_queue*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,int ,long) ;
 long FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ibmvnic_adapter *VAR_4,
      struct ibmvnic_sub_crq_queue *VAR_5,
      bool VAR_6)
{
 struct device *VAR_7 = &VAR_4->vdev->dev;
 long VAR_8;

 FUNC_4(VAR_4->netdev, "Releasing sub-CRQ\n");

 if (VAR_6) {

  do {
   VAR_8 = FUNC_6(VAR_2,
      VAR_4->vdev->unit_address,
      VAR_5->crq_num);
  } while (VAR_8 == VAR_1 || FUNC_0(VAR_8));

  if (VAR_8) {
   FUNC_5(VAR_4->netdev,
       "Failed to release sub-CRQ %16lx, rc = %ld\n",
       VAR_5->crq_num, VAR_8);
  }
 }

 FUNC_1(VAR_7, VAR_5->msg_token, 4 * VAR_3,
    VAR_0);
 FUNC_2((unsigned long)VAR_5->msgs, 2);
 FUNC_3(VAR_5);
}
