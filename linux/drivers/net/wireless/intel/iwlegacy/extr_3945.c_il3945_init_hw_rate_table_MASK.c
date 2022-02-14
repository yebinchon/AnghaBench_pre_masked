
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sta_supp_rates; } ;
struct il_priv {int band; TYPE_1__ _3945; int retry_rate; } ;
struct il3945_rate_scaling_info {int next_rate_idx; int try_cnt; int rate_n_flags; } ;
struct il3945_rate_scaling_cmd {int table_id; struct il3945_rate_scaling_info* table; int reserved; } ;
typedef int rate_cmd ;
struct TYPE_5__ {int table_rs_idx; int plcp; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 TYPE_2__* VAR_11 ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (struct il_priv*,int ,int,struct il3945_rate_scaling_cmd*) ;

int
FUNC_7(struct il_priv *VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16;
 struct il3945_rate_scaling_cmd VAR_17 = {
  .reserved = {0, 0, 0},
 };
 struct il3945_rate_scaling_info *VAR_18 = VAR_17.table;

 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_11); VAR_14++) {
  VAR_15 = VAR_11[VAR_14].table_rs_idx;

  VAR_18[VAR_15].rate_n_flags = FUNC_3(VAR_11[VAR_14].plcp);
  VAR_18[VAR_15].try_cnt = VAR_12->retry_rate;
  VAR_16 = FUNC_4(VAR_14);
  VAR_18[VAR_15].next_rate_idx = VAR_11[VAR_16].table_rs_idx;
 }

 switch (VAR_12->band) {
 case 128:
  FUNC_1("Select A mode rate scale\n");


  for (VAR_14 = VAR_6; VAR_14 <= VAR_4; VAR_14++)
   VAR_18[VAR_14].next_rate_idx =
       VAR_11[VAR_2].table_rs_idx;


  VAR_18[VAR_5].next_rate_idx = VAR_10;


  VAR_18[VAR_9].next_rate_idx =
      VAR_11[VAR_2].table_rs_idx;
  break;

 case 129:
  FUNC_1("Select B/G mode rate scale\n");



  if (!(VAR_12->_3945.sta_supp_rates & VAR_3) &&
      FUNC_5(VAR_12)) {

   VAR_15 = VAR_1;
   for (VAR_14 = VAR_9; VAR_14 <= VAR_7; VAR_14++)
    VAR_18[VAR_14].next_rate_idx =
        VAR_11[VAR_15].table_rs_idx;

   VAR_15 = VAR_4;

   VAR_18[VAR_15].next_rate_idx = VAR_8;
  }
  break;

 default:
  FUNC_2(1);
  break;
 }


 VAR_17.table_id = 0;
 VAR_13 = FUNC_6(VAR_12, VAR_0, sizeof(VAR_17), &VAR_17);
 if (VAR_13)
  return VAR_13;


 VAR_17.table_id = 1;
 return FUNC_6(VAR_12, VAR_0, sizeof(VAR_17), &VAR_17);
}
