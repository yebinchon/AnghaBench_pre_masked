
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sd_format; } ;
struct isc_ctrls {int hist_id; int hist_stat; } ;
struct isc_device {TYPE_2__ config; struct isc_ctrls ctrls; struct regmap* regmap; } ;
struct TYPE_3__ {int cfa_baycfg; } ;


 int VAR_0 ;
 int VAR_1 ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct isc_device*) ;
 int FUNC_1 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct isc_device *VAR_14, bool VAR_15)
{
 struct regmap *VAR_16 = VAR_14->regmap;
 struct isc_ctrls *VAR_17 = &VAR_14->ctrls;

 if (VAR_15) {
  FUNC_1(VAR_16, VAR_4,
        VAR_6 |
        (VAR_14->config.sd_format->cfa_baycfg
     << VAR_5) |
     VAR_7);
  FUNC_1(VAR_16, VAR_8, VAR_10);
  FUNC_1(VAR_16, VAR_12, VAR_13);
  VAR_17->hist_id = VAR_6;
  FUNC_0(VAR_14);
  FUNC_1(VAR_16, VAR_2, VAR_3);

  VAR_17->hist_stat = VAR_1;
 } else {
  FUNC_1(VAR_16, VAR_11, VAR_13);
  FUNC_1(VAR_16, VAR_8, VAR_9);

  VAR_17->hist_stat = VAR_0;
 }
}
