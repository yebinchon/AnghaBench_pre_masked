
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bq24190_dev_info {int dev; int edev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct bq24190_dev_info *VAR_2, u8 VAR_3)
{
 bool VAR_4;
 int VAR_5;

 VAR_4 = !!(VAR_3 & VAR_0);
 VAR_5 = FUNC_1(VAR_2->edev, VAR_1, VAR_4);
 if (VAR_5 < 0)
  FUNC_0(VAR_2->dev, "Can't set extcon state to %d: %d\n",
   VAR_4, VAR_5);

 return VAR_5;
}
