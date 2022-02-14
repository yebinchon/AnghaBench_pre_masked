
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {void (* adjust_link ) (struct net_device*) ;} ;



__attribute__((used)) static void FUNC_0(struct phy_device *VAR_0,
        void (*VAR_1)(struct net_device *))
{
 VAR_0->adjust_link = VAR_1;
}
