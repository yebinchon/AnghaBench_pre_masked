
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct mlx5_core_dev {TYPE_1__* iseg; } ;
struct TYPE_2__ {int initializing; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5_core_dev*,char*) ;
 int FUNC_3 (struct mlx5_core_dev*,int ) ;

__attribute__((used)) static bool FUNC_4(struct mlx5_core_dev *VAR_5)
{
 bool VAR_6 = (FUNC_1(&VAR_5->iseg->initializing) >>
     VAR_0) & 1;
 u32 VAR_7;

 if (!VAR_6)
  return 0;






 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 == VAR_4 ||
     VAR_7 == VAR_2 ||
     VAR_7 == VAR_3) {
  FUNC_2(VAR_5, "Not issuing FW reset. Either it's already done or won't help.");
  return 0;
 }

 FUNC_2(VAR_5, "Issuing FW Reset\n");



 FUNC_3(VAR_5, VAR_1);

 return 1;
}
