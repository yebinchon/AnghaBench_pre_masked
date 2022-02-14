
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct eth_rss_update_ramrod_data {int indirection_table; int rss_engine_id; int rss_result_mask; int capabilities; scalar_t__ rss_key; int rss_mode; int echo; } ;
struct bnx2x_raw_obj {int cid; int state; int rdata_mapping; scalar_t__ rdata; } ;
struct bnx2x_rss_config_obj {int ind_table; int engine_id; struct bnx2x_raw_obj raw; } ;
struct bnx2x_config_rss_params {int ind_table; int rss_result_mask; scalar_t__ rss_key; int rss_flags; struct bnx2x_rss_config_obj* rss_obj; } ;
struct bnx2x {int dummy; } ;


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
 int FUNC_0 (int ,char*,...) ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_config_rss_params*) ;
 int FUNC_4 (struct bnx2x*,int ,int,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct eth_rss_update_ramrod_data*,int ,int) ;
 scalar_t__ FUNC_9 (struct bnx2x*) ;
 scalar_t__ FUNC_10 (int ,int *) ;

__attribute__((used)) static int FUNC_11(struct bnx2x *VAR_30,
      struct bnx2x_config_rss_params *VAR_31)
{
 struct bnx2x_rss_config_obj *VAR_32 = VAR_31->rss_obj;
 struct bnx2x_raw_obj *VAR_33 = &VAR_32->raw;
 struct eth_rss_update_ramrod_data *VAR_34 =
  (struct eth_rss_update_ramrod_data *)(VAR_33->rdata);
 u16 VAR_35 = 0;
 u8 VAR_36 = 0;
 int VAR_37;

 FUNC_8(VAR_34, 0, sizeof(*VAR_34));

 FUNC_0(VAR_0, "Configuring RSS\n");


 VAR_34->echo = FUNC_6((VAR_33->cid & VAR_13) |
     (VAR_33->state << VAR_14));


 if (FUNC_10(VAR_9, &VAR_31->rss_flags))
  VAR_36 = VAR_16;
 else if (FUNC_10(VAR_10, &VAR_31->rss_flags))
  VAR_36 = VAR_17;

 VAR_34->rss_mode = VAR_36;

 FUNC_0(VAR_0, "rss_mode=%d\n", VAR_36);


 if (FUNC_10(VAR_1, &VAR_31->rss_flags))
  VAR_35 |= VAR_18;

 if (FUNC_10(VAR_2, &VAR_31->rss_flags))
  VAR_35 |= VAR_19;

 if (FUNC_10(VAR_3, &VAR_31->rss_flags))
  VAR_35 |= VAR_20;

 if (FUNC_10(VAR_5, &VAR_31->rss_flags))
  VAR_35 |= VAR_22;

 if (FUNC_10(VAR_6, &VAR_31->rss_flags))
  VAR_35 |= VAR_23;

 if (FUNC_10(VAR_7, &VAR_31->rss_flags))
  VAR_35 |= VAR_24;

 if (FUNC_10(VAR_4, &VAR_31->rss_flags))
  VAR_35 |= VAR_21;

 if (FUNC_10(VAR_8, &VAR_31->rss_flags))
  VAR_35 |= VAR_25;

 if (FUNC_10(VAR_12, &VAR_31->rss_flags))
  VAR_35 |= VAR_26;


 if (FUNC_10(VAR_11, &VAR_31->rss_flags)) {
  u8 *VAR_38 = (u8 *)(VAR_34->rss_key) + sizeof(VAR_34->rss_key);
  const u8 *VAR_39 = (const u8 *)VAR_31->rss_key;
  int VAR_40;




  for (VAR_40 = 0; VAR_40 < sizeof(VAR_34->rss_key); VAR_40++)
   *--VAR_38 = *VAR_39++;

  VAR_35 |= VAR_27;
 }

 VAR_34->capabilities = FUNC_5(VAR_35);


 VAR_34->rss_result_mask = VAR_31->rss_result_mask;


 VAR_34->rss_engine_id = VAR_32->engine_id;

 FUNC_0(VAR_0, "rss_engine_id=%d\n", VAR_34->rss_engine_id);


 FUNC_7(VAR_34->indirection_table, VAR_31->ind_table,
    VAR_29);


 FUNC_7(VAR_32->ind_table, VAR_31->ind_table, VAR_29);


 if (FUNC_9(VAR_30))
  FUNC_3(VAR_30, VAR_31);
 VAR_37 = FUNC_4(VAR_30, VAR_28, VAR_33->cid,
      FUNC_1(VAR_33->rdata_mapping),
      FUNC_2(VAR_33->rdata_mapping),
      VAR_15);

 if (VAR_37 < 0)
  return VAR_37;

 return 1;
}
