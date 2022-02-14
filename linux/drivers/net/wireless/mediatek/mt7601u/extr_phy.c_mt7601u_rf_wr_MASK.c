
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {int dev; int reg_atomic_mutex; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct mt7601u_dev*,int,int,int) ;

__attribute__((used)) static int
FUNC_9(struct mt7601u_dev *VAR_10, u8 VAR_11, u8 VAR_12, u8 VAR_13)
{
 int VAR_14 = 0;

 if (FUNC_1(!FUNC_7(VAR_3, &VAR_10->state)) ||
     FUNC_1(VAR_12 > 63))
  return -VAR_0;
 if (FUNC_7(VAR_2, &VAR_10->state))
  return 0;

 FUNC_5(&VAR_10->reg_atomic_mutex);

 if (!FUNC_4(VAR_10, VAR_4, VAR_6, 0, 100)) {
  VAR_14 = -VAR_1;
  goto out;
 }

 FUNC_3(VAR_10, VAR_4,
     FUNC_0(VAR_5, VAR_13) |
     FUNC_0(VAR_7, VAR_11) |
     FUNC_0(VAR_8, VAR_12) |
     VAR_9 |
     VAR_6);
 FUNC_8(VAR_10, VAR_11, VAR_12, VAR_13);
out:
 FUNC_6(&VAR_10->reg_atomic_mutex);

 if (VAR_14 < 0)
  FUNC_2(VAR_10->dev, "Error: RF write %02hhx:%02hhx failed:%d!!\n",
   VAR_11, VAR_12, VAR_14);

 return VAR_14;
}
