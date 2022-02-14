
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {scalar_t__ priv; } ;
struct qcom_adsp {int * dev; int sysmon; int ssr_subdev; int glink_subdev; int q6v5; struct rproc* rproc; } ;
struct platform_device {int dev; int name; } ;
struct adsp_pil_data {int ssctl_id; int sysmon_name; int ssr_name; int crash_reason_smem; int clk_ids; int firmware_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qcom_adsp*) ;
 int FUNC_3 (struct qcom_adsp*,int ) ;
 int FUNC_4 (struct qcom_adsp*,struct platform_device*) ;
 int FUNC_5 (struct qcom_adsp*) ;
 int VAR_2 ;
 int FUNC_6 (int *,char*) ;
 struct adsp_pil_data* FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct qcom_adsp*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct rproc*,int *) ;
 int FUNC_12 (struct rproc*,int *,int ) ;
 int FUNC_13 (struct rproc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_14 (int *,struct platform_device*,struct rproc*,int ,int ) ;
 int FUNC_15 (struct rproc*) ;
 struct rproc* FUNC_16 (int *,int ,int *,int ,int) ;
 int FUNC_17 (struct rproc*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_4)
{
 const struct adsp_pil_data *VAR_5;
 struct qcom_adsp *VAR_6;
 struct rproc *VAR_7;
 int VAR_8;

 VAR_5 = FUNC_7(&VAR_4->dev);
 if (!VAR_5)
  return -VAR_0;

 VAR_7 = FUNC_16(&VAR_4->dev, VAR_4->name, &VAR_2,
       VAR_5->firmware_name, sizeof(*VAR_6));
 if (!VAR_7) {
  FUNC_6(&VAR_4->dev, "unable to allocate remoteproc\n");
  return -VAR_1;
 }

 VAR_6 = (struct qcom_adsp *)VAR_7->priv;
 VAR_6->dev = &VAR_4->dev;
 VAR_6->rproc = VAR_7;
 FUNC_8(VAR_4, VAR_6);

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8)
  goto free_rproc;

 VAR_8 = FUNC_3(VAR_6, VAR_5->clk_ids);
 if (VAR_8)
  goto free_rproc;

 FUNC_10(VAR_6->dev);

 VAR_8 = FUNC_5(VAR_6);
 if (VAR_8)
  goto disable_pm;

 VAR_8 = FUNC_4(VAR_6, VAR_4);
 if (VAR_8)
  goto disable_pm;

 VAR_8 = FUNC_14(&VAR_6->q6v5, VAR_4, VAR_7, VAR_5->crash_reason_smem,
        VAR_3);
 if (VAR_8)
  goto disable_pm;

 FUNC_11(VAR_7, &VAR_6->glink_subdev);
 FUNC_12(VAR_7, &VAR_6->ssr_subdev, VAR_5->ssr_name);
 VAR_6->sysmon = FUNC_13(VAR_7,
           VAR_5->sysmon_name,
           VAR_5->ssctl_id);
 if (FUNC_0(VAR_6->sysmon)) {
  VAR_8 = FUNC_1(VAR_6->sysmon);
  goto disable_pm;
 }

 VAR_8 = FUNC_15(VAR_7);
 if (VAR_8)
  goto disable_pm;

 return 0;

disable_pm:
 FUNC_9(VAR_6->dev);
free_rproc:
 FUNC_17(VAR_7);

 return VAR_8;
}
