
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {int lock; int mrq; } ;
struct mmc_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wbsd_host*,struct mmc_data*) ;
 struct mmc_data* FUNC_4 (struct wbsd_host*) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_0)
{
 struct wbsd_host *VAR_1 = (struct wbsd_host *)VAR_0;
 struct mmc_data *VAR_2;

 FUNC_1(&VAR_1->lock);

 FUNC_0(!VAR_1->mrq);
 if (!VAR_1->mrq)
  goto end;

 VAR_2 = FUNC_4(VAR_1);
 if (!VAR_2)
  goto end;

 FUNC_3(VAR_1, VAR_2);

end:
 FUNC_2(&VAR_1->lock);
}
