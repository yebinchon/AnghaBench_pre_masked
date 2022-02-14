
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr_storage {int ss_family; int __data; } ;
struct sockaddr {int dummy; } ;
struct slave {TYPE_1__* bond; struct net_device* dev; } ;
struct net_device {int type; int dev_addr; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct net_device*,struct sockaddr*,int *) ;
 int FUNC_2 (int ,int *,unsigned int) ;
 int FUNC_3 (int ,struct net_device*,char*) ;

__attribute__((used)) static int FUNC_4(struct slave *VAR_2, u8 VAR_3[],
      unsigned int VAR_4)
{
 struct net_device *VAR_5 = VAR_2->dev;
 struct sockaddr_storage VAR_6;

 if (FUNC_0(VAR_2->bond) == VAR_0) {
  FUNC_2(VAR_5->dev_addr, VAR_3, VAR_4);
  return 0;
 }




 FUNC_2(VAR_6.__data, VAR_3, VAR_4);
 VAR_6.ss_family = VAR_5->type;
 if (FUNC_1(VAR_5, (struct sockaddr *)&VAR_6, ((void*)0))) {
  FUNC_3(VAR_2->bond->dev, VAR_5, "dev_set_mac_address on slave failed! ALB mode requires that the base driver support setting the hw address also when the network device's interface is open\n");
  return -VAR_1;
 }
 return 0;
}
