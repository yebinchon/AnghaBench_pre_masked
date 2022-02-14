
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct si476x_rsq_status_report {int readfreq; } ;
struct si476x_rsq_status_args {int primary; int rsqack; int attune; int cancel; int stcack; } ;
struct si476x_radio {int core; TYPE_1__* ops; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int (* rsq_status ) (int ,struct si476x_rsq_status_args*,struct si476x_rsq_status_report*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,struct si476x_rsq_status_args*,struct si476x_rsq_status_report*) ;
 struct si476x_radio* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
         struct v4l2_frequency *VAR_4)
{
 int VAR_5;
 struct si476x_radio *VAR_6 = FUNC_4(VAR_2);

 if (VAR_4->tuner != 0 ||
     VAR_4->type != VAR_1)
  return -VAR_0;

 FUNC_0(VAR_6->core);

 if (VAR_6->ops->rsq_status) {
  struct si476x_rsq_status_report VAR_7;
  struct si476x_rsq_status_args VAR_8 = {
   .primary = 0,
   .rsqack = 0,
   .attune = 1,
   .cancel = 0,
   .stcack = 0,
  };

  VAR_5 = VAR_6->ops->rsq_status(VAR_6->core, &VAR_8, &VAR_7);
  if (!VAR_5)
   VAR_4->frequency = FUNC_2(VAR_6->core,
            VAR_7.readfreq);
 } else {
  VAR_5 = -VAR_0;
 }

 FUNC_1(VAR_6->core);

 return VAR_5;
}
