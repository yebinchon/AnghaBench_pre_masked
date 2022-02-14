
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_lun {int dummy; } ;
struct TYPE_2__ {scalar_t__ Status; } ;
struct scsi_cmnd {TYPE_1__ SCp; int * host_scribble; } ;
struct bfad_tskim_s {int dummy; } ;
struct bfad_s {int bfa; } ;
struct bfad_itnim_s {int fcs_itnim; } ;
struct bfa_tskim_s {int dummy; } ;
struct bfa_itnim_s {int dummy; } ;
typedef int scsilun ;
typedef int bfa_status_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct bfad_s*,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct bfa_itnim_s* FUNC_1 (int *) ;
 int VAR_5 ;
 struct bfa_tskim_s* FUNC_2 (int *,struct bfad_tskim_s*) ;
 int FUNC_3 (struct bfa_tskim_s*) ;
 int FUNC_4 (struct bfa_tskim_s*,struct bfa_itnim_s*,struct scsi_lun,int ,int ) ;
 int FUNC_5 (struct scsi_lun*,int ,int) ;

__attribute__((used)) static bfa_status_t
FUNC_6(struct bfad_s *VAR_6, struct scsi_cmnd *VAR_7,
       struct bfad_itnim_s *VAR_8)
{
 struct bfa_tskim_s *VAR_9;
 struct bfa_itnim_s *VAR_10;
 bfa_status_t VAR_11 = VAR_2;
 struct scsi_lun VAR_12;

 VAR_9 = FUNC_2(&VAR_6->bfa, (struct bfad_tskim_s *) VAR_7);
 if (!VAR_9) {
  FUNC_0(VAR_4, VAR_6, VAR_5,
   "target reset, fail to allocate tskim\n");
  VAR_11 = VAR_1;
  goto out;
 }





 VAR_7->host_scribble = ((void*)0);
 VAR_7->SCp.Status = 0;
 VAR_10 = FUNC_1(&VAR_8->fcs_itnim);





 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_9);
  FUNC_0(VAR_4, VAR_6, VAR_5,
   "target reset, bfa_itnim is NULL\n");
  VAR_11 = VAR_1;
  goto out;
 }

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));
 FUNC_4(VAR_9, VAR_10, VAR_12,
       VAR_3, VAR_0);
out:
 return VAR_11;
}
