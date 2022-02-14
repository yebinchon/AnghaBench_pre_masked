
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sel_fcf; } ;
struct qedf_ctx {TYPE_2__ ctlr; } ;
struct fc_lport {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {int fka_period; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct qedf_ctx* FUNC_1 (struct fc_lport*) ;
 struct qedf_ctx* FUNC_2 (struct qedf_ctx*) ;
 scalar_t__ FUNC_3 (struct qedf_ctx*) ;
 int FUNC_4 (char*,int ,char*,int) ;
 struct fc_lport* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t
FUNC_6(struct device *VAR_1,
 struct device_attribute *VAR_2, char *VAR_3)
{
 struct fc_lport *VAR_4 = FUNC_5(FUNC_0(VAR_1));
 struct qedf_ctx *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = -1;

 if (FUNC_3(VAR_5))
  VAR_5 = FUNC_2(VAR_5);

 if (VAR_5->ctlr.sel_fcf)
  VAR_6 = VAR_5->ctlr.sel_fcf->fka_period;

 return FUNC_4(VAR_3, VAR_0, "%d\n", VAR_6);
}
