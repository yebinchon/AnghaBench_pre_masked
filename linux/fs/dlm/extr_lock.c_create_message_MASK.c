
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int res_length; TYPE_1__* res_ls; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_message {int dummy; } ;
struct dlm_lkb {int lkb_lvbptr; } ;
struct TYPE_2__ {int ls_lvblen; } ;
 int FUNC_0 (TYPE_1__*,int,int,int,struct dlm_message**,struct dlm_mhandle**) ;

__attribute__((used)) static int FUNC_1(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1,
     int VAR_2, int VAR_3,
     struct dlm_message **VAR_4,
     struct dlm_mhandle **VAR_5)
{
 int VAR_6 = sizeof(struct dlm_message);

 switch (VAR_3) {
 case 130:
 case 132:
 case 131:
  VAR_6 += VAR_0->res_length;
  break;
 case 135:
 case 128:
 case 129:
 case 134:
 case 133:
  if (VAR_1 && VAR_1->lkb_lvbptr)
   VAR_6 += VAR_0->res_ls->ls_lvblen;
  break;
 }

 return FUNC_0(VAR_0->res_ls, VAR_6, VAR_2, VAR_3,
          VAR_4, VAR_5);
}
