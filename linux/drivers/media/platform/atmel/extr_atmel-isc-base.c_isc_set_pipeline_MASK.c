
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sd_format; } ;
struct isc_ctrls {scalar_t__ awb; size_t gamma_index; int brightness; int contrast; } ;
struct isc_device {TYPE_2__ config; int * pipeline; struct isc_ctrls ctrls; struct regmap* regmap; } ;
struct TYPE_3__ {int cfa_baycfg; } ;


 int FUNC_0 (unsigned int) ;
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
 unsigned int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int** VAR_17 ;
 int FUNC_1 (struct isc_device*) ;
 int FUNC_2 (struct isc_device*) ;
 int FUNC_3 (struct regmap*,int ,int const*,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct isc_device *VAR_18, u32 VAR_19)
{
 struct regmap *VAR_20 = VAR_18->regmap;
 struct isc_ctrls *VAR_21 = &VAR_18->ctrls;
 u32 VAR_22, VAR_23;
 const u32 *VAR_24;
 unsigned int VAR_25;


 for (VAR_25 = 0; VAR_25 < VAR_14; VAR_25++) {
  VAR_22 = VAR_19 & FUNC_0(VAR_25) ? 1 : 0;
  FUNC_4(VAR_18->pipeline[VAR_25], VAR_22);
 }

 if (!VAR_19)
  return;

 VAR_23 = VAR_18->config.sd_format->cfa_baycfg;

 if (VAR_21->awb == VAR_16)
  FUNC_1(VAR_18);

 FUNC_5(VAR_20, VAR_15, VAR_23);
 FUNC_2(VAR_18);

 FUNC_5(VAR_20, VAR_3, VAR_23 | VAR_4);

 VAR_24 = &VAR_17[VAR_21->gamma_index][0];
 FUNC_3(VAR_20, VAR_11, VAR_24, VAR_0);
 FUNC_3(VAR_20, VAR_12, VAR_24, VAR_0);
 FUNC_3(VAR_20, VAR_13, VAR_24, VAR_0);


 FUNC_5(VAR_20, VAR_10, 0x42 | (0x81 << 16));
 FUNC_5(VAR_20, VAR_9, 0x19 | (0x10 << 16));
 FUNC_5(VAR_20, VAR_6, 0xFDA | (0xFB6 << 16));
 FUNC_5(VAR_20, VAR_5, 0x70 | (0x80 << 16));
 FUNC_5(VAR_20, VAR_8, 0x70 | (0xFA2 << 16));
 FUNC_5(VAR_20, VAR_7, 0xFEE | (0x80 << 16));

 FUNC_5(VAR_20, VAR_1, VAR_21->brightness);
 FUNC_5(VAR_20, VAR_2, VAR_21->contrast);
}
