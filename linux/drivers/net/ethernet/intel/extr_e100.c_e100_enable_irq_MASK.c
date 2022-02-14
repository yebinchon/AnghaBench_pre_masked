
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nic {int cmd_lock; TYPE_2__* csr; } ;
struct TYPE_3__ {int cmd_hi; } ;
struct TYPE_4__ {TYPE_1__ scb; } ;


 int FUNC_0 (struct nic*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct nic *VAR_1)
{
 unsigned long VAR_2;

 FUNC_2(&VAR_1->cmd_lock, VAR_2);
 FUNC_1(VAR_0, &VAR_1->csr->scb.cmd_hi);
 FUNC_0(VAR_1);
 FUNC_3(&VAR_1->cmd_lock, VAR_2);
}
