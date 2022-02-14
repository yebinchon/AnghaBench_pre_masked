
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct max17042_config_data {int kempty0; int empty_tempco; int tcompc0; int rcomp0; int fctc; int temp_lim; int temp_nom; int vempty; int dpacc; int dqacc; int lavg_empty; int socempty; int fullcapnom; int fullcap; int masksoc; int misc_cfg; int relax_cfg; int filter_cfg; int learn_cfg; int at_rate; int ichgt_term; int design_cap; int shdntimer; int config; int soc_alrt_thresh; int talrt_thresh; int valrt_thresh; int coff; int cgain; int toff; int tgain; } ;
struct max17042_chip {scalar_t__ chip_type; TYPE_1__* pdata; struct regmap* regmap; } ;
struct TYPE_2__ {struct max17042_config_data* config_data; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (struct regmap*,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct max17042_chip *VAR_33)
{
 struct regmap *VAR_34 = VAR_33->regmap;
 struct max17042_config_data *VAR_35 = VAR_33->pdata->config_data;

 FUNC_0(VAR_34, VAR_22, VAR_35->tgain);
 FUNC_0(VAR_34, VAR_32, VAR_35->toff);
 FUNC_0(VAR_34, VAR_1, VAR_35->cgain);
 FUNC_0(VAR_34, VAR_2, VAR_35->coff);

 FUNC_0(VAR_34, VAR_26, VAR_35->valrt_thresh);
 FUNC_0(VAR_34, VAR_21, VAR_35->talrt_thresh);
 FUNC_0(VAR_34, VAR_18,
      VAR_35->soc_alrt_thresh);
 FUNC_0(VAR_34, VAR_3, VAR_35->config);
 FUNC_0(VAR_34, VAR_19, VAR_35->shdntimer);

 FUNC_0(VAR_34, VAR_4, VAR_35->design_cap);
 FUNC_0(VAR_34, VAR_10, VAR_35->ichgt_term);

 FUNC_0(VAR_34, VAR_0, VAR_35->at_rate);
 FUNC_0(VAR_34, VAR_13, VAR_35->learn_cfg);
 FUNC_0(VAR_34, VAR_7, VAR_35->filter_cfg);
 FUNC_0(VAR_34, VAR_17, VAR_35->relax_cfg);
 FUNC_0(VAR_34, VAR_15, VAR_35->misc_cfg);
 FUNC_0(VAR_34, VAR_14, VAR_35->masksoc);

 FUNC_0(VAR_34, VAR_8, VAR_35->fullcap);
 FUNC_0(VAR_34, VAR_9, VAR_35->fullcapnom);
 if (VAR_33->chip_type == VAR_31)
  FUNC_0(VAR_34, VAR_20,
      VAR_35->socempty);
 FUNC_0(VAR_34, VAR_12, VAR_35->lavg_empty);
 FUNC_0(VAR_34, VAR_29, VAR_35->dqacc);
 FUNC_0(VAR_34, VAR_28, VAR_35->dpacc);

 if (VAR_33->chip_type == VAR_31)
  FUNC_0(VAR_34, VAR_27, VAR_35->vempty);
 else
  FUNC_0(VAR_34, VAR_30, VAR_35->vempty);
 FUNC_0(VAR_34, VAR_25, VAR_35->temp_nom);
 FUNC_0(VAR_34, VAR_24, VAR_35->temp_lim);
 FUNC_0(VAR_34, VAR_6, VAR_35->fctc);
 FUNC_0(VAR_34, VAR_16, VAR_35->rcomp0);
 FUNC_0(VAR_34, VAR_23, VAR_35->tcompc0);
 if (VAR_33->chip_type) {
  FUNC_0(VAR_34, VAR_5,
      VAR_35->empty_tempco);
  FUNC_0(VAR_34, VAR_11,
      VAR_35->kempty0);
 }
}
