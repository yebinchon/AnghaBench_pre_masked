
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun6i_rtc_dev {int lock; int rtc; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 struct sun6i_rtc_dev *VAR_8 = (struct sun6i_rtc_dev *) VAR_7;
 irqreturn_t VAR_9 = VAR_1;
 u32 VAR_10;

 FUNC_2(&VAR_8->lock);
 VAR_10 = FUNC_0(VAR_8->base + VAR_4);

 if (VAR_10 & VAR_5) {
  VAR_10 |= VAR_5;
  FUNC_4(VAR_10, VAR_8->base + VAR_4);

  FUNC_1(VAR_8->rtc, 1, VAR_2 | VAR_3);

  VAR_9 = VAR_0;
 }
 FUNC_3(&VAR_8->lock);

 return VAR_9;
}
