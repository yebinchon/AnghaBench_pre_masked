
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct brcmf_commonring {int (* cr_ring_bell ) (void*) ;int (* cr_update_rptr ) (void*) ;int (* cr_update_wptr ) (void*) ;int (* cr_write_rptr ) (void*) ;int (* cr_write_wptr ) (void*) ;void* cr_ctx; } ;



void FUNC_0(struct brcmf_commonring *VAR_0,
      int (*VAR_1)(void *VAR_2),
      int (*VAR_3)(void *VAR_4),
      int (*VAR_5)(void *VAR_6),
      int (*VAR_7)(void *VAR_8),
      int (*VAR_9)(void *VAR_10), void *VAR_11)
{
 VAR_0->cr_ring_bell = VAR_1;
 VAR_0->cr_update_rptr = VAR_3;
 VAR_0->cr_update_wptr = VAR_5;
 VAR_0->cr_write_rptr = VAR_7;
 VAR_0->cr_write_wptr = VAR_9;
 VAR_0->cr_ctx = VAR_11;
}
