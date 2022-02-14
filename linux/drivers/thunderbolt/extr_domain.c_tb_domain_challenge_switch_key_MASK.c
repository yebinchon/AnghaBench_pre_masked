
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int parent; } ;
struct tb_switch {int key; int authorized; TYPE_1__ dev; } ;
struct tb {TYPE_2__* cm_ops; } ;
struct shash_desc {struct crypto_shash* tfm; } ;
struct crypto_shash {int dummy; } ;
typedef int hmac ;
typedef int challenge ;
struct TYPE_4__ {int (* approve_switch ) (struct tb*,struct tb_switch*) ;int (* challenge_switch_key ) (struct tb*,struct tb_switch*,int *,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int VAR_5 ;
 struct crypto_shash* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct crypto_shash*) ;
 scalar_t__ FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (struct shash_desc*,int *,int,int *) ;
 int FUNC_6 (struct crypto_shash*,int ,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct shash_desc*) ;
 struct shash_desc* FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (struct tb*,struct tb_switch*,int *,int *) ;
 int FUNC_13 (struct tb*,struct tb_switch*) ;
 struct tb_switch* FUNC_14 (int ) ;

int FUNC_15(struct tb *VAR_6, struct tb_switch *VAR_7)
{
 u8 VAR_8[VAR_5];
 u8 VAR_9[VAR_5];
 u8 VAR_10[VAR_5];
 struct tb_switch *VAR_11;
 struct crypto_shash *VAR_12;
 struct shash_desc *VAR_13;
 int VAR_14;

 if (!VAR_6->cm_ops->approve_switch || !VAR_6->cm_ops->challenge_switch_key)
  return -VAR_3;


 VAR_11 = FUNC_14(VAR_7->dev.parent);
 if (!VAR_11 || !VAR_11->authorized)
  return -VAR_0;

 FUNC_7(VAR_8, sizeof(VAR_8));
 VAR_14 = VAR_6->cm_ops->challenge_switch_key(VAR_6, VAR_7, VAR_8, VAR_9);
 if (VAR_14)
  return VAR_14;

 VAR_12 = FUNC_2("hmac(sha256)", 0, 0);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_14 = FUNC_6(VAR_12, VAR_7->key, VAR_5);
 if (VAR_14)
  goto err_free_tfm;

 VAR_13 = FUNC_9(sizeof(*VAR_13) + FUNC_4(VAR_12),
   VAR_4);
 if (!VAR_13) {
  VAR_14 = -VAR_2;
  goto err_free_tfm;
 }

 VAR_13->tfm = VAR_12;

 FUNC_11(VAR_10, 0, sizeof(VAR_10));
 VAR_14 = FUNC_5(VAR_13, VAR_8, sizeof(VAR_10), VAR_10);
 if (VAR_14)
  goto err_free_shash;


 if (FUNC_10(VAR_9, VAR_10, sizeof(VAR_10))) {
  VAR_14 = -VAR_1;
  goto err_free_shash;
 }

 FUNC_3(VAR_12);
 FUNC_8(VAR_13);

 return VAR_6->cm_ops->approve_switch(VAR_6, VAR_7);

err_free_shash:
 FUNC_8(VAR_13);
err_free_tfm:
 FUNC_3(VAR_12);

 return VAR_14;
}
