
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsa_tmf_struct {int reply_queue; } ;
struct ctlr_info {int * ioaccel2_blockFetchTable; int * ioaccel2_cmd_pool; } ;
struct CommandList {size_t cmdindex; int busaddr; } ;



__attribute__((used)) static void FUNC_0(struct ctlr_info *VAR_0,
      struct CommandList *VAR_1,
      int VAR_2)
{
 struct hpsa_tmf_struct *VAR_3 = (struct hpsa_tmf_struct *)
  &VAR_0->ioaccel2_cmd_pool[VAR_1->cmdindex];




 VAR_3->reply_queue = VAR_2;





 VAR_1->busaddr |= VAR_0->ioaccel2_blockFetchTable[0];
}
