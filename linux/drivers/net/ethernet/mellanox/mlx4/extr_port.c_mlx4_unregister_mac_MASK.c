
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct mlx4_dev {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mlx4_dev*,scalar_t__,int ) ;
 int FUNC_1 (struct mlx4_dev*,int ,int *,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *,scalar_t__) ;

void FUNC_4(struct mlx4_dev *VAR_6, u8 VAR_7, u64 VAR_8)
{
 u64 VAR_9 = 0;

 if (FUNC_2(VAR_6)) {
  if (!(VAR_6->flags & VAR_3)) {
   (void) FUNC_1(VAR_6, VAR_8, &VAR_9,
         ((u32) VAR_7) << 8 | (u32) VAR_4,
         VAR_5, VAR_0,
         VAR_1, VAR_2);
  } else {

   FUNC_3(&VAR_9, VAR_7);
   (void) FUNC_1(VAR_6, VAR_8, &VAR_9, VAR_4,
         VAR_5, VAR_0,
         VAR_1, VAR_2);
  }
  return;
 }
 FUNC_0(VAR_6, VAR_7, VAR_8);
 return;
}
