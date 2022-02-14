
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct controller_priv {int ctrl_lock; scalar_t__ cpld_base; int control_reg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct controller_priv *VAR_1, u8 VAR_2, bool VAR_3)
{
 FUNC_0(&VAR_1->ctrl_lock);




 if (VAR_3)
  VAR_1->control_reg &= ~VAR_2;
 else
  VAR_1->control_reg |= VAR_2;
 FUNC_3(VAR_1->control_reg, VAR_1->cpld_base + VAR_0);
 if (VAR_3)
  FUNC_2(100, 200);
 FUNC_1(&VAR_1->ctrl_lock);
}
