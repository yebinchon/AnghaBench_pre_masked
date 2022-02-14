
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct extent_tree {int largest_updated; TYPE_1__ largest; } ;
struct extent_node {TYPE_1__ ei; } ;



__attribute__((used)) static inline void FUNC_0(struct extent_tree *VAR_0,
      struct extent_node *VAR_1)
{
 if (VAR_1->ei.len > VAR_0->largest.len) {
  VAR_0->largest = VAR_1->ei;
  VAR_0->largest_updated = 1;
 }
}
