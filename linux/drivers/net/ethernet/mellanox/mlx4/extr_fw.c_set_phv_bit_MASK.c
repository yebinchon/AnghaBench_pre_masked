
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_2__ {int flags2; int* phv_bit; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx4_dev*,size_t,int) ;
 scalar_t__ FUNC_1 (struct mlx4_dev*) ;

int FUNC_2(struct mlx4_dev *VAR_4, u8 VAR_5, int VAR_6)
{
 int VAR_7;

 if (FUNC_1(VAR_4))
  return -VAR_1;

 if (VAR_4->caps.flags2 & VAR_2 &&
     !(VAR_4->caps.flags2 & VAR_3)) {
  VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_6);
  if (!VAR_7)
   VAR_4->caps.phv_bit[VAR_5] = VAR_6;
  return VAR_7;
 }

 return -VAR_0;
}
