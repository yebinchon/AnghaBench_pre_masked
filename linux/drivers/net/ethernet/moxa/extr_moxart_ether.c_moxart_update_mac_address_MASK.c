
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int* dev_addr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_1)
{
 FUNC_0(VAR_1, VAR_0,
     ((VAR_1->dev_addr[0] << 8) | (VAR_1->dev_addr[1])));
 FUNC_0(VAR_1, VAR_0 + 4,
     ((VAR_1->dev_addr[2] << 24) |
      (VAR_1->dev_addr[3] << 16) |
      (VAR_1->dev_addr[4] << 8) |
      (VAR_1->dev_addr[5])));
}
