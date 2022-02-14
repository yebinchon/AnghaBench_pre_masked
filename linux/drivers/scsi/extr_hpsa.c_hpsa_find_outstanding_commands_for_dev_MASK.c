
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_scsi_dev_t {int scsi3addr; } ;
struct ctlr_info {int nr_cmds; int lock; struct CommandList* cmd_pool; } ;
struct CommandList {int refcount; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 scalar_t__ FUNC_2 (struct ctlr_info*,struct CommandList*,struct hpsa_scsi_dev_t*,int ) ;
 int FUNC_3 (struct CommandList*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct ctlr_info *VAR_0,
      struct hpsa_scsi_dev_t *VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_cmds; VAR_2++) {
  struct CommandList *VAR_4 = VAR_0->cmd_pool + VAR_2;
  int VAR_5 = FUNC_0(&VAR_4->refcount);

  if (VAR_5 > 1 && FUNC_2(VAR_0, VAR_4, VAR_1,
    VAR_1->scsi3addr)) {
   unsigned long VAR_6;

   FUNC_4(&VAR_0->lock, VAR_6);
   if (!FUNC_3(VAR_4))
    ++VAR_3;
   FUNC_5(&VAR_0->lock, VAR_6);
  }

  FUNC_1(VAR_0, VAR_4);
 }

 return VAR_3;
}
