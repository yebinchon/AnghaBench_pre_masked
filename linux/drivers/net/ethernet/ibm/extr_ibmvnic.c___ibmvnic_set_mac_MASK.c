
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * mac_addr; int cmd; int first; } ;
union ibmvnic_crq {TYPE_1__ change_mac_addr; } ;
typedef int u8 ;
struct net_device {int * dev_addr; } ;
struct ibmvnic_adapter {int * mac_addr; scalar_t__ fw_done_rc; int fw_done; } ;
typedef int crq ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ibmvnic_adapter*,union ibmvnic_crq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (union ibmvnic_crq*,int ,int) ;
 struct ibmvnic_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_4, u8 *VAR_5)
{
 struct ibmvnic_adapter *VAR_6 = FUNC_5(VAR_4);
 union ibmvnic_crq VAR_7;
 int VAR_8;

 if (!FUNC_3(VAR_5)) {
  VAR_8 = -VAR_1;
  goto err;
 }

 FUNC_4(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.change_mac_addr.first = VAR_3;
 VAR_7.change_mac_addr.cmd = VAR_0;
 FUNC_0(&VAR_7.change_mac_addr.mac_addr[0], VAR_5);

 FUNC_2(&VAR_6->fw_done);
 VAR_8 = FUNC_1(VAR_6, &VAR_7);
 if (VAR_8) {
  VAR_8 = -VAR_2;
  goto err;
 }

 FUNC_6(&VAR_6->fw_done);

 if (VAR_6->fw_done_rc) {
  VAR_8 = -VAR_2;
  goto err;
 }

 return 0;
err:
 FUNC_0(VAR_6->mac_addr, VAR_4->dev_addr);
 return VAR_8;
}
