
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel_id {int cssid; int sch_no; int ssid; int m; } ;
struct TYPE_4__ {int code; } ;
struct chsc_brinfo_resume_token {int dummy; } ;
struct TYPE_3__ {int length; int code; } ;
struct chsc_pnso_area {int n; TYPE_2__ response; struct chsc_brinfo_resume_token resume_token; scalar_t__ oc; int cssid; int sch; int ssid; int m; TYPE_1__ request; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct chsc_pnso_area*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct chsc_pnso_area*,int ,int) ;

int FUNC_3(struct subchannel_id VAR_1,
  struct chsc_pnso_area *VAR_2,
  struct chsc_brinfo_resume_token VAR_3,
  int VAR_4)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->request.length = 0x0030;
 VAR_2->request.code = 0x003d;
 VAR_2->m = VAR_1.m;
 VAR_2->ssid = VAR_1.ssid;
 VAR_2->sch = VAR_1.sch_no;
 VAR_2->cssid = VAR_1.cssid;
 VAR_2->oc = 0;
 VAR_2->resume_token = VAR_3;
 VAR_2->n = (VAR_4 != 0);
 if (FUNC_0(VAR_2))
  return -VAR_0;
 return FUNC_1(VAR_2->response.code);
}
