
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_device {scalar_t__ lun; int sdev_bflags; scalar_t__ hostdata; } ;
struct fc_rport {scalar_t__ dd_data; } ;
struct bfad_itnim_data_s {TYPE_1__* itnim; } ;
struct bfa_s {int dummy; } ;
struct TYPE_4__ {struct bfa_s* bfa; } ;
struct TYPE_3__ {TYPE_2__* bfa_itnim; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bfa_s*) ;
 scalar_t__ FUNC_1 (struct scsi_device*,struct fc_rport*) ;
 scalar_t__ FUNC_2 (struct fc_rport*) ;
 int FUNC_3 (struct scsi_device*) ;
 struct fc_rport* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct scsi_device *VAR_5)
{
 struct fc_rport *VAR_6 = FUNC_4(FUNC_3(VAR_5));
 struct bfad_itnim_data_s *VAR_7;
 struct bfa_s *VAR_8;

 if (!VAR_6 || FUNC_2(VAR_6))
  return -VAR_4;

 VAR_7 = (struct bfad_itnim_data_s *) VAR_6->dd_data;
 VAR_8 = VAR_7->itnim->bfa_itnim->bfa;

 if (FUNC_0(VAR_8) == VAR_0) {




  if (VAR_5->lun == 0) {
   VAR_5->sdev_bflags |= VAR_2 |
          VAR_3;
   goto done;
  }





  if (FUNC_1(VAR_5, VAR_6) !=
       VAR_1)
   return -VAR_4;
 }
done:
 VAR_5->hostdata = VAR_6->dd_data;

 return 0;
}
