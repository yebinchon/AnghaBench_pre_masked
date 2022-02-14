
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct il_scale_tbl_info {int lq_type; int ant_type; } ;
struct TYPE_5__ {int valid_tx_ant; } ;
struct il_priv {TYPE_1__ hw_params; } ;
struct TYPE_8__ {int agg_time_limit; int agg_dis_start_th; int agg_frame_cnt_limit; } ;
struct TYPE_6__ {int mimo_delimiter; int dual_stream_ant_msk; int single_stream_ant_msk; } ;
struct il_link_quality_cmd {TYPE_4__ agg_params; TYPE_3__* rs_table; TYPE_2__ general_params; } ;
struct il_lq_sta {int band; struct il_link_quality_cmd lq; } ;
struct TYPE_7__ {void* rate_n_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct il_lq_sta*,int *,int) ;
 int FUNC_4 (struct il_lq_sta*,struct il_scale_tbl_info*,int,int) ;
 int FUNC_5 (int ,int ,struct il_scale_tbl_info*,int*) ;
 scalar_t__ FUNC_6 (int,int *,struct il_scale_tbl_info*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static void
FUNC_9(struct il_priv *VAR_7, struct il_lq_sta *VAR_8,
   u32 VAR_9)
{
 struct il_scale_tbl_info VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 int VAR_13 = 0;
 u8 VAR_14 = 0;
 u8 VAR_15 = 1;
 u8 VAR_16 = 0;
 struct il_link_quality_cmd *VAR_17 = &VAR_8->lq;


 FUNC_3(VAR_8, &VAR_9, VAR_11);


 FUNC_5(VAR_9, VAR_8->band, &VAR_10,
     &VAR_12);


 if (FUNC_7(VAR_10.lq_type)) {
  VAR_14 = 1;
  VAR_13 = VAR_1;
 } else {
  VAR_13 = VAR_0;
 }

 VAR_17->general_params.mimo_delimiter =
     FUNC_8(VAR_10.lq_type) ? 1 : 0;


 VAR_17->rs_table[VAR_11].rate_n_flags = FUNC_1(VAR_9);

 if (FUNC_2(VAR_10.ant_type) == 1) {
  VAR_17->general_params.single_stream_ant_msk =
      VAR_10.ant_type;
 } else if (FUNC_2(VAR_10.ant_type) == 2) {
  VAR_17->general_params.dual_stream_ant_msk = VAR_10.ant_type;
 }

 VAR_11++;
 VAR_13--;
 if (VAR_7)
  VAR_16 = VAR_7->hw_params.valid_tx_ant;


 while (VAR_11 < VAR_5) {



  while (VAR_13 > 0 && VAR_11 < VAR_5) {
   if (FUNC_7(VAR_10.lq_type)) {
    if (VAR_14 < VAR_6)
     VAR_14++;
    else if (VAR_7 &&
      FUNC_6(VAR_16,
          &VAR_9,
          &VAR_10))
     VAR_14 = 1;
   }


   FUNC_3(VAR_8, &VAR_9, VAR_11);


   VAR_17->rs_table[VAR_11].rate_n_flags =
       FUNC_1(VAR_9);
   VAR_13--;
   VAR_11++;
  }

  FUNC_5(VAR_9, VAR_8->band,
      &VAR_10, &VAR_12);




  if (FUNC_8(VAR_10.lq_type))
   VAR_17->general_params.mimo_delimiter = VAR_11;


  VAR_9 =
      FUNC_4(VAR_8, &VAR_10, VAR_12,
          VAR_15);


  if (FUNC_7(VAR_10.lq_type)) {
   if (VAR_14 < VAR_6)
    VAR_14++;
   else if (VAR_7 &&
     FUNC_6(VAR_16,
         &VAR_9, &VAR_10))
    VAR_14 = 1;

   VAR_13 = VAR_1;
  } else {
   VAR_13 = VAR_0;
  }



  VAR_15 = 0;


  FUNC_3(VAR_8, &VAR_9, VAR_11);


  VAR_17->rs_table[VAR_11].rate_n_flags = FUNC_1(VAR_9);

  VAR_11++;
  VAR_13--;
 }

 VAR_17->agg_params.agg_frame_cnt_limit = VAR_3;
 VAR_17->agg_params.agg_dis_start_th = VAR_2;

 VAR_17->agg_params.agg_time_limit =
     FUNC_0(VAR_4);
}
