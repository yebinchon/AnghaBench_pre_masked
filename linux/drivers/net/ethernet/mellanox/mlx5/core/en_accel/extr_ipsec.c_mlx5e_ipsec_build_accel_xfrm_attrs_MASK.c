
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ mode; } ;
struct TYPE_9__ {int flags; } ;
struct xfrm_state {TYPE_5__ props; TYPE_4__ xso; TYPE_2__* aead; struct crypto_aead* data; } ;
struct TYPE_8__ {scalar_t__ overlap; int esn; scalar_t__ trigger; } ;
struct mlx5e_ipsec_sa_entry {int handle; TYPE_3__ esn_state; struct xfrm_state* x; } ;
struct aes_gcm_keymat {unsigned int key_len; int icv_len; int salt; int seq_iv; int * aes_key; } ;
struct TYPE_6__ {struct aes_gcm_keymat aes_gcm; } ;
struct mlx5_accel_esp_xfrm_attrs {int flags; int action; int keymat_type; int sa_handle; int esn; TYPE_1__ keymat; } ;
struct crypto_aead {int dummy; } ;
struct aead_geniv_ctx {int salt; } ;
struct TYPE_7__ {int alg_key_len; int alg_icv_len; int * alg_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct aead_geniv_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct mlx5_accel_esp_xfrm_attrs*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_ipsec_sa_entry *VAR_9,
       struct mlx5_accel_esp_xfrm_attrs *VAR_10)
{
 struct xfrm_state *VAR_11 = VAR_9->x;
 struct aes_gcm_keymat *VAR_12 = &VAR_10->keymat.aes_gcm;
 struct aead_geniv_ctx *VAR_13;
 struct crypto_aead *VAR_14;
 unsigned int VAR_15, VAR_16;
 int VAR_17;

 FUNC_3(VAR_10, 0, sizeof(*VAR_10));


 VAR_15 = (VAR_11->aead->alg_key_len + 7) / 8;
 VAR_16 = VAR_15 - 4;

 FUNC_2(VAR_12->aes_key, VAR_11->aead->alg_key, VAR_16);
 VAR_12->key_len = VAR_16 * 8;


 VAR_14 = VAR_11->data;
 VAR_13 = FUNC_0(VAR_14);
 VAR_17 = FUNC_1(VAR_14);
 FUNC_2(&VAR_12->seq_iv, &VAR_13->salt, VAR_17);
 FUNC_2(&VAR_12->salt, VAR_11->aead->alg_key + VAR_16,
        sizeof(VAR_12->salt));


 VAR_12->icv_len = VAR_11->aead->alg_icv_len;


 if (VAR_9->esn_state.trigger) {
  VAR_10->flags |= VAR_3;
  VAR_10->esn = VAR_9->esn_state.esn;
  if (VAR_9->esn_state.overlap)
   VAR_10->flags |= VAR_2;
 }


 VAR_10->sa_handle = VAR_9->handle;


 VAR_10->keymat_type = VAR_6;


 VAR_10->action = (!(VAR_11->xso.flags & VAR_8)) ?
   VAR_1 :
   VAR_0;

 VAR_10->flags |= (VAR_11->props.mode == VAR_7) ?
   VAR_4 :
   VAR_5;
}
