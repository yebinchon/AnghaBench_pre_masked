
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ fofs; scalar_t__ len; } ;
struct extent_tree {int largest_updated; TYPE_1__ largest; } ;
typedef scalar_t__ pgoff_t ;



__attribute__((used)) static void FUNC_0(struct extent_tree *VAR_0,
     pgoff_t VAR_1, unsigned int VAR_2)
{
 if (VAR_1 < VAR_0->largest.fofs + VAR_0->largest.len &&
   VAR_1 + VAR_2 > VAR_0->largest.fofs) {
  VAR_0->largest.len = 0;
  VAR_0->largest_updated = 1;
 }
}
