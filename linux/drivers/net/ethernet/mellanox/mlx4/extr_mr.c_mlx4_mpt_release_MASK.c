
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*,int ) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,char*,int ) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct mlx4_dev *VAR_5, u32 VAR_6)
{
 u64 VAR_7 = 0;

 if (FUNC_2(VAR_5)) {
  FUNC_4(&VAR_7, VAR_6);
  if (FUNC_1(VAR_5, VAR_7, VAR_3, VAR_4,
          VAR_0,
          VAR_1, VAR_2))
   FUNC_3(VAR_5, "Failed to release mr index:%d\n",
      VAR_6);
  return;
 }
 FUNC_0(VAR_5, VAR_6);
}
