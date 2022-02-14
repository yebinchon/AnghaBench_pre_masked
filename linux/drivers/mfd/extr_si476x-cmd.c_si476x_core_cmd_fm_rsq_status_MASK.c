
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si476x_rsq_status_report {int dummy; } ;
struct si476x_rsq_status_args {int dummy; } ;
struct si476x_core {int revision; } ;
struct TYPE_2__ {int (* fm_rsq_status ) (struct si476x_core*,struct si476x_rsq_status_args*,struct si476x_rsq_status_report*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct si476x_core*,struct si476x_rsq_status_args*,struct si476x_rsq_status_report*) ;

int FUNC_2(struct si476x_core *VAR_2,
      struct si476x_rsq_status_args *VAR_3,
      struct si476x_rsq_status_report *VAR_4)

{
 FUNC_0(VAR_2->revision > VAR_0 ||
        VAR_2->revision == -1);
 return VAR_1[VAR_2->revision].fm_rsq_status(VAR_2, VAR_3,
        VAR_4);
}
