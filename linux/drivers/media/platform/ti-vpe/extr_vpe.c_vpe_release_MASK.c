
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vpe_dev {int dev_mutex; int num_instances; } ;
struct TYPE_3__ {int m2m_ctx; } ;
struct vpe_ctx {TYPE_1__ fh; int hdl; int sc_coeff_h; int sc_coeff_v; int mmr_adb; int desc_list; } ;
struct file {int dummy; } ;


 scalar_t__ FUNC_0 (int *) ;
 struct vpe_ctx* FUNC_1 (struct file*) ;
 int FUNC_2 (struct vpe_ctx*) ;
 int FUNC_3 (struct vpe_ctx*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 struct vpe_dev* FUNC_10 (struct file*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct vpe_dev*,char*,...) ;

__attribute__((used)) static int FUNC_14(struct file *VAR_0)
{
 struct vpe_dev *VAR_1 = FUNC_10(VAR_0);
 struct vpe_ctx *VAR_2 = FUNC_1(VAR_0);

 FUNC_13(VAR_1, "releasing instance %p\n", VAR_2);

 FUNC_4(&VAR_1->dev_mutex);
 FUNC_2(VAR_2);
 FUNC_12(&VAR_2->desc_list);
 FUNC_11(&VAR_2->mmr_adb);

 FUNC_11(&VAR_2->sc_coeff_v);
 FUNC_11(&VAR_2->sc_coeff_h);

 FUNC_7(&VAR_2->fh);
 FUNC_8(&VAR_2->fh);
 FUNC_6(&VAR_2->hdl);
 FUNC_9(VAR_2->fh.m2m_ctx);

 FUNC_3(VAR_2);






 if (FUNC_0(&VAR_1->num_instances) == 0)
  FUNC_13(VAR_1, "last instance released\n");

 FUNC_5(&VAR_1->dev_mutex);

 return 0;
}
