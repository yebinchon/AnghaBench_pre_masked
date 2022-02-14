
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int used_cnt; scalar_t__ msix_cnt; } ;
struct qedi_ctx {TYPE_2__ int_info; int cdev; int dbg_ctx; } ;
struct TYPE_6__ {TYPE_1__* common; } ;
struct TYPE_4__ {int (* set_fp_int ) (int ,int ) ;int (* get_fp_int ) (int ,TYPE_2__*) ;int (* simd_handler_config ) (int ,struct qedi_ctx**,int ,int ) ;} ;


 int FUNC_0 (int *,int ,char*,scalar_t__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 TYPE_3__* VAR_2 ;
 int FUNC_2 (struct qedi_ctx*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,struct qedi_ctx**,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct qedi_ctx *VAR_4)
{
 int VAR_5 = 0;

 VAR_5 = VAR_2->common->set_fp_int(VAR_4->cdev, FUNC_1());
 VAR_5 = VAR_2->common->get_fp_int(VAR_4->cdev, &VAR_4->int_info);
 if (VAR_5)
  goto exit_setup_int;

 FUNC_0(&VAR_4->dbg_ctx, VAR_0,
    "Number of msix_cnt = 0x%x num of cpus = 0x%x\n",
     VAR_4->int_info.msix_cnt, FUNC_1());

 if (VAR_4->int_info.msix_cnt) {
  VAR_5 = FUNC_2(VAR_4);
  goto exit_setup_int;
 } else {
  VAR_2->common->simd_handler_config(VAR_4->cdev, &VAR_4,
            VAR_1,
            VAR_3);
  VAR_4->int_info.used_cnt = 1;
 }

exit_setup_int:
 return VAR_5;
}
