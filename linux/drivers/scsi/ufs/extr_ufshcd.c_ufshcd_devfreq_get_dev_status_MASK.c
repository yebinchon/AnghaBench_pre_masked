
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ufs_clk_scaling {int is_busy_started; scalar_t__ busy_start_t; scalar_t__ tot_busy_t; scalar_t__ window_start_t; } ;
struct ufs_hba {TYPE_1__* host; scalar_t__ outstanding_reqs; struct ufs_clk_scaling clk_scaling; } ;
struct device {int dummy; } ;
struct devfreq_dev_status {scalar_t__ busy_time; int total_time; } ;
struct TYPE_2__ {int host_lock; } ;


 int VAR_0 ;
 struct ufs_hba* FUNC_0 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (long) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct devfreq_dev_status*,int ,int) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (struct ufs_hba*) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_2,
  struct devfreq_dev_status *VAR_3)
{
 struct ufs_hba *VAR_4 = FUNC_0(VAR_2);
 struct ufs_clk_scaling *VAR_5 = &VAR_4->clk_scaling;
 unsigned long VAR_6;

 if (!FUNC_8(VAR_4))
  return -VAR_0;

 FUNC_5(VAR_3, 0, sizeof(*VAR_3));

 FUNC_6(VAR_4->host->host_lock, VAR_6);
 if (!VAR_5->window_start_t)
  goto start_window;

 if (VAR_5->is_busy_started)
  VAR_5->tot_busy_t += FUNC_4(FUNC_3(FUNC_2(),
     VAR_5->busy_start_t));

 VAR_3->total_time = FUNC_1((long)VAR_1 -
    (long)VAR_5->window_start_t);
 VAR_3->busy_time = VAR_5->tot_busy_t;
start_window:
 VAR_5->window_start_t = VAR_1;
 VAR_5->tot_busy_t = 0;

 if (VAR_4->outstanding_reqs) {
  VAR_5->busy_start_t = FUNC_2();
  VAR_5->is_busy_started = 1;
 } else {
  VAR_5->busy_start_t = 0;
  VAR_5->is_busy_started = 0;
 }
 FUNC_7(VAR_4->host->host_lock, VAR_6);
 return 0;
}
