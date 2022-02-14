
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr {scalar_t__ sa_data; } ;
struct net_device {int dev_addr; } ;
struct hnae3_handle {TYPE_2__* ae_algo; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* set_mac_addr ) (struct hnae3_handle*,scalar_t__,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 struct hnae3_handle* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 int FUNC_5 (struct net_device*,char*,scalar_t__) ;
 int FUNC_6 (struct hnae3_handle*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1, void *VAR_2)
{
 struct hnae3_handle *VAR_3 = FUNC_2(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;
 int VAR_5;

 if (!VAR_4 || !FUNC_3((const u8 *)VAR_4->sa_data))
  return -VAR_0;

 if (FUNC_1(VAR_1->dev_addr, VAR_4->sa_data)) {
  FUNC_5(VAR_1, "already using mac address %pM\n",
       VAR_4->sa_data);
  return 0;
 }

 VAR_5 = VAR_3->ae_algo->ops->set_mac_addr(VAR_3, VAR_4->sa_data, 0);
 if (VAR_5) {
  FUNC_4(VAR_1, "set_mac_address fail, ret=%d!\n", VAR_5);
  return VAR_5;
 }

 FUNC_0(VAR_1->dev_addr, VAR_4->sa_data);

 return 0;
}
