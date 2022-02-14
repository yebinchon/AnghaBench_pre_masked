
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_driver {scalar_t__ ack_interrupt; scalar_t__ config_intr; } ;



__attribute__((used)) static bool FUNC_0(struct phy_driver *VAR_0)
{
 return VAR_0->config_intr && VAR_0->ack_interrupt;
}
