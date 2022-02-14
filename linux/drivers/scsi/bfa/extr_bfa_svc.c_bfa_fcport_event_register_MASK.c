
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int dummy; } ;
struct bfa_fcport_s {void (* event_cbfn ) (void*,int) ;void* event_cbarg; } ;


 struct bfa_fcport_s* FUNC_0 (struct bfa_s*) ;

void
FUNC_1(struct bfa_s *VAR_0,
    void (*VAR_1) (void *VAR_2,
    enum bfa_port_linkstate VAR_3),
    void *VAR_4)
{
 struct bfa_fcport_s *VAR_5 = FUNC_0(VAR_0);

 VAR_5->event_cbfn = VAR_1;
 VAR_5->event_cbarg = VAR_4;
}
