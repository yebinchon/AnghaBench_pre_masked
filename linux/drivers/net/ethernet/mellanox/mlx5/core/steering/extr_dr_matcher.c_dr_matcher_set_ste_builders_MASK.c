
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct mlx5dr_ste_build {int dummy; } ;
struct mlx5dr_matcher_rx_tx {scalar_t__ num_of_builders6; scalar_t__ num_of_builders4; struct mlx5dr_ste_build* ste_builder4; struct mlx5dr_ste_build* ste_builder6; TYPE_2__* nic_tbl; } ;
struct mlx5dr_match_misc3 {int dummy; } ;
struct TYPE_8__ {struct mlx5dr_match_misc3 misc3; int misc2; int inner; int misc; int outer; } ;
struct mlx5dr_matcher {int match_criteria; TYPE_4__ mask; TYPE_3__* tbl; } ;
struct mlx5dr_match_param {int misc2; struct mlx5dr_match_misc3 misc3; int inner; int misc; int outer; } ;
struct mlx5dr_domain_rx_tx {scalar_t__ ste_type; } ;
struct TYPE_5__ {int caps; } ;
struct mlx5dr_domain {scalar_t__ type; TYPE_1__ info; } ;
struct TYPE_7__ {struct mlx5dr_domain* dmn; } ;
struct TYPE_6__ {struct mlx5dr_domain_rx_tx* nic_dmn; } ;


 scalar_t__ FUNC_0 (struct mlx5dr_match_misc3,int) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct mlx5dr_match_misc3*) ;
 scalar_t__ FUNC_5 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct mlx5dr_match_misc3*) ;
 scalar_t__ FUNC_10 (struct mlx5dr_match_misc3*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (struct mlx5dr_domain*) ;
 int FUNC_21 (struct mlx5dr_domain*,char*) ;
 int FUNC_22 (struct mlx5dr_domain*,char*) ;
 scalar_t__ FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *) ;
 int FUNC_25 (struct mlx5dr_ste_build*,int) ;
 int FUNC_26 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_27 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_28 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_29 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_30 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_31 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_32 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_33 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_34 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_35 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_36 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int *,int,int) ;
 int FUNC_37 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_38 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_39 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_40 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_41 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_42 (struct mlx5dr_domain*,int,TYPE_4__*,int *) ;
 int FUNC_43 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_44 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,int,int) ;
 int FUNC_45 (struct mlx5dr_ste_build*,struct mlx5dr_match_param*,struct mlx5dr_domain*,int,int) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_46(struct mlx5dr_matcher *VAR_12,
           struct mlx5dr_matcher_rx_tx *VAR_13,
           bool VAR_14)
{
 struct mlx5dr_domain_rx_tx *VAR_15 = VAR_13->nic_tbl->nic_dmn;
 struct mlx5dr_domain *VAR_16 = VAR_12->tbl->dmn;
 struct mlx5dr_match_param VAR_17 = {};
 struct mlx5dr_match_misc3 *VAR_18;
 struct mlx5dr_ste_build *VAR_19;
 u8 *VAR_20;
 bool VAR_21, VAR_22;
 int VAR_23 = 0;
 int VAR_24, VAR_25;

 if (VAR_14) {
  VAR_19 = VAR_13->ste_builder6;
  VAR_20 = &VAR_13->num_of_builders6;
 } else {
  VAR_19 = VAR_13->ste_builder4;
  VAR_20 = &VAR_13->num_of_builders4;
 }

 VAR_22 = VAR_15->ste_type == VAR_10;


 if (VAR_12->match_criteria & VAR_5)
  VAR_17.outer = VAR_12->mask.outer;

 if (VAR_12->match_criteria & VAR_2)
  VAR_17.misc = VAR_12->mask.misc;

 if (VAR_12->match_criteria & VAR_1)
  VAR_17.inner = VAR_12->mask.inner;

 if (VAR_12->match_criteria & VAR_3)
  VAR_17.misc2 = VAR_12->mask.misc2;

 if (VAR_12->match_criteria & VAR_4)
  VAR_17.misc3 = VAR_12->mask.misc3;

 VAR_24 = FUNC_42(VAR_16, VAR_12->match_criteria,
      &VAR_12->mask, ((void*)0));
 if (VAR_24)
  return VAR_24;


 if (VAR_12->match_criteria & (VAR_5 |
           VAR_2 |
           VAR_3 |
           VAR_4)) {
  VAR_21 = 0;

  if (FUNC_19(&VAR_17.misc2))
   FUNC_38(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_14(&VAR_17.misc2))
   FUNC_43(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_15(&VAR_17.misc2))
   FUNC_44(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_12(&VAR_17.misc) &&
      (VAR_16->type == VAR_8 ||
       VAR_16->type == VAR_9)) {
   VAR_24 = FUNC_45(&VAR_19[VAR_23++], &VAR_17,
           VAR_16, VAR_21, VAR_22);
   if (VAR_24)
    return VAR_24;
  }

  if (FUNC_16(&VAR_17.outer) &&
      FUNC_6(&VAR_17.outer)) {
   VAR_24 = FUNC_28(&VAR_19[VAR_23++], &VAR_17,
             VAR_21, VAR_22);
   if (VAR_24)
    return VAR_24;
  }

  if (FUNC_16(&VAR_17.outer))
   FUNC_27(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_5(VAR_17.outer, VAR_17.misc, VAR_11))
   FUNC_26(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (VAR_14) {
   if (FUNC_7(&VAR_17.outer))
    FUNC_32(&VAR_19[VAR_23++], &VAR_17,
         VAR_21, VAR_22);

   if (FUNC_17(&VAR_17.outer))
    FUNC_33(&VAR_19[VAR_23++], &VAR_17,
         VAR_21, VAR_22);

   if (FUNC_1(VAR_17.outer, VAR_17.misc, VAR_11))
    FUNC_40(&VAR_19[VAR_23++], &VAR_17,
           VAR_21, VAR_22);
  } else {
   if (FUNC_13(&VAR_17.outer))
    FUNC_30(&VAR_19[VAR_23++], &VAR_17,
             VAR_21, VAR_22);

   if (FUNC_18(&VAR_17.outer))
    FUNC_31(&VAR_19[VAR_23++], &VAR_17,
          VAR_21, VAR_22);
  }

  if (FUNC_10(&VAR_17.misc3) &&
      FUNC_20(VAR_16))
   FUNC_37(&VAR_19[VAR_23++], &VAR_17,
        VAR_21, VAR_22);

  if (FUNC_0(VAR_17.misc3, VAR_11))
   FUNC_34(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_2(VAR_17.misc2, VAR_11))
   FUNC_41(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_3(VAR_17.misc2))
   FUNC_35(&VAR_19[VAR_23++], &VAR_17,
             VAR_21, VAR_22);

  VAR_18 = &VAR_17.misc3;
  if ((FUNC_4(VAR_18) &&
       FUNC_23(&VAR_16->info.caps)) ||
      (FUNC_9(&VAR_17.misc3) &&
       FUNC_24(&VAR_16->info.caps))) {
   VAR_24 = FUNC_36(&VAR_19[VAR_23++],
            &VAR_17, &VAR_16->info.caps,
            VAR_21, VAR_22);
   if (VAR_24)
    return VAR_24;
  }
  if (FUNC_11(&VAR_17.misc))
   FUNC_39(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);
 }


 if (VAR_12->match_criteria & (VAR_1 |
           VAR_2 |
           VAR_3 |
           VAR_4)) {
  VAR_21 = 1;

  if (FUNC_8(&VAR_17.misc))
   FUNC_29(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_16(&VAR_17.inner) &&
      FUNC_6(&VAR_17.inner)) {
   VAR_24 = FUNC_28(&VAR_19[VAR_23++],
             &VAR_17, VAR_21, VAR_22);
   if (VAR_24)
    return VAR_24;
  }

  if (FUNC_16(&VAR_17.inner))
   FUNC_27(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_5(VAR_17.inner, VAR_17.misc, VAR_21))
   FUNC_26(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (VAR_14) {
   if (FUNC_7(&VAR_17.inner))
    FUNC_32(&VAR_19[VAR_23++], &VAR_17,
         VAR_21, VAR_22);

   if (FUNC_17(&VAR_17.inner))
    FUNC_33(&VAR_19[VAR_23++], &VAR_17,
         VAR_21, VAR_22);

   if (FUNC_1(VAR_17.inner, VAR_17.misc, VAR_21))
    FUNC_40(&VAR_19[VAR_23++], &VAR_17,
           VAR_21, VAR_22);
  } else {
   if (FUNC_13(&VAR_17.inner))
    FUNC_30(&VAR_19[VAR_23++], &VAR_17,
             VAR_21, VAR_22);

   if (FUNC_18(&VAR_17.inner))
    FUNC_31(&VAR_19[VAR_23++], &VAR_17,
          VAR_21, VAR_22);
  }

  if (FUNC_0(VAR_17.misc3, VAR_21))
   FUNC_34(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_2(VAR_17.misc2, VAR_21))
   FUNC_41(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);

  if (FUNC_3(VAR_17.misc2))
   FUNC_35(&VAR_19[VAR_23++], &VAR_17, VAR_21, VAR_22);
 }

 if (VAR_12->match_criteria == VAR_0)
  FUNC_25(&VAR_19[VAR_23++], VAR_22);

 if (VAR_23 == 0) {
  FUNC_21(VAR_16, "Cannot generate any valid rules from mask\n");
  return -VAR_6;
 }


 for (VAR_25 = 0; VAR_25 < sizeof(struct mlx5dr_match_param); VAR_25++) {
  if (((u8 *)&VAR_17)[VAR_25] != 0) {
   FUNC_22(VAR_16, "Mask contains unsupported parameters\n");
   return -VAR_7;
  }
 }

 *VAR_20 = VAR_23;

 return 0;
}
