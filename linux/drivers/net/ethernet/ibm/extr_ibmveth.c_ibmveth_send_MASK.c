
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ibmveth_buf_desc {int desc; } ;
struct ibmveth_adapter {int netdev; int fw_large_send_support; TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (int ,int ,int ,int ,int ,int ,int ,unsigned long,unsigned long*,unsigned long,int ) ;
 int FUNC_1 (int ,char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct ibmveth_adapter *VAR_3,
   union ibmveth_buf_desc *VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7;
 unsigned long VAR_8;





 VAR_7 = 1024;
 VAR_6 = 0;
 do {
  VAR_8 = FUNC_0(VAR_3->vdev->unit_address,
          VAR_4[0].desc, VAR_4[1].desc,
          VAR_4[2].desc, VAR_4[3].desc,
          VAR_4[4].desc, VAR_4[5].desc,
          VAR_6, &VAR_6, VAR_5,
          VAR_3->fw_large_send_support);
 } while ((VAR_8 == VAR_0) && (VAR_7--));

 if (VAR_8 != VAR_2 && VAR_8 != VAR_1) {
  FUNC_1(VAR_3->netdev, "tx: h_send_logical_lan failed "
      "with rc=%ld\n", VAR_8);
  return 1;
 }

 return 0;
}
