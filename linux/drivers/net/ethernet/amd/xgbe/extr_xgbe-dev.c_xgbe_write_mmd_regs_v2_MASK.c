
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int mdio_mmd; unsigned int xpcs_window_mask; unsigned int xpcs_window; int xpcs_lock; int xpcs_window_sel_reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,unsigned int,int) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct xgbe_prv_data *VAR_1, int VAR_2,
       int VAR_3, int VAR_4)
{
 unsigned long VAR_5;
 unsigned int VAR_6, VAR_7, VAR_8;

 if (VAR_3 & VAR_0)
  VAR_6 = VAR_3 & ~VAR_0;
 else
  VAR_6 = (VAR_1->mdio_mmd << 16) | (VAR_3 & 0xffff);
 VAR_6 <<= 1;
 VAR_7 = VAR_6 & ~VAR_1->xpcs_window_mask;
 VAR_8 = VAR_1->xpcs_window + (VAR_6 & VAR_1->xpcs_window_mask);

 FUNC_2(&VAR_1->xpcs_lock, VAR_5);
 FUNC_1(VAR_1, VAR_1->xpcs_window_sel_reg, VAR_7);
 FUNC_0(VAR_1, VAR_8, VAR_4);
 FUNC_3(&VAR_1->xpcs_lock, VAR_5);
}
