
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ cmd_pool_bits; struct CommandList* cmd_pool; } ;
struct CommandList {int * device; int refcount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (struct ctlr_info*,int,struct CommandList*) ;
 int FUNC_4 (int,scalar_t__) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static struct CommandList *FUNC_6(struct ctlr_info *VAR_2)
{
 struct CommandList *VAR_3;
 int VAR_4, VAR_5;
 int VAR_6 = 0;
 for (;;) {
  VAR_5 = FUNC_2(VAR_2->cmd_pool_bits,
     VAR_1,
     VAR_6);
  if (FUNC_5(VAR_5 >= VAR_1)) {
   VAR_6 = 0;
   continue;
  }
  VAR_3 = VAR_2->cmd_pool + VAR_5;
  VAR_4 = FUNC_0(&VAR_3->refcount);
  if (FUNC_5(VAR_4 > 1)) {
   FUNC_1(VAR_2, VAR_3);
   VAR_6 = (VAR_5 + 1) % VAR_1;
   continue;
  }
  FUNC_4(VAR_5 & (VAR_0 - 1),
   VAR_2->cmd_pool_bits + (VAR_5 / VAR_0));
  break;
 }
 FUNC_3(VAR_2, VAR_5, VAR_3);
 VAR_3->device = ((void*)0);
 return VAR_3;
}
