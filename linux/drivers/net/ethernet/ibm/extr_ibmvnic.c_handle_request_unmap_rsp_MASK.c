
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {long code; } ;
struct TYPE_6__ {TYPE_2__ rc; } ;
union ibmvnic_crq {TYPE_3__ request_unmap_rsp; } ;
struct ibmvnic_adapter {TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,long) ;

__attribute__((used)) static void FUNC_1(union ibmvnic_crq *VAR_0,
         struct ibmvnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->vdev->dev;
 long VAR_3;

 VAR_3 = VAR_0->request_unmap_rsp.rc.code;
 if (VAR_3)
  FUNC_0(VAR_2, "Error %ld in REQUEST_UNMAP_RSP\n", VAR_3);
}
