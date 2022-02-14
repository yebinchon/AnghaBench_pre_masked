
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint ;
struct wil6210_vif {int dummy; } ;
struct TYPE_3__ {int eventid; int (* handler ) (struct wil6210_vif*,int,void*,int) ;} ;


 size_t FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct wil6210_vif*,int,void*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_2(struct wil6210_vif *VAR_1, int VAR_2,
     void *VAR_3, int VAR_4)
{
 uint VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++) {
  if (VAR_0[VAR_5].eventid == VAR_2) {
   VAR_0[VAR_5].handler(VAR_1, VAR_2, VAR_3, VAR_4);
   return 1;
  }
 }

 return 0;
}
