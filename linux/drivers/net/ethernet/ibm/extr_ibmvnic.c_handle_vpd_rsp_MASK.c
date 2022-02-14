
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int code; } ;
struct TYPE_7__ {TYPE_2__ rc; } ;
union ibmvnic_crq {TYPE_3__ get_vpd_rsp; } ;
typedef char u8 ;
struct ibmvnic_adapter {char* fw_version; int fw_done; TYPE_4__* vpd; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int len; unsigned char* buff; int dma_addr; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ,int,int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*,...) ;
 unsigned char* FUNC_6 (unsigned char*,char*,int) ;

__attribute__((used)) static void FUNC_7(union ibmvnic_crq *VAR_1,
      struct ibmvnic_adapter *VAR_2)
{
 struct device *VAR_3 = &VAR_2->vdev->dev;
 unsigned char *VAR_4 = ((void*)0);
 u8 VAR_5 = 0;

 FUNC_4(VAR_2->fw_version, 0, 32);

 FUNC_3(VAR_3, VAR_2->vpd->dma_addr, VAR_2->vpd->len,
    VAR_0);

 if (VAR_1->get_vpd_rsp.rc.code) {
  FUNC_1(VAR_3, "Error retrieving VPD from device, rc=%x\n",
   VAR_1->get_vpd_rsp.rc.code);
  goto complete;
 }




 VAR_4 = FUNC_6(VAR_2->vpd->buff, "RM", VAR_2->vpd->len);
 if (!VAR_4) {
  FUNC_2(VAR_3, "Warning - No FW level has been provided in the VPD buffer by the VIOS Server\n");
  goto complete;
 }


 if ((VAR_4 + 2) < (VAR_2->vpd->buff + VAR_2->vpd->len)) {
  VAR_5 = *(VAR_4 + 2);
 } else {
  FUNC_2(VAR_3, "Length of FW substr extrapolated VDP buff\n");
  goto complete;
 }


 if ((VAR_4 + 3 + VAR_5) <
     (VAR_2->vpd->buff + VAR_2->vpd->len)) {
  FUNC_5((char *)VAR_2->fw_version, VAR_4 + 3, VAR_5);
 } else {
  FUNC_2(VAR_3, "FW substr extrapolated VPD buff\n");
 }

complete:
 if (VAR_2->fw_version[0] == '\0')
  FUNC_5((char *)VAR_2->fw_version, "N/A", 3 * sizeof(char));
 FUNC_0(&VAR_2->fw_done);
}
