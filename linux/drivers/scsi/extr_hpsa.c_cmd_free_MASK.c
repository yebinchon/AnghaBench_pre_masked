
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctlr_info {scalar_t__ cmd_pool_bits; struct CommandList* cmd_pool; } ;
struct CommandList {int refcount; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ctlr_info *VAR_1, struct CommandList *VAR_2)
{
 if (FUNC_0(&VAR_2->refcount)) {
  int VAR_3;

  VAR_3 = VAR_2 - VAR_1->cmd_pool;
  FUNC_1(VAR_3 & (VAR_0 - 1),
     VAR_1->cmd_pool_bits + (VAR_3 / VAR_0));
 }
}
