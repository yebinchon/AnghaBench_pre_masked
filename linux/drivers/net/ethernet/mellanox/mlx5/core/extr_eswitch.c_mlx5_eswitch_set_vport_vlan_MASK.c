
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct mlx5_eswitch {int state_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_eswitch*,scalar_t__,scalar_t__,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct mlx5_eswitch *VAR_2,
    u16 VAR_3, u16 VAR_4, u8 VAR_5)
{
 u8 VAR_6 = 0;
 int VAR_7;

 if (VAR_4 || VAR_5)
  VAR_6 = VAR_1 | VAR_0;

 FUNC_1(&VAR_2->state_lock);
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_2(&VAR_2->state_lock);

 return VAR_7;
}
