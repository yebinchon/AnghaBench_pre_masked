
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct b53_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct b53_device*,int) ;
 int FUNC_2 (struct b53_device*,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,scalar_t__,int,int,int,int) ;

int FUNC_5(struct b53_device *VAR_12, int VAR_13)
{
 u8 VAR_14 = FUNC_1(VAR_12, VAR_13);
 u16 VAR_15, VAR_16, VAR_17;

 if (VAR_14 == VAR_0)
  return -VAR_2;

 VAR_15 = FUNC_2(VAR_12, VAR_14, VAR_1, VAR_6);
 VAR_16 = FUNC_2(VAR_12, VAR_14, FUNC_0(VAR_4),
         VAR_11);
 VAR_17 = FUNC_2(VAR_12, VAR_14, FUNC_0(VAR_5),
         VAR_11);
 if (VAR_15 == 0 || VAR_15 == 0xffff) {
  FUNC_3(VAR_12->dev, "SerDes not initialized, check settings\n");
  return -VAR_3;
 }

 FUNC_4(VAR_12->dev,
   "SerDes lane %d, model: %d, rev %c%d (OUI: 0x%08x)\n",
   VAR_14, VAR_15 & VAR_7,
   (VAR_15 >> VAR_8) + 0x41,
   (VAR_15 >> VAR_10) & VAR_9,
   (u32)VAR_16 << 16 | VAR_17);

 return 0;
}
