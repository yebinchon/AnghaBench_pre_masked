
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int lock; int finish_tasklet; int mrq; } ;
struct mmc_data {int error; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mmc_data* FUNC_4 (struct wbsd_host*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct wbsd_host *VAR_2 = (struct wbsd_host *)VAR_1;
 struct mmc_data *VAR_3;

 FUNC_1(&VAR_2->lock);

 if (!VAR_2->mrq)
  goto end;

 VAR_3 = FUNC_4(VAR_2);
 if (!VAR_3)
  goto end;

 FUNC_0("Timeout\n");

 VAR_3->error = -VAR_0;

 FUNC_3(&VAR_2->finish_tasklet);

end:
 FUNC_2(&VAR_2->lock);
}
