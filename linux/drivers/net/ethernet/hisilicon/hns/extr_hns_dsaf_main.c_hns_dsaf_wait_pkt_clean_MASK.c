
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsaf_device {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct dsaf_device*,scalar_t__) ;
 int FUNC_2 (int,int) ;

int FUNC_3(struct dsaf_device *VAR_6, int VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10;

 if (VAR_7 >= VAR_0)
  return 0;

 VAR_10 = 0;
 while (VAR_10++ < VAR_5) {
  VAR_8 = FUNC_1(VAR_6, VAR_1 +
   (VAR_7 + VAR_3) * 0x40);
  VAR_9 = FUNC_1(VAR_6, VAR_2 +
   (VAR_7 + VAR_3) * 0x40);
  if (VAR_8 == VAR_9)
   break;

  FUNC_2(100, 200);
 }

 if (VAR_10 >= VAR_5) {
  FUNC_0(VAR_6->dev, "hns dsaf clean wait timeout(%u - %u).\n",
   VAR_8, VAR_9);
  return -VAR_4;
 }

 return 0;
}
