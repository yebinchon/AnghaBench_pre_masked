
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct hns_nic_priv {scalar_t__ enet_ver; struct hnae_handle* ae_handle; } ;
struct hnae_handle {TYPE_2__* dev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_mtu ) (struct hnae_handle*,int) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct hnae_handle*) ;
 int FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct net_device*,char*,...) ;
 struct hns_nic_priv* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct hnae_handle*,int) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_4, int VAR_5)
{
 struct hns_nic_priv *VAR_6 = FUNC_7(VAR_4);
 struct hnae_handle *VAR_7 = VAR_6->ae_handle;
 bool VAR_8 = FUNC_8(VAR_4);
 int VAR_9;


 if (VAR_5 < 68)
  return -VAR_2;


 if (VAR_5 == VAR_4->mtu)
  return 0;

 if (!VAR_7->dev->ops->set_mtu)
  return -VAR_3;

 if (VAR_8) {
  (void)FUNC_4(VAR_4);
  FUNC_5(100);
 }

 if (VAR_6->enet_ver != VAR_0 &&
     VAR_4->mtu <= VAR_1 &&
     VAR_5 > VAR_1) {

  FUNC_0(VAR_7);


  VAR_9 = FUNC_2(VAR_4);


  FUNC_1(VAR_7);

  if (VAR_9) {
   FUNC_6(VAR_4, "clear the fetched desc fail\n");
   goto out;
  }
 }

 VAR_9 = VAR_7->dev->ops->set_mtu(VAR_7, VAR_5);
 if (VAR_9) {
  FUNC_6(VAR_4, "set mtu fail, return value %d\n",
      VAR_9);
  goto out;
 }


 VAR_4->mtu = VAR_5;

out:
 if (VAR_8) {
  if (FUNC_3(VAR_4)) {
   FUNC_6(VAR_4, "hns net open fail\n");
   VAR_9 = -VAR_2;
  }
 }

 return VAR_9;
}
