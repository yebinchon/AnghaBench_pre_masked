
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct rv3028_data {TYPE_2__* rtc; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {int name; } ;
struct TYPE_8__ {TYPE_1__ attr; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_6__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_4__ VAR_15 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (TYPE_2__*,int,unsigned long) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_16, void *VAR_17)
{
 struct rv3028_data *VAR_18 = VAR_17;
 unsigned long VAR_19 = 0;
 u32 VAR_20 = 0, VAR_21 = 0;

 if (FUNC_1(VAR_18->regmap, VAR_9, &VAR_20) < 0 ||
    VAR_20 == 0) {
  return VAR_1;
 }

 if (VAR_20 & VAR_12)
  FUNC_0(&VAR_18->rtc->dev, "Voltage low, data loss detected.\n");

 if (VAR_20 & VAR_13) {
  VAR_20 |= VAR_13;
  VAR_21 |= VAR_7;
  VAR_19 |= VAR_3;
 }

 if (VAR_20 & VAR_10) {
  VAR_20 |= VAR_10;
  VAR_21 |= VAR_6;
  VAR_19 |= VAR_2;
 }

 if (VAR_20 & VAR_14) {
  VAR_20 |= VAR_14;
  VAR_21 |= VAR_8;
  VAR_19 |= VAR_4;
 }

 if (VAR_19) {
  FUNC_3(VAR_18->rtc, 1, VAR_19);
  FUNC_2(VAR_18->regmap, VAR_9, VAR_20, 0);
  FUNC_2(VAR_18->regmap, VAR_5, VAR_21, 0);
 }

 if (VAR_20 & VAR_11) {
  FUNC_4(&VAR_18->rtc->dev.kobj, ((void*)0),
        VAR_15);
  FUNC_0(&VAR_18->rtc->dev, "event detected");
 }

 return VAR_0;
}
