
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_stats_cbarg; int (* reset_stats_cbfn ) (int ,void*) ;int get_stats_cbarg; int (* get_stats_cbfn ) (int ,void*) ;int get_attr_cbarg; int (* get_attr_cbfn ) (int ,void*) ;} ;
struct bfa_cee {int get_attr_pending; int get_stats_pending; int reset_stats_pending; TYPE_1__ cbfn; void* reset_stats_status; void* get_stats_status; void* get_attr_status; } ;
typedef enum bfa_ioc_event { ____Placeholder_bfa_ioc_event } bfa_ioc_event ;




 void* VAR_0 ;
 int FUNC_0 (int ,void*) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,void*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, enum bfa_ioc_event VAR_2)
{
 struct bfa_cee *VAR_3;
 VAR_3 = (struct bfa_cee *) VAR_1;

 switch (VAR_2) {
 case 129:
 case 128:
  if (VAR_3->get_attr_pending) {
   VAR_3->get_attr_status = VAR_0;
   VAR_3->get_attr_pending = 0;
   if (VAR_3->cbfn.get_attr_cbfn) {
    VAR_3->cbfn.get_attr_cbfn(
     VAR_3->cbfn.get_attr_cbarg,
     VAR_0);
   }
  }
  if (VAR_3->get_stats_pending) {
   VAR_3->get_stats_status = VAR_0;
   VAR_3->get_stats_pending = 0;
   if (VAR_3->cbfn.get_stats_cbfn) {
    VAR_3->cbfn.get_stats_cbfn(
     VAR_3->cbfn.get_stats_cbarg,
     VAR_0);
   }
  }
  if (VAR_3->reset_stats_pending) {
   VAR_3->reset_stats_status = VAR_0;
   VAR_3->reset_stats_pending = 0;
   if (VAR_3->cbfn.reset_stats_cbfn) {
    VAR_3->cbfn.reset_stats_cbfn(
     VAR_3->cbfn.reset_stats_cbarg,
     VAR_0);
   }
  }
  break;

 default:
  break;
 }
}
