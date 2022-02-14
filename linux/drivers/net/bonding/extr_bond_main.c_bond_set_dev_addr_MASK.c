
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_assign_type; int addr_len; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct net_device*,struct net_device*,char*,struct net_device*,struct net_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2,
        struct net_device *VAR_3)
{
 int VAR_4;

 FUNC_3(VAR_2, VAR_3, "bond_dev=%p slave_dev=%p slave_dev->addr_len=%d\n",
    VAR_2, VAR_3, VAR_3->addr_len);
 VAR_4 = FUNC_1(VAR_2, VAR_3->dev_addr, ((void*)0));
 if (VAR_4)
  return VAR_4;

 FUNC_2(VAR_2->dev_addr, VAR_3->dev_addr, VAR_3->addr_len);
 VAR_2->addr_assign_type = VAR_1;
 FUNC_0(VAR_0, VAR_2);
 return 0;
}
