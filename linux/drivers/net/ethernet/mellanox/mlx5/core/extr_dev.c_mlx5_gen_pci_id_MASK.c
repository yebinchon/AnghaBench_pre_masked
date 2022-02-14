
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_core_dev {TYPE_1__* pdev; } ;
struct TYPE_4__ {int number; } ;
struct TYPE_3__ {int devfn; TYPE_2__* bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static u32 FUNC_2(struct mlx5_core_dev *VAR_0)
{
 return (u32)((FUNC_1(VAR_0->pdev->bus) << 16) |
       (VAR_0->pdev->bus->number << 8) |
       FUNC_0(VAR_0->pdev->devfn));
}
