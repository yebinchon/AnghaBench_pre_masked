
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int mdio_mmd; int xpcs_lock; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_2, int VAR_3,
       int VAR_4, int VAR_5)
{
 unsigned int VAR_6;
 unsigned long VAR_7;

 if (VAR_4 & VAR_0)
  VAR_6 = VAR_4 & ~VAR_0;
 else
  VAR_6 = (VAR_2->mdio_mmd << 16) | (VAR_4 & 0xffff);
 FUNC_1(&VAR_2->xpcs_lock, VAR_7);
 FUNC_0(VAR_2, VAR_1, VAR_6 >> 8);
 FUNC_0(VAR_2, (VAR_6 & 0xff) << 2, VAR_5);
 FUNC_2(&VAR_2->xpcs_lock, VAR_7);
}
