
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld_semaphore {int read_wait; int write_wait; } ;


 int FUNC_0 (struct ld_semaphore*) ;
 int FUNC_1 (struct ld_semaphore*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ld_semaphore *VAR_0)
{
 if (!FUNC_2(&VAR_0->write_wait))
  FUNC_1(VAR_0);
 else if (!FUNC_2(&VAR_0->read_wait))
  FUNC_0(VAR_0);
}
