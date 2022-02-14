
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_loopback {int outstanding_operations; int wq_completion; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static void FUNC_2(struct gb_loopback *VAR_0)
{
 FUNC_1(VAR_0->wq_completion,
     !FUNC_0(&VAR_0->outstanding_operations));
}
