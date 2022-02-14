
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int addr_len; } ;
struct TYPE_6__ {TYPE_1__* ndev; } ;
typedef TYPE_2__ islpci_private ;
struct TYPE_5__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int *) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;

int
FUNC_3(struct net_device *VAR_3, void *VAR_4)
{
 islpci_private *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 if (VAR_3->addr_len != 6)
  return -VAR_0;
 VAR_6 = FUNC_1(VAR_5, VAR_2, 0,
         &((struct sockaddr *) VAR_4)->sa_data);
 if (!VAR_6)
  FUNC_0(VAR_5->ndev->dev_addr,
         &((struct sockaddr *) VAR_4)->sa_data, VAR_1);

 return VAR_6;
}
