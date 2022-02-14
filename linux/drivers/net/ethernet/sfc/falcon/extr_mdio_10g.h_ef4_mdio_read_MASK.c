
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mdio_read ) (int ,int ,int,int) ;int prtad; } ;
struct ef4_nic {TYPE_1__ mdio; int net_dev; } ;


 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct ef4_nic *VAR_0, int VAR_1, int VAR_2)
{
 return VAR_0->mdio.mdio_read(VAR_0->net_dev, VAR_0->mdio.prtad, VAR_1, VAR_2);
}
