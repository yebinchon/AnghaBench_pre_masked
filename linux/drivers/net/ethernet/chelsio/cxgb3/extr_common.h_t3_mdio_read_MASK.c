
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mdio_read ) (int ,int ,int,int) ;int prtad; int dev; } ;
struct cphy {TYPE_1__ mdio; } ;


 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct cphy *VAR_0, int VAR_1, int VAR_2,
          unsigned int *VAR_3)
{
 int VAR_4 = VAR_0->mdio.mdio_read(VAR_0->mdio.dev, VAR_0->mdio.prtad, VAR_1, VAR_2);
 *VAR_3 = (VAR_4 >= 0) ? VAR_4 : -1;
 return (VAR_4 >= 0) ? 0 : VAR_4;
}
