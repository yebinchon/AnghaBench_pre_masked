
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_dev {int dummy; } ;
typedef int spinlock_t ;
struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {TYPE_1__ res_tracker; } ;
struct TYPE_7__ {TYPE_2__ master; } ;
struct TYPE_8__ {TYPE_3__ mfunc; } ;


 TYPE_4__* FUNC_0 (struct mlx4_dev*) ;

__attribute__((used)) static inline spinlock_t *FUNC_1(struct mlx4_dev *VAR_0)
{
 return &FUNC_0(VAR_0)->mfunc.master.res_tracker.lock;
}
