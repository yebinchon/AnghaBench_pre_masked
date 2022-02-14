
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_queue {int csn; scalar_t__ connection_id; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct nvme_fc_queue *VAR_2)
{
 if (!FUNC_2(VAR_0, &VAR_2->flags))
  return;

 FUNC_1(VAR_1, &VAR_2->flags);






 VAR_2->connection_id = 0;
 FUNC_0(&VAR_2->csn, 0);
}
