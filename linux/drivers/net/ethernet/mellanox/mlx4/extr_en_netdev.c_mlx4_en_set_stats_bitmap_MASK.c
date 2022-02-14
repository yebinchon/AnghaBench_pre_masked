
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_en_stats_bitmap {int bitmap; int mutex; } ;
struct mlx4_dev {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mlx4_dev*,struct mlx4_en_stats_bitmap*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct mlx4_dev*) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

void FUNC_7(struct mlx4_dev *VAR_14,
         struct mlx4_en_stats_bitmap *VAR_15,
         u8 VAR_16, u8 VAR_17,
         u8 VAR_18, u8 VAR_19)
{
 int VAR_20 = 0;

 FUNC_6(&VAR_15->mutex);
 FUNC_2(VAR_15->bitmap, VAR_0);

 if (FUNC_5(VAR_14)) {
  FUNC_1(VAR_15->bitmap, VAR_20 +
      FUNC_0(VAR_10), 1);
  FUNC_1(VAR_15->bitmap, VAR_20 +
      FUNC_0(VAR_13), 1);
  FUNC_1(VAR_15->bitmap, VAR_20 +
      FUNC_0(VAR_8), 1);
  FUNC_1(VAR_15->bitmap, VAR_20 +
      FUNC_0(VAR_11), 1);
  FUNC_1(VAR_15->bitmap, VAR_20 +
      FUNC_0(VAR_9), 1);
  FUNC_1(VAR_15->bitmap, VAR_20 +
      FUNC_0(VAR_12), 1);
 } else {
  FUNC_1(VAR_15->bitmap, VAR_20, VAR_2);
 }
 VAR_20 += VAR_2;

 FUNC_1(VAR_15->bitmap, VAR_20, VAR_6);
 VAR_20 += VAR_6;

 if (FUNC_4(VAR_14))
  FUNC_1(VAR_15->bitmap, VAR_20,
      VAR_3);
 VAR_20 += VAR_3;

 FUNC_3(VAR_14, VAR_15,
     VAR_16, VAR_17,
     VAR_18, VAR_19);
 VAR_20 += VAR_1;

 if (!FUNC_5(VAR_14))
  FUNC_1(VAR_15->bitmap, VAR_20, VAR_5);
 VAR_20 += VAR_5;

 FUNC_1(VAR_15->bitmap, VAR_20, VAR_7);
 VAR_20 += VAR_7;

 if (!FUNC_5(VAR_14))
  FUNC_1(VAR_15->bitmap, VAR_20, VAR_4);
 VAR_20 += VAR_4;
}
