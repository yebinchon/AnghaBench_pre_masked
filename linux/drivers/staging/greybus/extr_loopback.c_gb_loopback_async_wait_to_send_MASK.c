
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_loopback {scalar_t__ outstanding_operations_max; int outstanding_operations; int wq_completion; scalar_t__ async; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct gb_loopback *VAR_0)
{
 if (!(VAR_0->async && VAR_0->outstanding_operations_max))
  return;
 FUNC_2(VAR_0->wq_completion,
     (FUNC_0(&VAR_0->outstanding_operations) <
      VAR_0->outstanding_operations_max) ||
      FUNC_1());
}
