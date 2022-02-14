
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct q6v5 {int rproc; int proxy_pd_count; int proxy_pds; int active_pd_count; int active_pds; int ssr_subdev; int smd_subdev; int glink_subdev; int sysmon; } ;
struct platform_device {int dummy; } ;


 struct q6v5* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct q6v5*,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct q6v5 *VAR_1 = FUNC_0(VAR_0);

 FUNC_6(VAR_1->rproc);

 FUNC_5(VAR_1->sysmon);
 FUNC_2(VAR_1->rproc, &VAR_1->glink_subdev);
 FUNC_3(VAR_1->rproc, &VAR_1->smd_subdev);
 FUNC_4(VAR_1->rproc, &VAR_1->ssr_subdev);

 FUNC_1(VAR_1, VAR_1->active_pds, VAR_1->active_pd_count);
 FUNC_1(VAR_1, VAR_1->proxy_pds, VAR_1->proxy_pd_count);

 FUNC_7(VAR_1->rproc);

 return 0;
}
