
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvmet_fc_port_entry {int pe_list; TYPE_1__* tgtport; } ;
struct TYPE_2__ {int * pe; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_port_entry *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0, VAR_2);
 if (VAR_1->tgtport)
  VAR_1->tgtport->pe = ((void*)0);
 FUNC_0(&VAR_1->pe_list);
 FUNC_2(&VAR_0, VAR_2);
}
