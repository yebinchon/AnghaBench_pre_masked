
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pciefd_board {size_t can_count; int * can; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pciefd_board *VAR_0)
{
 while (VAR_0->can_count > 0)
  FUNC_0(VAR_0->can[--VAR_0->can_count]);
}
