
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int caw_sem; } ;
struct se_cmd {scalar_t__ scsi_status; int t_state_lock; struct se_device* se_dev; } ;
typedef int sense_reason_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static sense_reason_t FUNC_3(struct se_cmd *VAR_3, bool VAR_4,
          int *VAR_5)
{
 struct se_device *VAR_6 = VAR_3->se_dev;
 sense_reason_t VAR_7 = VAR_2;

 FUNC_0(&VAR_3->t_state_lock);
 if (VAR_4) {
  *VAR_5 = 1;

  if (VAR_3->scsi_status == VAR_0)
   VAR_7 = VAR_1;
 }
 FUNC_1(&VAR_3->t_state_lock);





 FUNC_2(&VAR_6->caw_sem);

 return VAR_7;
}
