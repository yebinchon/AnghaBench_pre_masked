
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {void* len; void* ioba; int cmd; void* first; } ;
struct TYPE_6__ {int cmd; void* first; } ;
union ibmvnic_crq {TYPE_3__ get_vpd; TYPE_2__ get_vpd_size; } ;
typedef int u32 ;
struct ibmvnic_adapter {int fw_done; TYPE_4__* vpd; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_8__ {int len; int * buff; int dma_addr; } ;
struct TYPE_5__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,int,int ) ;
 int * FUNC_8 (int,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct ibmvnic_adapter *VAR_7)
{
 struct device *VAR_8 = &VAR_7->vdev->dev;
 union ibmvnic_crq VAR_9;
 int VAR_10 = 0;
 int VAR_11;

 if (VAR_7->vpd->buff)
  VAR_10 = VAR_7->vpd->len;

 FUNC_5(&VAR_7->fw_done);
 VAR_9.get_vpd_size.first = VAR_6;
 VAR_9.get_vpd_size.cmd = VAR_4;
 VAR_11 = FUNC_4(VAR_7, &VAR_9);
 if (VAR_11)
  return VAR_11;
 FUNC_10(&VAR_7->fw_done);

 if (!VAR_7->vpd->len)
  return -VAR_1;

 if (!VAR_7->vpd->buff)
  VAR_7->vpd->buff = FUNC_8(VAR_7->vpd->len, VAR_5);
 else if (VAR_7->vpd->len != VAR_10)
  VAR_7->vpd->buff =
   FUNC_7(VAR_7->vpd->buff,
     VAR_7->vpd->len, VAR_5);

 if (!VAR_7->vpd->buff) {
  FUNC_1(VAR_8, "Could allocate VPD buffer\n");
  return -VAR_2;
 }

 VAR_7->vpd->dma_addr =
  FUNC_2(VAR_8, VAR_7->vpd->buff, VAR_7->vpd->len,
          VAR_0);
 if (FUNC_3(VAR_8, VAR_7->vpd->dma_addr)) {
  FUNC_1(VAR_8, "Could not map VPD buffer\n");
  FUNC_6(VAR_7->vpd->buff);
  VAR_7->vpd->buff = ((void*)0);
  return -VAR_2;
 }

 FUNC_9(&VAR_7->fw_done);
 VAR_9.get_vpd.first = VAR_6;
 VAR_9.get_vpd.cmd = VAR_3;
 VAR_9.get_vpd.ioba = FUNC_0(VAR_7->vpd->dma_addr);
 VAR_9.get_vpd.len = FUNC_0((u32)VAR_7->vpd->len);
 VAR_11 = FUNC_4(VAR_7, &VAR_9);
 if (VAR_11) {
  FUNC_6(VAR_7->vpd->buff);
  VAR_7->vpd->buff = ((void*)0);
  return VAR_11;
 }
 FUNC_10(&VAR_7->fw_done);

 return 0;
}
