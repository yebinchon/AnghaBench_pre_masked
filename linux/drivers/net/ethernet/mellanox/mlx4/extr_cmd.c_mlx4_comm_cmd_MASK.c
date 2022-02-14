
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_5__ {scalar_t__ use_events; } ;
struct TYPE_6__ {TYPE_2__ cmd; } ;
struct TYPE_4__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,int ,int ,unsigned long) ;
 int FUNC_1 (struct mlx4_dev*,int ,int ,int ,unsigned long) ;
 TYPE_3__* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct mlx4_dev *VAR_2, u8 VAR_3, u16 VAR_4,
    u16 VAR_5, unsigned long VAR_6)
{
 if (VAR_2->persist->state & VAR_1)
  return FUNC_3(VAR_0);

 if (FUNC_2(VAR_2)->cmd.use_events)
  return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_6);
}
