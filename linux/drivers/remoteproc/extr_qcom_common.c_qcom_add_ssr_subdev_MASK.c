
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rproc {int dummy; } ;
struct TYPE_2__ {int unprepare; } ;
struct qcom_rproc_ssr {char const* name; TYPE_1__ subdev; } ;


 int FUNC_0 (struct rproc*,TYPE_1__*) ;
 int VAR_0 ;

void FUNC_1(struct rproc *VAR_1, struct qcom_rproc_ssr *VAR_2,
    const char *VAR_3)
{
 VAR_2->name = VAR_3;
 VAR_2->subdev.unprepare = VAR_0;

 FUNC_0(VAR_1, &VAR_2->subdev);
}
