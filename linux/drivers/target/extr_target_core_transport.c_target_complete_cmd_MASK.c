
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct se_cmd {int scsi_status; int se_cmd_flags; int transport_state; int work; int cpuid; int t_state_lock; int t_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct se_cmd*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_6(struct se_cmd *VAR_8, u8 VAR_9)
{
 int VAR_10;
 unsigned long VAR_11;

 if (FUNC_5(VAR_8))
  return;

 VAR_8->scsi_status = VAR_9;

 FUNC_3(&VAR_8->t_state_lock, VAR_11);
 switch (VAR_8->scsi_status) {
 case 128:
  if (VAR_8->se_cmd_flags & VAR_2)
   VAR_10 = 1;
  else
   VAR_10 = 0;
  break;
 default:
  VAR_10 = 1;
  break;
 }

 VAR_8->t_state = VAR_4;
 VAR_8->transport_state |= (VAR_1 | VAR_0);
 FUNC_4(&VAR_8->t_state_lock, VAR_11);

 FUNC_0(&VAR_8->work, VAR_10 ? VAR_6 :
    VAR_5);
 if (VAR_8->se_cmd_flags & VAR_3)
  FUNC_2(VAR_8->cpuid, VAR_7, &VAR_8->work);
 else
  FUNC_1(VAR_7, &VAR_8->work);
}
