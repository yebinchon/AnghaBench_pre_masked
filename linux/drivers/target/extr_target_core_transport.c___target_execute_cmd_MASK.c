
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_cmd {int t_state_lock; int transport_state; scalar_t__ (* execute_cmd ) (struct se_cmd*) ;int scsi_status; } ;
typedef scalar_t__ sense_reason_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct se_cmd*) ;
 scalar_t__ FUNC_3 (struct se_cmd*) ;
 scalar_t__ FUNC_4 (struct se_cmd*) ;
 scalar_t__ FUNC_5 (struct se_cmd*) ;
 int FUNC_6 (struct se_cmd*,scalar_t__) ;

void FUNC_7(struct se_cmd *VAR_3, bool VAR_4)
{
 sense_reason_t VAR_5;

 if (!VAR_3->execute_cmd) {
  VAR_5 = VAR_2;
  goto err;
 }
 if (VAR_4) {






  VAR_5 = FUNC_5(VAR_3);
  if (VAR_5)
   goto err;

  VAR_5 = FUNC_3(VAR_3);
  if (VAR_5)
   goto err;

  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5) {
   VAR_3->scsi_status = VAR_1;
   goto err;
  }
 }

 VAR_5 = VAR_3->execute_cmd(VAR_3);
 if (!VAR_5)
  return;
err:
 FUNC_0(&VAR_3->t_state_lock);
 VAR_3->transport_state &= ~VAR_0;
 FUNC_1(&VAR_3->t_state_lock);

 FUNC_6(VAR_3, VAR_5);
}
