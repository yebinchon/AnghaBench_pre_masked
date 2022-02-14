
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int code; } ;
struct TYPE_8__ {int len; TYPE_3__ rc; } ;
union ibmvnic_crq {TYPE_4__ get_vpd_size_rsp; } ;
struct ibmvnic_adapter {int fw_done; TYPE_1__* vpd; TYPE_2__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {int len; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int ) ;

__attribute__((used)) static void FUNC_3(union ibmvnic_crq *VAR_0,
    struct ibmvnic_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_1->vdev->dev;

 if (VAR_0->get_vpd_size_rsp.rc.code) {
  FUNC_2(VAR_2, "Error retrieving VPD size, rc=%x\n",
   VAR_0->get_vpd_size_rsp.rc.code);
  FUNC_1(&VAR_1->fw_done);
  return;
 }

 VAR_1->vpd->len = FUNC_0(VAR_0->get_vpd_size_rsp.len);
 FUNC_1(&VAR_1->fw_done);
}
