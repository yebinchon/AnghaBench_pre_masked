
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct bq24190_dev_info {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bq24190_dev_info*,int ,int ,int ,scalar_t__*) ;
 int FUNC_1 (struct bq24190_dev_info*,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct bq24190_dev_info *VAR_4)
{
 int VAR_5, VAR_6 = 100;
 u8 VAR_7;
 if (FUNC_2(VAR_4->dev, "disable-reset"))
  return 0;


 VAR_5 = FUNC_1(VAR_4, VAR_0,
   VAR_1,
   VAR_2,
   0x1);
 if (VAR_5 < 0)
  return VAR_5;


 do {
  VAR_5 = FUNC_0(VAR_4, VAR_0,
    VAR_1,
    VAR_2,
    &VAR_7);
  if (VAR_5 < 0)
   return VAR_5;

  if (VAR_7 == 0)
   return 0;

  FUNC_3(100, 200);
 } while (--VAR_6);

 return -VAR_3;
}
