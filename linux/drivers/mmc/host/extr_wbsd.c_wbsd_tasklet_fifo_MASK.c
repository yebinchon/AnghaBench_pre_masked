
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wbsd_host {scalar_t__ num_sg; int lock; int finish_tasklet; int mrq; } ;
struct mmc_data {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wbsd_host*) ;
 int FUNC_4 (struct wbsd_host*) ;
 struct mmc_data* FUNC_5 (struct wbsd_host*) ;
 int FUNC_6 (struct wbsd_host*,int ,int ) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_2)
{
 struct wbsd_host *VAR_3 = (struct wbsd_host *)VAR_2;
 struct mmc_data *VAR_4;

 FUNC_0(&VAR_3->lock);

 if (!VAR_3->mrq)
  goto end;

 VAR_4 = FUNC_5(VAR_3);
 if (!VAR_4)
  goto end;

 if (VAR_4->flags & VAR_0)
  FUNC_4(VAR_3);
 else
  FUNC_3(VAR_3);




 if (VAR_3->num_sg == 0) {
  FUNC_6(VAR_3, VAR_1, 0);
  FUNC_2(&VAR_3->finish_tasklet);
 }

end:
 FUNC_1(&VAR_3->lock);
}
