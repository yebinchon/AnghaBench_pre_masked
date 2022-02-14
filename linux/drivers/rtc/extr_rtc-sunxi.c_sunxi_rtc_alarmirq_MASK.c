
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunxi_rtc_dev {int rtc; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_6, void *VAR_7)
{
 struct sunxi_rtc_dev *VAR_8 = (struct sunxi_rtc_dev *) VAR_7;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_8->base + VAR_4);

 if (VAR_9 & VAR_5) {
  VAR_9 |= VAR_5;
  FUNC_2(VAR_9, VAR_8->base + VAR_4);

  FUNC_1(VAR_8->rtc, 1, VAR_2 | VAR_3);

  return VAR_0;
 }

 return VAR_1;
}
