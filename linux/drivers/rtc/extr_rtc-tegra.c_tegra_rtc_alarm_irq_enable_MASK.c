
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_rtc_info {int lock; scalar_t__ base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct tegra_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, unsigned int VAR_3)
{
 struct tegra_rtc_info *VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_4(VAR_2);
 FUNC_2(&VAR_4->lock, VAR_5);


 VAR_6 = FUNC_1(VAR_4->base + VAR_1);
 if (VAR_3)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 FUNC_5(VAR_6, VAR_4->base + VAR_1);

 FUNC_3(&VAR_4->lock, VAR_5);

 return 0;
}
