
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_rtc_info {int rtc; int lock; scalar_t__ base; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct tegra_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_8, void *VAR_9)
{
 struct device *VAR_10 = VAR_9;
 struct tegra_rtc_info *VAR_11 = FUNC_0(VAR_10);
 unsigned long VAR_12 = 0, VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_1(VAR_11->base + VAR_7);
 if (VAR_14) {

  FUNC_5(VAR_10);

  FUNC_3(&VAR_11->lock, VAR_13);
  FUNC_6(0, VAR_11->base + VAR_6);
  FUNC_6(VAR_14, VAR_11->base + VAR_7);
  FUNC_4(&VAR_11->lock, VAR_13);
 }


 if (VAR_14 & VAR_4)
  VAR_12 |= VAR_2 | VAR_1;


 if (VAR_14 & VAR_5)
  VAR_12 |= VAR_2 | VAR_3;

 FUNC_2(VAR_11->rtc, 1, VAR_12);

 return VAR_0;
}
