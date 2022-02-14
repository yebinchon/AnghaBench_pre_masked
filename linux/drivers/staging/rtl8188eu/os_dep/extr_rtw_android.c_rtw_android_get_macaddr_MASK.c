
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;


 int FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0, char *VAR_1,
       int VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, "Macaddr = %pM",
     VAR_0->dev_addr);
}
