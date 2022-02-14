
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* mdio_write ) (int ,int ,int,int,unsigned int) ;int prtad; int dev; } ;
struct cphy {TYPE_1__ mdio; } ;


 int FUNC_0 (int ,int ,int,int,unsigned int) ;

__attribute__((used)) static inline int FUNC_1(struct cphy *VAR_0, int VAR_1, int VAR_2,
      unsigned int VAR_3)
{
 return VAR_0->mdio.mdio_write(VAR_0->mdio.dev, VAR_0->mdio.prtad, VAR_1,
         VAR_2, VAR_3);
}
