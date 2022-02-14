
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc_subdev {int dummy; } ;
struct qcom_rproc_ssr {scalar_t__ name; } ;


 int FUNC_0 (int *,int ,void*) ;
 int VAR_0 ;
 struct qcom_rproc_ssr* FUNC_1 (struct rproc_subdev*) ;

__attribute__((used)) static void FUNC_2(struct rproc_subdev *VAR_1)
{
 struct qcom_rproc_ssr *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_0, 0, (void *)VAR_2->name);
}
