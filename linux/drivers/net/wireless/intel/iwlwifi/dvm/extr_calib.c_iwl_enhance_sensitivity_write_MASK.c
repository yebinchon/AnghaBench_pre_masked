
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct iwl_sensitivity_data {int dummy; } ;
struct iwl_priv {int * enhance_sensitivity_tbl; int * sensitivity_tbl; TYPE_1__* lib; struct iwl_sensitivity_data sensitivity_data; } ;
struct iwl_host_cmd {int data; int flags; int len; int id; } ;
struct iwl_enhance_sensitivity_cmd {int * enhance_table; int control; } ;
typedef int cmd ;
struct TYPE_2__ {scalar_t__ hd_v2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 size_t VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 size_t VAR_34 ;
 int VAR_35 ;
 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_1 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_2 (struct iwl_priv*,struct iwl_sensitivity_data*,int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (struct iwl_enhance_sensitivity_cmd*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_38)
{
 struct iwl_enhance_sensitivity_cmd VAR_39;
 struct iwl_sensitivity_data *VAR_40 = ((void*)0);
 struct iwl_host_cmd VAR_41 = {
  .id = VAR_36,
  .len = sizeof(struct iwl_enhance_sensitivity_cmd), 
  .flags = VAR_0,
  .data = &VAR_39, 
 };

 VAR_40 = &(VAR_38->sensitivity_data);

 FUNC_5(&VAR_39, 0, sizeof(VAR_39));

 FUNC_2(VAR_38, VAR_40, &VAR_39.enhance_table[0]);

 if (VAR_38->lib->hd_v2) {
  VAR_39.enhance_table[VAR_22] =
   VAR_21;
  VAR_39.enhance_table[VAR_19] =
   VAR_18;
  VAR_39.enhance_table[VAR_16] =
   VAR_15;
  VAR_39.enhance_table[VAR_34] =
   VAR_33;
  VAR_39.enhance_table[VAR_28] =
   VAR_27;
  VAR_39.enhance_table[VAR_31] =
   VAR_30;
  VAR_39.enhance_table[VAR_25] =
   VAR_24;
  VAR_39.enhance_table[VAR_13] =
   VAR_12;
  VAR_39.enhance_table[VAR_7] =
   VAR_6;
  VAR_39.enhance_table[VAR_10] =
   VAR_9;
  VAR_39.enhance_table[VAR_4] =
   VAR_3;
 } else {
  VAR_39.enhance_table[VAR_22] =
   VAR_20;
  VAR_39.enhance_table[VAR_19] =
   VAR_17;
  VAR_39.enhance_table[VAR_16] =
   VAR_14;
  VAR_39.enhance_table[VAR_34] =
   VAR_32;
  VAR_39.enhance_table[VAR_28] =
   VAR_26;
  VAR_39.enhance_table[VAR_31] =
   VAR_29;
  VAR_39.enhance_table[VAR_25] =
   VAR_23;
  VAR_39.enhance_table[VAR_13] =
   VAR_11;
  VAR_39.enhance_table[VAR_7] =
   VAR_5;
  VAR_39.enhance_table[VAR_10] =
   VAR_8;
  VAR_39.enhance_table[VAR_4] =
   VAR_2;
 }


 VAR_39.control = VAR_37;


 if (!FUNC_3(&VAR_39.enhance_table[0], &(VAR_38->sensitivity_tbl[0]),
      sizeof(u16)*VAR_35) &&
     !FUNC_3(&VAR_39.enhance_table[VAR_22],
      &(VAR_38->enhance_sensitivity_tbl[0]),
      sizeof(u16)*VAR_1)) {
  FUNC_0(VAR_38, "No change in SENSITIVITY_CMD\n");
  return 0;
 }


 FUNC_4(&(VAR_38->sensitivity_tbl[0]), &(VAR_39.enhance_table[0]),
        sizeof(u16)*VAR_35);
 FUNC_4(&(VAR_38->enhance_sensitivity_tbl[0]),
        &(VAR_39.enhance_table[VAR_22]),
        sizeof(u16)*VAR_1);

 return FUNC_1(VAR_38, &VAR_41);
}
