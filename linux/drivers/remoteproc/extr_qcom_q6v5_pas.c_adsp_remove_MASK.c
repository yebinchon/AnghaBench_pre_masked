
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_adsp {int rproc; int ssr_subdev; int smd_subdev; int sysmon; int glink_subdev; } ;
struct platform_device {int dummy; } ;


 struct qcom_adsp* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct qcom_adsp *VAR_1 = FUNC_0(VAR_0);

 FUNC_5(VAR_1->rproc);

 FUNC_1(VAR_1->rproc, &VAR_1->glink_subdev);
 FUNC_4(VAR_1->sysmon);
 FUNC_2(VAR_1->rproc, &VAR_1->smd_subdev);
 FUNC_3(VAR_1->rproc, &VAR_1->ssr_subdev);
 FUNC_6(VAR_1->rproc);

 return 0;
}
