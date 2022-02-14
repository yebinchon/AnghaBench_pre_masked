
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct myrb_hba {int dummy; } ;
struct myrb_cmdblk {int * completion; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct myrb_hba *VAR_0, struct myrb_cmdblk *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->completion) {
  FUNC_0(VAR_1->completion);
  VAR_1->completion = ((void*)0);
 }
}
