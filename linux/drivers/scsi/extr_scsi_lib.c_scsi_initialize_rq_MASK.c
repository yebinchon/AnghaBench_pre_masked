
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_cmnd {scalar_t__ retries; int jiffies_at_alloc; int rcu; int req; } ;
struct request {int dummy; } ;


 struct scsi_cmnd* FUNC_0 (struct request*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct request *VAR_1)
{
 struct scsi_cmnd *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(&VAR_2->req);
 FUNC_1(&VAR_2->rcu);
 VAR_2->jiffies_at_alloc = VAR_0;
 VAR_2->retries = 0;
}
