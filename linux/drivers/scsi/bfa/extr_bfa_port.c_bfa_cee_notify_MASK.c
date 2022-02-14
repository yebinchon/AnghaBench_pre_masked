
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_stats_cbarg; int (* reset_stats_cbfn ) (int ,void*) ;int get_stats_cbarg; int (* get_stats_cbfn ) (int ,void*) ;int get_attr_cbarg; int (* get_attr_cbfn ) (int ,void*) ;} ;
struct bfa_cee_s {TYPE_1__ cbfn; void* reset_stats_pending; void* reset_stats_status; void* get_stats_pending; void* get_stats_status; void* get_attr_pending; void* get_attr_status; } ;
typedef enum bfa_ioc_event_e { ____Placeholder_bfa_ioc_event_e } bfa_ioc_event_e ;


 void* VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct bfa_cee_s*,int) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,void*) ;

void
FUNC_4(void *VAR_3, enum bfa_ioc_event_e VAR_4)
{
 struct bfa_cee_s *VAR_5 = (struct bfa_cee_s *) VAR_3;

 FUNC_0(VAR_5, VAR_4);

 switch (VAR_4) {
 case 129:
 case 128:
  if (VAR_5->get_attr_pending == VAR_2) {
   VAR_5->get_attr_status = VAR_1;
   VAR_5->get_attr_pending = VAR_0;
   if (VAR_5->cbfn.get_attr_cbfn) {
    VAR_5->cbfn.get_attr_cbfn(
     VAR_5->cbfn.get_attr_cbarg,
     VAR_1);
   }
  }
  if (VAR_5->get_stats_pending == VAR_2) {
   VAR_5->get_stats_status = VAR_1;
   VAR_5->get_stats_pending = VAR_0;
   if (VAR_5->cbfn.get_stats_cbfn) {
    VAR_5->cbfn.get_stats_cbfn(
    VAR_5->cbfn.get_stats_cbarg,
    VAR_1);
   }
  }
  if (VAR_5->reset_stats_pending == VAR_2) {
   VAR_5->reset_stats_status = VAR_1;
   VAR_5->reset_stats_pending = VAR_0;
   if (VAR_5->cbfn.reset_stats_cbfn) {
    VAR_5->cbfn.reset_stats_cbfn(
    VAR_5->cbfn.reset_stats_cbarg,
    VAR_1);
   }
  }
  break;

 default:
  break;
 }
}
