
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct mii_bus {int mdio_lock; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct mii_bus*,int,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct mii_bus *VAR_1, int VAR_2, u32 VAR_3, u16 VAR_4)
{
 int VAR_5;

 FUNC_0(FUNC_2());

 FUNC_3(&VAR_1->mdio_lock, VAR_0);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
 FUNC_4(&VAR_1->mdio_lock);

 return VAR_5;
}
