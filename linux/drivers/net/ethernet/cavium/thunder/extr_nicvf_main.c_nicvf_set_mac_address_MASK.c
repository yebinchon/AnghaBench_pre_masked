
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct nicvf {int set_mac_pending; TYPE_1__* pdev; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct TYPE_2__ {scalar_t__ msix_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 struct nicvf* FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct nicvf*,struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, void *VAR_3)
{
 struct sockaddr *VAR_4 = VAR_3;
 struct nicvf *VAR_5 = FUNC_2(VAR_2);

 if (!FUNC_0(VAR_4->sa_data))
  return -VAR_0;

 FUNC_1(VAR_2->dev_addr, VAR_4->sa_data, VAR_2->addr_len);

 if (VAR_5->pdev->msix_enabled) {
  if (FUNC_3(VAR_5, VAR_2))
   return -VAR_1;
 } else {
  VAR_5->set_mac_pending = 1;
 }

 return 0;
}
