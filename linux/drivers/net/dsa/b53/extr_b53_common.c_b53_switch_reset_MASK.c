
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct b53_device {scalar_t__ chip_id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct b53_device*) ;
 int FUNC_1 (struct b53_device*,int ) ;
 int FUNC_2 (struct b53_device*,int ,int ,int*) ;
 int FUNC_3 (struct b53_device*) ;
 int FUNC_4 (struct b53_device*,int ,int ,int) ;
 int FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (struct b53_device*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct b53_device *VAR_13)
{
 unsigned int VAR_14 = 1000;
 u8 VAR_15, VAR_16;

 FUNC_3(VAR_13);

 if (FUNC_6(VAR_13)) {
  FUNC_4(VAR_13, VAR_0, VAR_1, 0x83);
  FUNC_4(VAR_13, VAR_0, VAR_1, 0x00);
 }






 if (VAR_13->chip_id == VAR_4 ||
     VAR_13->chip_id == VAR_3) {
  FUNC_2(VAR_13, VAR_0, VAR_1, &VAR_16);
  VAR_16 |= VAR_12 | VAR_7 | VAR_6;
  FUNC_4(VAR_13, VAR_0, VAR_1, VAR_16);

  do {
   FUNC_2(VAR_13, VAR_0, VAR_1, &VAR_16);
   if (!(VAR_16 & VAR_12))
    break;

   FUNC_7(1000, 2000);
  } while (VAR_14-- > 0);

  if (VAR_14 == 0)
   return -VAR_8;
 }

 FUNC_2(VAR_13, VAR_0, VAR_2, &VAR_15);

 if (!(VAR_15 & VAR_10)) {
  VAR_15 &= ~VAR_11;
  VAR_15 |= VAR_10;

  FUNC_4(VAR_13, VAR_0, VAR_2, VAR_15);
  FUNC_2(VAR_13, VAR_0, VAR_2, &VAR_15);

  if (!(VAR_15 & VAR_10)) {
   FUNC_5(VAR_13->dev, "Failed to enable switch!\n");
   return -VAR_5;
  }
 }

 FUNC_0(VAR_13);

 return FUNC_1(VAR_13, VAR_9);
}
