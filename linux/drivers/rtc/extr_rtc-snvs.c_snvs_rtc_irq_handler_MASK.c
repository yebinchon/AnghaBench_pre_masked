
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snvs_rtc_data {scalar_t__ clk; scalar_t__ offset; int regmap; int rtc; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 struct snvs_rtc_data* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,scalar_t__,int*) ;
 int FUNC_4 (int ,scalar_t__,int) ;
 int FUNC_5 (int ,int,int) ;
 int FUNC_6 (struct device*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct device *VAR_8 = VAR_7;
 struct snvs_rtc_data *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10;
 u32 VAR_11 = 0;

 if (VAR_9->clk)
  FUNC_1(VAR_9->clk);

 FUNC_3(VAR_9->regmap, VAR_9->offset + VAR_4, &VAR_10);

 if (VAR_10 & VAR_5) {
  VAR_11 |= (VAR_2 | VAR_3);


  FUNC_6(VAR_8, 0);

  FUNC_5(VAR_9->rtc, 1, VAR_11);
 }


 FUNC_4(VAR_9->regmap, VAR_9->offset + VAR_4, VAR_10);

 if (VAR_9->clk)
  FUNC_0(VAR_9->clk);

 return VAR_11 ? VAR_0 : VAR_1;
}
