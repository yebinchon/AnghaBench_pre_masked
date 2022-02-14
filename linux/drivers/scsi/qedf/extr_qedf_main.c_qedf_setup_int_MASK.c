
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int used_cnt; scalar_t__ msix_cnt; } ;
struct qedf_ctx {int dbg_ctx; TYPE_2__ int_info; int cdev; } ;
struct TYPE_6__ {TYPE_1__* common; } ;
struct TYPE_4__ {int (* set_fp_int ) (int ,int ) ;int (* get_fp_int ) (int ,TYPE_2__*) ;int (* simd_handler_config ) (int ,struct qedf_ctx**,int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 TYPE_3__* VAR_3 ;
 int FUNC_3 (struct qedf_ctx*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int ,struct qedf_ctx**,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct qedf_ctx *VAR_5)
{
 int VAR_6 = 0;




 VAR_6 = VAR_3->common->set_fp_int(VAR_5->cdev, FUNC_2());
 if (VAR_6 <= 0)
  return 0;

 VAR_6 = VAR_3->common->get_fp_int(VAR_5->cdev, &VAR_5->int_info);
 if (VAR_6)
  return 0;

 FUNC_1(&(VAR_5->dbg_ctx), VAR_1, "Number of msix_cnt = "
     "0x%x num of cpus = 0x%x\n", VAR_5->int_info.msix_cnt,
     FUNC_2());

 if (VAR_5->int_info.msix_cnt)
  return FUNC_3(VAR_5);

 VAR_3->common->simd_handler_config(VAR_5->cdev, &VAR_5,
     VAR_2, VAR_4);
 VAR_5->int_info.used_cnt = 1;

 FUNC_0(&VAR_5->dbg_ctx,
   "Cannot load driver due to a lack of MSI-X vectors.\n");
 return -VAR_0;
}
