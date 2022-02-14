
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ overflow; } ;
struct befs_btree_node {TYPE_1__ head; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct befs_btree_node *VAR_1)
{

 if (VAR_1->head.overflow == VAR_0)
  return 1;
 else
  return 0;
}
