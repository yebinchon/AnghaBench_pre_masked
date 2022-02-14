
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mt7601u_dev {int reg_atomic_mutex; int dev; int state; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct mt7601u_dev*,int ,int) ;
 int FUNC_4 (struct mt7601u_dev*,int ,int,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 int FUNC_8 (struct mt7601u_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_9(struct mt7601u_dev *VAR_7, u8 VAR_8, u8 VAR_9)
{
 if (FUNC_1(!FUNC_7(VAR_1, &VAR_7->state)) ||
     FUNC_7(VAR_0, &VAR_7->state))
  return;

 FUNC_5(&VAR_7->reg_atomic_mutex);

 if (!FUNC_4(VAR_7, VAR_2, VAR_3, 0, 1000)) {
  FUNC_2(VAR_7->dev, "Error: BBP write %02hhx failed!!\n", VAR_8);
  goto out;
 }

 FUNC_3(VAR_7, VAR_2,
     FUNC_0(VAR_6, VAR_9) |
     FUNC_0(VAR_4, VAR_8) |
     VAR_5 | VAR_3);
 FUNC_8(VAR_7, VAR_8, VAR_9);
out:
 FUNC_6(&VAR_7->reg_atomic_mutex);
}
