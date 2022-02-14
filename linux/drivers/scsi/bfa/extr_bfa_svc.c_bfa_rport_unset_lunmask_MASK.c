
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
struct bfa_s {int dummy; } ;
struct TYPE_3__ {int lp_tag; } ;
struct bfa_rport_s {int lun_mask; TYPE_1__ rport_info; scalar_t__ rport_drv; } ;
struct bfa_lps_mod_s {int dummy; } ;
struct bfa_fcs_rport_s {int pwwn; } ;
struct TYPE_4__ {int lun_mask; int pwwn; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct bfa_lps_mod_s*,int ) ;
 struct bfa_lps_mod_s* FUNC_1 (struct bfa_s*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bfa_s*,int ,int ,int ,int ) ;

void
FUNC_3(struct bfa_s *VAR_3, struct bfa_rport_s *VAR_4)
{
 struct bfa_lps_mod_s *VAR_5 = FUNC_1(VAR_3);
 wwn_t VAR_6, VAR_7;

 VAR_7 = ((struct bfa_fcs_rport_s *)VAR_4->rport_drv)->pwwn;
 VAR_6 = (FUNC_0(VAR_5, VAR_4->rport_info.lp_tag))->pwwn;

 FUNC_0(VAR_5, VAR_4->rport_info.lp_tag)->lun_mask =
    VAR_4->lun_mask = VAR_0;
 FUNC_2(VAR_3, VAR_6, VAR_7,
   VAR_2, VAR_1);
}
