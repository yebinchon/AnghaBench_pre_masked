
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_5__ {int toggle; scalar_t__ hcr; } ;
struct TYPE_6__ {TYPE_2__ cmd; } ;
struct TYPE_4__ {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct mlx4_dev*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct mlx4_dev *VAR_4)
{
 u32 VAR_5;

 if (FUNC_1(VAR_4->persist->pdev))
  return -VAR_0;

 VAR_5 = FUNC_2(FUNC_0(VAR_4)->cmd.hcr + VAR_2);

 return (VAR_5 & FUNC_3(1 << VAR_1)) ||
  (FUNC_0(VAR_4)->cmd.toggle ==
   !!(VAR_5 & FUNC_3(1 << VAR_3)));
}
