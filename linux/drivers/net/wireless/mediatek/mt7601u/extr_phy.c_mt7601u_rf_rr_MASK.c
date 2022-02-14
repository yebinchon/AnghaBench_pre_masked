
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mt7601u_dev {int dev; int reg_atomic_mutex; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ) ;
 int FUNC_5 (struct mt7601u_dev*,int ,int) ;
 int FUNC_6 (struct mt7601u_dev*,int ,int,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct mt7601u_dev*,int,int,int) ;

__attribute__((used)) static int
FUNC_11(struct mt7601u_dev *VAR_9, u8 VAR_10, u8 VAR_11)
{
 int VAR_12 = -VAR_1;
 u32 VAR_13;

 if (FUNC_2(!FUNC_9(VAR_3, &VAR_9->state)) ||
     FUNC_2(VAR_11 > 63))
  return -VAR_0;
 if (FUNC_9(VAR_2, &VAR_9->state))
  return 0xff;

 FUNC_7(&VAR_9->reg_atomic_mutex);

 if (!FUNC_6(VAR_9, VAR_4, VAR_6, 0, 100))
  goto out;

 FUNC_5(VAR_9, VAR_4,
     FUNC_1(VAR_7, VAR_10) |
     FUNC_1(VAR_8, VAR_11) |
     VAR_6);

 if (!FUNC_6(VAR_9, VAR_4, VAR_6, 0, 100))
  goto out;

 VAR_13 = FUNC_4(VAR_9, VAR_4);
 if (FUNC_0(VAR_8, VAR_13) == VAR_11 &&
     FUNC_0(VAR_7, VAR_13) == VAR_10) {
  VAR_12 = FUNC_0(VAR_5, VAR_13);
  FUNC_10(VAR_9, VAR_10, VAR_11, VAR_12);
 }
out:
 FUNC_8(&VAR_9->reg_atomic_mutex);

 if (VAR_12 < 0)
  FUNC_3(VAR_9->dev, "Error: RF read %02hhx:%02hhx failed:%d!!\n",
   VAR_10, VAR_11, VAR_12);

 return VAR_12;
}
