
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int retry; unsigned int s_handle; int action; scalar_t__ tag; scalar_t__ boot_kset; } ;
struct beiscsi_hba {int boot_work; TYPE_1__ boot_struct; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct beiscsi_hba *VAR_2, unsigned int VAR_3)
{
 if (VAR_2->boot_struct.boot_kset)
  return;


 if (FUNC_1(VAR_1, &VAR_2->state))
  return;

 VAR_2->boot_struct.retry = 3;
 VAR_2->boot_struct.tag = 0;
 VAR_2->boot_struct.s_handle = VAR_3;
 VAR_2->boot_struct.action = VAR_0;
 FUNC_0(&VAR_2->boot_work);
}
