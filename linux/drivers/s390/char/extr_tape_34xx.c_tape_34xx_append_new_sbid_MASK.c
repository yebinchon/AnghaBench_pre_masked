
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tape_34xx_block_id {int dummy; } ;
struct tape_34xx_sbid {int list; struct tape_34xx_block_id bid; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 struct tape_34xx_sbid* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,struct list_head*) ;

__attribute__((used)) static inline void
FUNC_2(struct tape_34xx_block_id VAR_1, struct list_head *VAR_2)
{
 struct tape_34xx_sbid * VAR_3;

 VAR_3 = FUNC_0(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->bid = VAR_1;
 FUNC_1(&VAR_3->list, VAR_2);
}
