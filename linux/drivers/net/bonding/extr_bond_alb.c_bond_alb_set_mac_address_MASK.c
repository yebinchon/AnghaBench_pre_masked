
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_storage {int __data; } ;
struct slave {int dummy; } ;
struct net_device {int dev_addr; int addr_len; } ;
struct TYPE_2__ {scalar_t__ rlb_enabled; } ;
struct bonding {TYPE_1__ alb_info; int curr_active_slave; } ;


 int VAR_0 ;
 int FUNC_0 (struct bonding*,struct slave*,struct slave*) ;
 int FUNC_1 (struct slave*,int ,int) ;
 int FUNC_2 (struct bonding*,void*) ;
 int FUNC_3 (struct slave*,int ,int ) ;
 int FUNC_4 (struct slave*,struct slave*) ;
 int FUNC_5 (int ,int ,int ) ;
 struct slave* FUNC_6 (struct bonding*,int ) ;
 int FUNC_7 (int ) ;
 struct bonding* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct bonding*,struct slave*) ;
 struct slave* FUNC_10 (int ) ;

int FUNC_11(struct net_device *VAR_1, void *VAR_2)
{
 struct bonding *VAR_3 = FUNC_8(VAR_1);
 struct sockaddr_storage *VAR_4 = VAR_2;
 struct slave *VAR_5;
 struct slave *VAR_6;
 int VAR_7;

 if (!FUNC_7(VAR_4->__data))
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_3, VAR_2);
 if (VAR_7)
  return VAR_7;

 FUNC_5(VAR_1->dev_addr, VAR_4->__data, VAR_1->addr_len);





 VAR_5 = FUNC_10(VAR_3->curr_active_slave);
 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_6(VAR_3, VAR_1->dev_addr);

 if (VAR_6) {
  FUNC_4(VAR_6, VAR_5);
  FUNC_0(VAR_3, VAR_6, VAR_5);
 } else {
  FUNC_3(VAR_5, VAR_1->dev_addr,
           VAR_1->addr_len);

  FUNC_1(VAR_5,
       VAR_1->dev_addr, 0);
  if (VAR_3->alb_info.rlb_enabled) {

   FUNC_9(VAR_3, VAR_5);
  }
 }

 return 0;
}
