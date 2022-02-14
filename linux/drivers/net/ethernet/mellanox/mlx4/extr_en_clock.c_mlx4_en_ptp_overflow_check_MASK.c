
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_en_dev {scalar_t__ last_overflow_check; int clock_lock; int clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct mlx4_en_dev *VAR_2)
{
 bool VAR_3 = FUNC_0(VAR_2->last_overflow_check +
           VAR_0);
 unsigned long VAR_4;

 if (VAR_3) {
  FUNC_2(&VAR_2->clock_lock, VAR_4);
  FUNC_1(&VAR_2->clock);
  FUNC_3(&VAR_2->clock_lock, VAR_4);
  VAR_2->last_overflow_check = VAR_1;
 }
}
