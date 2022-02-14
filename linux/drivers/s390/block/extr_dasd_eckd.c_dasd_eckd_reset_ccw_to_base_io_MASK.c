
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcw {scalar_t__ cmd_code; } ;
struct tccb {int * tca; } ;
struct dcw {int * cd; } ;
struct dasd_ccw_req {int cpmode; struct PFX_eckd_data* data; struct tcw* cpaddr; } ;
struct ccw1 {scalar_t__ cmd_code; } ;
struct TYPE_2__ {scalar_t__ hyper_pav; scalar_t__ verify_base; } ;
struct PFX_eckd_data {TYPE_1__ validity; } ;


 scalar_t__ VAR_0 ;
 struct tccb* FUNC_0 (struct tcw*) ;

void FUNC_1(struct dasd_ccw_req *VAR_1)
{
 struct ccw1 *VAR_2;
 struct PFX_eckd_data *VAR_3;
 struct tcw *VAR_4;
 struct tccb *VAR_5;
 struct dcw *VAR_6;

 if (VAR_1->cpmode == 1) {
  VAR_4 = VAR_1->cpaddr;
  VAR_5 = FUNC_0(VAR_4);
  VAR_6 = (struct dcw *)&VAR_5->tca[0];
  VAR_3 = (struct PFX_eckd_data *)&VAR_6->cd[0];
  VAR_3->validity.verify_base = 0;
  VAR_3->validity.hyper_pav = 0;
 } else {
  VAR_2 = VAR_1->cpaddr;
  VAR_3 = VAR_1->data;
  if (VAR_2->cmd_code == VAR_0) {
   VAR_3->validity.verify_base = 0;
   VAR_3->validity.hyper_pav = 0;
  }
 }
}
