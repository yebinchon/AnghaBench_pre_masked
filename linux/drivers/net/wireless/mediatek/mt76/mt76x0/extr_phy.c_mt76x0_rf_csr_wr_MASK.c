
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int dev; int state; } ;
struct mt76x02_dev {TYPE_1__ mt76; int phy_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ,char*,int,int,int) ;
 int FUNC_5 (struct mt76x02_dev*,int ,int,int ,int) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static int
FUNC_10(struct mt76x02_dev *VAR_10, u32 VAR_11, u8 VAR_12)
{
 int VAR_13 = 0;
 u8 VAR_14, VAR_15;

 if (FUNC_9(VAR_3, &VAR_10->mt76.state))
  return -VAR_1;

 VAR_14 = FUNC_1(VAR_11);
 VAR_15 = FUNC_2(VAR_11);

 if (FUNC_3(VAR_15 > 127) || FUNC_3(VAR_14 > 8))
  return -VAR_0;

 FUNC_7(&VAR_10->phy_mutex);

 if (!FUNC_5(VAR_10, VAR_4, VAR_6, 0, 100)) {
  VAR_13 = -VAR_2;
  goto out;
 }

 FUNC_6(VAR_10, VAR_4,
  FUNC_0(VAR_5, VAR_12) |
  FUNC_0(VAR_7, VAR_14) |
  FUNC_0(VAR_8, VAR_15) |
  VAR_9 |
  VAR_6);

out:
 FUNC_8(&VAR_10->phy_mutex);

 if (VAR_13 < 0)
  FUNC_4(VAR_10->mt76.dev, "Error: RF write %d:%d failed:%d!!\n",
   VAR_14, VAR_15, VAR_13);

 return VAR_13;
}
