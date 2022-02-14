
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ first; } ;
union ibmvnic_crq {TYPE_3__ generic; } ;
typedef int u64 ;
struct TYPE_5__ {int active; } ;
struct ibmvnic_adapter {int resetting; TYPE_2__ crq; int netdev; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {unsigned int unit_address; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct ibmvnic_adapter*,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_5 (int ,unsigned int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ibmvnic_adapter *VAR_5,
       union ibmvnic_crq *VAR_6)
{
 unsigned int VAR_7 = VAR_5->vdev->unit_address;
 struct device *VAR_8 = &VAR_5->vdev->dev;
 u64 *VAR_9 = (u64 *)VAR_6;
 int VAR_10;

 FUNC_4(VAR_5->netdev, "Sending CRQ: %016lx %016lx\n",
     (unsigned long int)FUNC_0(VAR_9[0]),
     (unsigned long int)FUNC_0(VAR_9[1]));

 if (!VAR_5->crq.active &&
     VAR_6->generic.first != VAR_3) {
  FUNC_1(VAR_8, "Invalid request detected while CRQ is inactive, possible device state change during reset\n");
  return -VAR_0;
 }


 FUNC_3();

 VAR_10 = FUNC_5(VAR_2, VAR_7,
    FUNC_0(VAR_9[0]),
    FUNC_0(VAR_9[1]));

 if (VAR_10) {
  if (VAR_10 == VAR_1) {
   FUNC_1(VAR_8, "CRQ Queue closed\n");
   if (FUNC_6(0, &VAR_5->resetting))
    FUNC_2(VAR_5, VAR_4);
  }

  FUNC_1(VAR_8, "Send error (rc=%d)\n", VAR_10);
 }

 return VAR_10;
}
