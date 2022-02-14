
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct mlx5_core_dev*,int ,scalar_t__*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_core_dev *VAR_5, u8 VAR_6)
{
 int VAR_7 = 0;
 u32 VAR_8;
 int VAR_9;

 do {
  if (VAR_7 > VAR_4)
   return -VAR_0;

  VAR_9 = FUNC_2(VAR_5, VAR_1, &VAR_8);
  if (VAR_9)
   return VAR_9;
  VAR_8 = FUNC_0(VAR_8, VAR_3, VAR_2);
  VAR_7++;

  if ((VAR_7 & 0xf) == 0)
   FUNC_1(1000, 2000);

 } while (VAR_8 != VAR_6);

 return 0;
}
