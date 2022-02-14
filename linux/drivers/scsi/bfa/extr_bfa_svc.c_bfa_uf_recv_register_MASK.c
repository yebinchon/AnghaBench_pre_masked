
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_uf_mod_s {void* cbarg; int ufrecv; } ;
struct bfa_s {int dummy; } ;
typedef int bfa_cb_uf_recv_t ;


 struct bfa_uf_mod_s* FUNC_0 (struct bfa_s*) ;

void
FUNC_1(struct bfa_s *VAR_0, bfa_cb_uf_recv_t VAR_1, void *VAR_2)
{
 struct bfa_uf_mod_s *VAR_3 = FUNC_0(VAR_0);

 VAR_3->ufrecv = VAR_1;
 VAR_3->cbarg = VAR_2;
}
