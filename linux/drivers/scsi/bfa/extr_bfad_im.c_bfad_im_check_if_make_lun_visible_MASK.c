
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct scsi_device {scalar_t__ lun; } ;
struct fc_rport {scalar_t__ dd_data; } ;
struct bfad_itnim_data_s {TYPE_2__* itnim; } ;
struct bfa_s {int dummy; } ;
struct TYPE_6__ {scalar_t__ lp_tag; } ;
struct bfa_rport_s {scalar_t__ rport_tag; TYPE_3__ rport_info; } ;
struct bfa_lun_mask_s {scalar_t__ state; scalar_t__ rp_tag; scalar_t__ lp_tag; int lun; } ;
struct TYPE_5__ {TYPE_1__* bfa_itnim; } ;
struct TYPE_4__ {struct bfa_rport_s* rport; struct bfa_s* bfa; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct bfa_lun_mask_s* FUNC_0 (struct bfa_s*) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct scsi_device *VAR_4,
      struct fc_rport *VAR_5)
{
 struct bfad_itnim_data_s *VAR_6 =
    (struct bfad_itnim_data_s *) VAR_5->dd_data;
 struct bfa_s *VAR_7 = VAR_6->itnim->bfa_itnim->bfa;
 struct bfa_rport_s *VAR_8 = VAR_6->itnim->bfa_itnim->rport;
 struct bfa_lun_mask_s *VAR_9 = FUNC_0(VAR_7);
 int VAR_10 = 0, VAR_11 = -VAR_2;

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  if (VAR_9[VAR_10].state == VAR_0 &&
      FUNC_1(&VAR_9[VAR_10].lun) == VAR_4->lun &&
      VAR_9[VAR_10].rp_tag == VAR_8->rport_tag &&
      VAR_9[VAR_10].lp_tag == (u8)VAR_8->rport_info.lp_tag) {
   VAR_11 = VAR_1;
   break;
  }
 }
 return VAR_11;
}
