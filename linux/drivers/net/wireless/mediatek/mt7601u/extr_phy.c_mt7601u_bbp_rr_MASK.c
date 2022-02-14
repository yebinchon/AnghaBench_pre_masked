
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
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ) ;
 int FUNC_5 (struct mt7601u_dev*,int ,int) ;
 int FUNC_6 (struct mt7601u_dev*,int ,int,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;
 int FUNC_10 (struct mt7601u_dev*,int,int) ;

__attribute__((used)) static int FUNC_11(struct mt7601u_dev *VAR_10, u8 VAR_11)
{
 u32 VAR_12;
 int VAR_13 = -VAR_1;

 if (FUNC_2(!FUNC_9(VAR_3, &VAR_10->state)))
  return -VAR_0;
 if (FUNC_9(VAR_2, &VAR_10->state))
  return 0xff;

 FUNC_7(&VAR_10->reg_atomic_mutex);

 if (!FUNC_6(VAR_10, VAR_4, VAR_5, 0, 1000))
  goto out;

 FUNC_5(VAR_10, VAR_4,
     FUNC_1(VAR_7, VAR_11) |
     VAR_8 | VAR_5 |
     VAR_6);

 if (!FUNC_6(VAR_10, VAR_4, VAR_5, 0, 1000))
  goto out;

 VAR_12 = FUNC_4(VAR_10, VAR_4);
 if (FUNC_0(VAR_7, VAR_12) == VAR_11) {
  VAR_13 = FUNC_0(VAR_9, VAR_12);
  FUNC_10(VAR_10, VAR_11, VAR_13);
 }
out:
 FUNC_8(&VAR_10->reg_atomic_mutex);

 if (VAR_13 < 0)
  FUNC_3(VAR_10->dev, "Error: BBP read %02hhx failed:%d!!\n",
   VAR_11, VAR_13);

 return VAR_13;
}
