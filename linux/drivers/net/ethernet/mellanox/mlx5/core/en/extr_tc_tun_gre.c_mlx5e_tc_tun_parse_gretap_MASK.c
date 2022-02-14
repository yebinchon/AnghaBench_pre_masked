
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_priv {int dummy; } ;
struct mlx5_flow_spec {int match_value; int match_criteria; } ;
struct flow_rule {int dummy; } ;
struct flow_match_enc_keyid {TYPE_2__* key; TYPE_1__* mask; } ;
struct flow_cls_offload {int dummy; } ;
struct TYPE_6__ {int key; } ;
struct TYPE_5__ {int keyid; } ;
struct TYPE_4__ {int keyid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int FUNC_2 (int ,void*,int ) ;
 int FUNC_3 (int ) ;
 struct flow_rule* FUNC_4 (struct flow_cls_offload*) ;
 int FUNC_5 (struct flow_rule*,struct flow_match_enc_keyid*) ;
 scalar_t__ FUNC_6 (struct flow_rule*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_7(struct mlx5e_priv *VAR_10,
         struct mlx5_flow_spec *VAR_11,
         struct flow_cls_offload *VAR_12,
         void *VAR_13,
         void *VAR_14)
{
 void *VAR_15 = FUNC_0(VAR_3, VAR_11->match_criteria, VAR_9);
 void *VAR_16 = FUNC_0(VAR_3, VAR_11->match_value, VAR_9);
 struct flow_rule *VAR_17 = FUNC_4(VAR_12);

 FUNC_2(VAR_4, VAR_13, VAR_8);
 FUNC_1(VAR_4, VAR_14, VAR_8, VAR_2);


 FUNC_2(VAR_5, VAR_15, VAR_7);
 FUNC_1(VAR_5, VAR_16, VAR_7, VAR_0);


 if (FUNC_6(VAR_17, VAR_1)) {
  struct flow_match_enc_keyid VAR_18;

  FUNC_5(VAR_17, &VAR_18);
  FUNC_1(VAR_5, VAR_15,
    VAR_6.key, FUNC_3(VAR_18.mask->keyid));
  FUNC_1(VAR_5, VAR_16,
    VAR_6.key, FUNC_3(VAR_18.key->keyid));
 }

 return 0;
}
