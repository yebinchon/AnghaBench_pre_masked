
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct mlx5_core_dev {int pdev; } ;
struct TYPE_2__ {int host_total_vfs; } ;


 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int const*,int ) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (struct mlx5_core_dev*) ;
 int * FUNC_4 (struct mlx5_core_dev*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_1 ;

__attribute__((used)) static u16 FUNC_6(struct mlx5_core_dev *VAR_2)
{
 u16 VAR_3;
 const u32 *VAR_4;

 if (FUNC_3(VAR_2)) {
  VAR_4 = FUNC_4(VAR_2);




  if (FUNC_0(VAR_4))
   goto done;
  VAR_3 = FUNC_1(VAR_1, VAR_4,
       VAR_0.host_total_vfs);
  FUNC_2(VAR_4);
  if (VAR_3)
   return VAR_3;
 }

done:
 return FUNC_5(VAR_2->pdev);
}
