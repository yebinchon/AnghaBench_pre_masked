
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fman_cfg {int qmi_def_tnums_thresh; } ;
struct fman {TYPE_2__* qmi_regs; TYPE_1__* bmi_regs; } ;
struct TYPE_4__ {int fmqm_gc; } ;
struct TYPE_3__ {int fmbm_init; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct fman *VAR_4, struct fman_cfg *VAR_5)
{
 u32 VAR_6 = 0;






 VAR_6 = VAR_3;


 VAR_6 |= (VAR_5->qmi_def_tnums_thresh << 8) | VAR_5->qmi_def_tnums_thresh;

 FUNC_0(VAR_0, &VAR_4->bmi_regs->fmbm_init);
 FUNC_0(VAR_6 | VAR_2 | VAR_1,
      &VAR_4->qmi_regs->fmqm_gc);

 return 0;
}
