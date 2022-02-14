
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int* dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 FUNC_0(VAR_2,
       (VAR_2->dev_addr[0] << 24) | (VAR_2->dev_addr[1] << 16) |
       (VAR_2->dev_addr[2] << 8) | (VAR_2->dev_addr[3]), VAR_0);
 FUNC_0(VAR_2,
       (VAR_2->dev_addr[4] << 8) | (VAR_2->dev_addr[5]), VAR_1);
}
