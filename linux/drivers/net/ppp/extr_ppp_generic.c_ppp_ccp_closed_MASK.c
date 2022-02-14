
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppp {int flags; int * rc_state; struct compressor* rcomp; int rstate; int * xc_state; struct compressor* xcomp; int xstate; } ;
struct compressor {int owner; int (* decomp_free ) (void*) ;int (* comp_free ) (void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ppp*) ;
 int FUNC_2 (struct ppp*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static void
FUNC_5(struct ppp *VAR_2)
{
 void *VAR_3, *VAR_4;
 struct compressor *VAR_5, *VAR_6;

 FUNC_1(VAR_2);
 VAR_2->flags &= ~(VAR_0 | VAR_1);
 VAR_2->xstate = 0;
 VAR_5 = VAR_2->xcomp;
 VAR_3 = VAR_2->xc_state;
 VAR_2->xc_state = ((void*)0);
 VAR_2->rstate = 0;
 VAR_6 = VAR_2->rcomp;
 VAR_4 = VAR_2->rc_state;
 VAR_2->rc_state = ((void*)0);
 FUNC_2(VAR_2);

 if (VAR_3) {
  VAR_5->comp_free(VAR_3);
  FUNC_0(VAR_5->owner);
 }
 if (VAR_4) {
  VAR_6->decomp_free(VAR_4);
  FUNC_0(VAR_6->owner);
 }
}
