
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int t_state_lock; int scsi_sense_length; int se_cmd_flags; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 unsigned char* FUNC_3 (struct se_cmd*) ;

void FUNC_4(struct se_cmd *VAR_1, unsigned char *VAR_2)
{
 unsigned char *VAR_3;
 unsigned long VAR_4;

 FUNC_1(&VAR_1->t_state_lock, VAR_4);
 VAR_3 = FUNC_3(VAR_1);
 if (!VAR_3) {
  FUNC_2(&VAR_1->t_state_lock, VAR_4);
  return;
 }

 VAR_1->se_cmd_flags |= VAR_0;
 FUNC_0(VAR_3, VAR_2, VAR_1->scsi_sense_length);
 FUNC_2(&VAR_1->t_state_lock, VAR_4);
}
