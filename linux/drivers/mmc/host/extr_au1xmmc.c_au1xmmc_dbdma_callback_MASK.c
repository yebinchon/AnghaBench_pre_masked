
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xmmc_host {int flags; int data_task; int mrq; } ;


 int VAR_0 ;
 int FUNC_0 (struct au1xmmc_host*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(int VAR_1, void *VAR_2)
{
 struct au1xmmc_host *VAR_3 = (struct au1xmmc_host *)VAR_2;


 if (!VAR_3->mrq)
  return;

 if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_3);

 FUNC_1(&VAR_3->data_task);
}
