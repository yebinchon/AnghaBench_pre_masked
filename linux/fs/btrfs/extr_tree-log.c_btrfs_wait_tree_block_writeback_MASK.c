
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct extent_buffer {scalar_t__ len; scalar_t__ start; TYPE_1__** pages; } ;
struct TYPE_2__ {int mapping; } ;


 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct extent_buffer *VAR_0)
{
 FUNC_0(VAR_0->pages[0]->mapping,
           VAR_0->start, VAR_0->start + VAR_0->len - 1);
}
