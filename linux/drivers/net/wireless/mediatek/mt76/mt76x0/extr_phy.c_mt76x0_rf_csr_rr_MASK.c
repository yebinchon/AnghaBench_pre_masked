
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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,char*,int,int,int) ;
 int FUNC_6 (struct mt76x02_dev*,int ,int,int ,int) ;
 int FUNC_7 (struct mt76x02_dev*,int ) ;
 int FUNC_8 (struct mt76x02_dev*,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct mt76x02_dev *VAR_9, u32 VAR_10)
{
 int VAR_11 = -VAR_2;
 u32 VAR_12;
 u8 VAR_13, VAR_14;

 if (FUNC_11(VAR_3, &VAR_9->mt76.state))
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_10);
 VAR_14 = FUNC_3(VAR_10);

 if (FUNC_4(VAR_14 > 127) || FUNC_4(VAR_13 > 8))
  return -VAR_0;

 FUNC_9(&VAR_9->phy_mutex);

 if (!FUNC_6(VAR_9, VAR_4, VAR_6, 0, 100))
  goto out;

 FUNC_8(VAR_9, VAR_4,
  FUNC_1(VAR_7, VAR_13) |
  FUNC_1(VAR_8, VAR_14) |
  VAR_6);

 if (!FUNC_6(VAR_9, VAR_4, VAR_6, 0, 100))
  goto out;

 VAR_12 = FUNC_7(VAR_9, VAR_4);
 if (FUNC_0(VAR_8, VAR_12) == VAR_14 &&
     FUNC_0(VAR_7, VAR_12) == VAR_13)
  VAR_11 = FUNC_0(VAR_5, VAR_12);

out:
 FUNC_10(&VAR_9->phy_mutex);

 if (VAR_11 < 0)
  FUNC_5(VAR_9->mt76.dev, "Error: RF read %d:%d failed:%d!!\n",
   VAR_13, VAR_14, VAR_11);

 return VAR_11;
}
