
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct hpsa_scsi_dev_t {void* sas_address; } ;
struct ctlr_info {void* sas_address; } ;
struct bmic_sense_subsystem_info {int primary_world_wide_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ctlr_info*,unsigned char*,int ,struct bmic_sense_subsystem_info*,int) ;
 void* FUNC_2 (struct ctlr_info*,unsigned char*) ;
 scalar_t__ FUNC_3 (unsigned char*) ;
 int FUNC_4 (struct bmic_sense_subsystem_info*) ;
 struct bmic_sense_subsystem_info* FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct ctlr_info *VAR_1, unsigned char *VAR_2,
     struct hpsa_scsi_dev_t *VAR_3)
{
 int VAR_4;
 u64 VAR_5 = 0;

 if (FUNC_3(VAR_2)) {
  struct bmic_sense_subsystem_info *VAR_6;

  VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_0);
  if (!VAR_6)
   return;

  VAR_4 = FUNC_1(VAR_1,
     VAR_2, 0, VAR_6, sizeof(*VAR_6));
  if (VAR_4 == 0) {
   VAR_5 = FUNC_0(VAR_6->primary_world_wide_id);
   VAR_1->sas_address = VAR_5;
  }

  FUNC_4(VAR_6);
 } else
  VAR_5 = FUNC_2(VAR_1, VAR_2);

 VAR_3->sas_address = VAR_5;
}
