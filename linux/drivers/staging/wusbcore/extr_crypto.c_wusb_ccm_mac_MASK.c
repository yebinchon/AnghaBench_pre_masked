
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct aes_ccm_nonce {int dummy; } ;
struct TYPE_12__ {int flags; scalar_t__ counter; struct aes_ccm_nonce ccm_nonce; } ;
struct TYPE_11__ {int flags; void* lm; struct aes_ccm_nonce ccm_nonce; } ;
struct TYPE_10__ {int mac_header; void* la; } ;
struct wusb_mac_scratch {TYPE_3__ ax; TYPE_2__ b0; TYPE_1__ b1; } ;
struct crypto_shash {int dummy; } ;
struct aes_ccm_label {int dummy; } ;
struct aes_ccm_block {int dummy; } ;
struct TYPE_13__ {struct crypto_shash* tfm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,struct crypto_shash*) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (TYPE_4__*,int *,int,int *) ;
 int FUNC_4 (TYPE_4__*,void const*,size_t,int *) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,int *,int) ;
 int FUNC_7 (void*,int *,int *,int) ;
 TYPE_4__* VAR_1 ;
 int FUNC_8 (int *,struct aes_ccm_label const*,int) ;

__attribute__((used)) static int FUNC_9(struct crypto_shash *VAR_2,
   struct wusb_mac_scratch *VAR_3,
   void *VAR_4,
   const struct aes_ccm_nonce *VAR_5,
   const struct aes_ccm_label *VAR_6, const void *VAR_7,
   size_t VAR_8)
{
 FUNC_1(VAR_1, VAR_2);
 u8 VAR_9[VAR_0];





 FUNC_0(sizeof(*VAR_6) != sizeof(VAR_3->b1) - sizeof(VAR_3->b1.la));
 FUNC_0(sizeof(VAR_3->b0) != sizeof(struct aes_ccm_block));
 FUNC_0(sizeof(VAR_3->b1) != sizeof(struct aes_ccm_block));
 FUNC_0(sizeof(VAR_3->ax) != sizeof(struct aes_ccm_block));


 VAR_3->b0.flags = 0x59;
 VAR_3->b0.ccm_nonce = *VAR_5;
 VAR_3->b0.lm = FUNC_2(0);
 VAR_3->b1.la = FUNC_2(VAR_8 + 14);
 FUNC_8(&VAR_3->b1.mac_header, VAR_6, sizeof(*VAR_6));

 VAR_1->tfm = VAR_2;
 FUNC_5(VAR_1);
 FUNC_6(VAR_1, (u8 *)&VAR_3->b0, sizeof(VAR_3->b0) +
            sizeof(VAR_3->b1));
 FUNC_4(VAR_1, VAR_7, VAR_8, VAR_9);






 VAR_3->ax.flags = 0x01;
 VAR_3->ax.ccm_nonce = *VAR_5;
 VAR_3->ax.counter = 0;


 FUNC_3(VAR_1, (u8 *)&VAR_3->ax, sizeof(VAR_3->ax),
       (u8 *)&VAR_3->ax);

 FUNC_7(VAR_4, (u8 *)&VAR_3->ax, VAR_9, 8);

 return 8;
}
