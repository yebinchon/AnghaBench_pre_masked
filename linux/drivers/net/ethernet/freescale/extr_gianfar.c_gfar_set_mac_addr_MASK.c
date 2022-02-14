
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;


 int FUNC_0 (struct net_device*,void*) ;
 int FUNC_1 (struct net_device*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, void *VAR_1)
{
 FUNC_0(VAR_0, VAR_1);

 FUNC_1(VAR_0, 0, VAR_0->dev_addr);

 return 0;
}
