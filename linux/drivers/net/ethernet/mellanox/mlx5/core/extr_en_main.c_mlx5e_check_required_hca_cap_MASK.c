
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct TYPE_2__ {int max_ft_level; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 scalar_t__ FUNC_2 (struct mlx5_core_dev*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct mlx5_core_dev*,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(struct mlx5_core_dev *VAR_12)
{
 if (FUNC_2(VAR_12, VAR_8) != VAR_1)
  return -VAR_0;
 if (!FUNC_2(VAR_12, VAR_4) ||
     !FUNC_2(VAR_12, VAR_7) ||
     !FUNC_0(VAR_12, VAR_3) ||
     !FUNC_0(VAR_12, VAR_6) ||
     !FUNC_0(VAR_12, VAR_11) ||
     !FUNC_0(VAR_12, VAR_9) ||
     FUNC_1(VAR_12,
          VAR_5.max_ft_level)
          < 3) {
  FUNC_3(VAR_12,
          "Not creating net device, some required device capabilities are missing\n");
  return -VAR_0;
 }
 if (!FUNC_0(VAR_12, VAR_10))
  FUNC_3(VAR_12, "Self loop back prevention is not supported\n");
 if (!FUNC_2(VAR_12, VAR_2))
  FUNC_3(VAR_12, "CQ moderation is not supported\n");

 return 0;
}
