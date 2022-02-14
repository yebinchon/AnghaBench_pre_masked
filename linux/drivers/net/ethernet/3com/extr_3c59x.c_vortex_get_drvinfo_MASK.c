
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vortex_private {int gendev; } ;
struct net_device {int irq; int base_addr; } ;
struct ethtool_drvinfo {int bus_info; int driver; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct vortex_private*) ;
 scalar_t__ FUNC_1 (struct vortex_private*) ;
 int FUNC_2 (int ) ;
 struct vortex_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int,char*,int ,int ) ;
 int FUNC_6 (int ,int ,int) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1,
     struct ethtool_drvinfo *VAR_2)
{
 struct vortex_private *VAR_3 = FUNC_3(VAR_1);

 FUNC_6(VAR_2->driver, VAR_0, sizeof(VAR_2->driver));
 if (FUNC_1(VAR_3)) {
  FUNC_6(VAR_2->bus_info, FUNC_4(FUNC_1(VAR_3)),
   sizeof(VAR_2->bus_info));
 } else {
  if (FUNC_0(VAR_3))
   FUNC_6(VAR_2->bus_info, FUNC_2(VAR_3->gendev),
    sizeof(VAR_2->bus_info));
  else
   FUNC_5(VAR_2->bus_info, sizeof(VAR_2->bus_info),
    "EISA 0x%lx %d", VAR_1->base_addr, VAR_1->irq);
 }
}
