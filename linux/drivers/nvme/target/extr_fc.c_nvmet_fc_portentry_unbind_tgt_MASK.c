
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_tgtport {struct nvmet_fc_port_entry* pe; } ;
struct nvmet_fc_port_entry {int * tgtport; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_2(struct nvmet_fc_tgtport *VAR_1)
{
 struct nvmet_fc_port_entry *VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0, VAR_3);
 VAR_2 = VAR_1->pe;
 if (VAR_2)
  VAR_2->tgtport = ((void*)0);
 VAR_1->pe = ((void*)0);
 FUNC_1(&VAR_0, VAR_3);
}
