
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mii_bus {int (* read ) (struct mii_bus*,int,int ) ;int mdio_lock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mii_bus*,int,int ) ;
 int FUNC_3 (struct mii_bus*,int,int,int ,int,int) ;

int FUNC_4(struct mii_bus *VAR_0, int VAR_1, u32 VAR_2)
{
 int VAR_3;

 FUNC_0(!FUNC_1(&VAR_0->mdio_lock));

 VAR_3 = VAR_0->read(VAR_0, VAR_1, VAR_2);

 FUNC_3(VAR_0, 1, VAR_1, VAR_2, VAR_3, VAR_3);

 return VAR_3;
}
