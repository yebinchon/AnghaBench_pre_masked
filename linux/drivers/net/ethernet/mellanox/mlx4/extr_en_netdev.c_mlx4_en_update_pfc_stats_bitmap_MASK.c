
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlx4_en_stats_bitmap {int mutex; int bitmap; } ;
struct TYPE_2__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int ,int,scalar_t__) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx4_dev *VAR_9,
         struct mlx4_en_stats_bitmap *VAR_10,
         u8 VAR_11, u8 VAR_12,
         u8 VAR_13, u8 VAR_14)
{
 int VAR_15 = VAR_6 + VAR_8 + VAR_7;

 if (!FUNC_2(VAR_9) &&
     (VAR_9->caps.flags2 & VAR_0)) {
  FUNC_3(&VAR_10->mutex);
  FUNC_0(VAR_10->bitmap, VAR_15, VAR_3);

  if (VAR_11)
   FUNC_1(VAR_10->bitmap, VAR_15,
       VAR_1);
  VAR_15 += VAR_1;

  if (VAR_12 && !(VAR_11))
   FUNC_1(VAR_10->bitmap, VAR_15,
       VAR_4);
  VAR_15 += VAR_4;

  if (VAR_13)
   FUNC_1(VAR_10->bitmap, VAR_15,
       VAR_2);
  VAR_15 += VAR_2;

  if (VAR_14 && !(VAR_13))
   FUNC_1(VAR_10->bitmap, VAR_15,
       VAR_5);
  VAR_15 += VAR_5;

  FUNC_4(&VAR_10->mutex);
 }
}
