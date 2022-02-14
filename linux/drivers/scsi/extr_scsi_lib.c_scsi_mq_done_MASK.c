
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {int state; int request; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_1)
{
 if (FUNC_4(FUNC_2(VAR_0, &VAR_1->state)))
  return;
 FUNC_3(VAR_1);







 if (FUNC_4(!FUNC_0(VAR_1->request)))
  FUNC_1(VAR_0, &VAR_1->state);
}
