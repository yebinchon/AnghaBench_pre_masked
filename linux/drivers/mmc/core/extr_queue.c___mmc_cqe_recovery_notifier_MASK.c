
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_queue {int recovery_needed; int recovery_work; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct mmc_queue *VAR_0)
{
 if (!VAR_0->recovery_needed) {
  VAR_0->recovery_needed = 1;
  FUNC_0(&VAR_0->recovery_work);
 }
}
