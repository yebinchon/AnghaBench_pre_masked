
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lo; void* hi; } ;
struct brcmf_wsec_key_le {int ea; int data; void* iv_initialized; TYPE_1__ rxiv; void* flags; void* algo; void* len; void* index; } ;
struct TYPE_4__ {int lo; int hi; } ;
struct brcmf_wsec_key {int ea; int data; int iv_initialized; TYPE_2__ rxiv; int flags; int algo; int len; int index; } ;


 int FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct brcmf_wsec_key *VAR_0,
     struct brcmf_wsec_key_le *VAR_1)
{
 VAR_1->index = FUNC_1(VAR_0->index);
 VAR_1->len = FUNC_1(VAR_0->len);
 VAR_1->algo = FUNC_1(VAR_0->algo);
 VAR_1->flags = FUNC_1(VAR_0->flags);
 VAR_1->rxiv.hi = FUNC_1(VAR_0->rxiv.hi);
 VAR_1->rxiv.lo = FUNC_0(VAR_0->rxiv.lo);
 VAR_1->iv_initialized = FUNC_1(VAR_0->iv_initialized);
 FUNC_2(VAR_1->data, VAR_0->data, sizeof(VAR_0->data));
 FUNC_2(VAR_1->ea, VAR_0->ea, sizeof(VAR_0->ea));
}
