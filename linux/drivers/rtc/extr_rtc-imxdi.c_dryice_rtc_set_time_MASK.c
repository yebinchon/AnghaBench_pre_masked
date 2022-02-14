
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int dummy; } ;
struct imxdi_dev {scalar_t__ ioaddr; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct imxdi_dev* FUNC_0 (struct device*) ;
 int FUNC_1 (struct imxdi_dev*,char*) ;
 int FUNC_2 (struct imxdi_dev*,int,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct imxdi_dev *VAR_11 = FUNC_0(VAR_9);
 u32 VAR_12, VAR_13;
 int VAR_14;

 VAR_12 = FUNC_3(VAR_11->ioaddr + VAR_0);
 VAR_13 = FUNC_3(VAR_11->ioaddr + VAR_4);

 if (!(VAR_12 & VAR_1) || (VAR_13 & VAR_5)) {
  if (VAR_12 & VAR_2) {

   FUNC_1(VAR_11, "battery");
   return -VAR_8;
  }
  if ((VAR_12 & VAR_3) || (VAR_13 & VAR_5)) {

   FUNC_1(VAR_11, "main");
   return -VAR_8;
  }
 }


 VAR_14 = FUNC_2(VAR_11, 0, VAR_6);
 if (VAR_14 != 0)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_11, FUNC_4(VAR_10), VAR_7);
 if (VAR_14 != 0)
  return VAR_14;

 return FUNC_2(VAR_11, FUNC_3(VAR_11->ioaddr + VAR_0) | VAR_1, VAR_0);
}
