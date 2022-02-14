
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int max_counters; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {int counters_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (struct mlx4_dev*) ;

__attribute__((used)) static void FUNC_2(struct mlx4_dev *VAR_1)
{
 if (!(VAR_1->caps.flags & VAR_0))
  return;

 if (!VAR_1->caps.max_counters)
  return;

 FUNC_0(&FUNC_1(VAR_1)->counters_bitmap);
}
