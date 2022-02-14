
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int wwn_t ;
typedef int u8 ;
struct bfa_s {int dummy; } ;
struct TYPE_3__ {int lp_tag; } ;
struct bfa_rport_s {int rport_tag; int lun_mask; TYPE_1__ rport_info; scalar_t__ rport_drv; } ;
struct bfa_lps_mod_s {int dummy; } ;
struct bfa_fcs_rport_s {int pwwn; } ;
struct TYPE_4__ {int lun_mask; int pwwn; } ;


 TYPE_2__* FUNC_0 (struct bfa_lps_mod_s*,int ) ;
 struct bfa_lps_mod_s* FUNC_1 (struct bfa_s*) ;
 int VAR_0 ;
 int FUNC_2 (struct bfa_s*,int ,int ,int ,int ) ;

void
FUNC_3(struct bfa_s *VAR_1, struct bfa_rport_s *VAR_2)
{
 struct bfa_lps_mod_s *VAR_3 = FUNC_1(VAR_1);
 wwn_t VAR_4, VAR_5;
 u8 VAR_6 = (u8)VAR_2->rport_info.lp_tag;

 VAR_5 = ((struct bfa_fcs_rport_s *)VAR_2->rport_drv)->pwwn;
 VAR_4 = (FUNC_0(VAR_3, VAR_2->rport_info.lp_tag))->pwwn;

 FUNC_0(VAR_3, VAR_2->rport_info.lp_tag)->lun_mask =
     VAR_2->lun_mask = VAR_0;
 FUNC_2(VAR_1, VAR_4, VAR_5, VAR_2->rport_tag, VAR_6);
}
