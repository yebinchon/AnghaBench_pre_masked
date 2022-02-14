
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel_id {int ssid; int sch_no; } ;
struct TYPE_3__ {int code; } ;
struct TYPE_4__ {int length; int code; } ;
struct chsc_ssqd_area {TYPE_1__ response; int ssid; int last_sch; int first_sch; TYPE_2__ request; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct chsc_ssqd_area*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct chsc_ssqd_area*,int ,int) ;

int FUNC_3(struct subchannel_id VAR_1, struct chsc_ssqd_area *VAR_2)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->request.length = 0x0010;
 VAR_2->request.code = 0x0024;
 VAR_2->first_sch = VAR_1.sch_no;
 VAR_2->last_sch = VAR_1.sch_no;
 VAR_2->ssid = VAR_1.ssid;

 if (FUNC_0(VAR_2))
  return -VAR_0;

 return FUNC_1(VAR_2->response.code);
}
