
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct rproc {scalar_t__ priv; } ;
struct qcom_adsp {int sysmon; int ssr_subdev; int smd_subdev; int glink_subdev; int q6v5; int has_aggre2_clk; int pas_id; struct rproc* rproc; TYPE_1__* dev; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct adsp_data {char* firmware_name; int ssctl_id; int sysmon_name; int ssr_name; int crash_reason_smem; int has_aggre2_clk; int pas_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qcom_adsp*) ;
 int FUNC_3 (struct qcom_adsp*) ;
 int FUNC_4 (struct qcom_adsp*) ;
 int VAR_3 ;
 int FUNC_5 (TYPE_1__*,char*) ;
 struct adsp_data* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,char*,char const**) ;
 int FUNC_8 (struct platform_device*,struct qcom_adsp*) ;
 int FUNC_9 (struct rproc*,int *) ;
 int FUNC_10 (struct rproc*,int *) ;
 int FUNC_11 (struct rproc*,int *,int ) ;
 int FUNC_12 (struct rproc*,int ,int ) ;
 int VAR_4 ;
 int FUNC_13 (int *,struct platform_device*,struct rproc*,int ,int ) ;
 int FUNC_14 () ;
 int FUNC_15 (struct rproc*) ;
 struct rproc* FUNC_16 (TYPE_1__*,int ,int *,char const*,int) ;
 int FUNC_17 (struct rproc*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_5)
{
 const struct adsp_data *VAR_6;
 struct qcom_adsp *VAR_7;
 struct rproc *VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_6 = FUNC_6(&VAR_5->dev);
 if (!VAR_6)
  return -VAR_0;

 if (!FUNC_14())
  return -VAR_2;

 VAR_9 = VAR_6->firmware_name;
 VAR_10 = FUNC_7(VAR_5->dev.of_node, "firmware-name",
          &VAR_9);
 if (VAR_10 < 0 && VAR_10 != -VAR_0)
  return VAR_10;

 VAR_8 = FUNC_16(&VAR_5->dev, VAR_5->name, &VAR_3,
       VAR_9, sizeof(*VAR_7));
 if (!VAR_8) {
  FUNC_5(&VAR_5->dev, "unable to allocate remoteproc\n");
  return -VAR_1;
 }

 VAR_7 = (struct qcom_adsp *)VAR_8->priv;
 VAR_7->dev = &VAR_5->dev;
 VAR_7->rproc = VAR_8;
 VAR_7->pas_id = VAR_6->pas_id;
 VAR_7->has_aggre2_clk = VAR_6->has_aggre2_clk;
 FUNC_8(VAR_5, VAR_7);

 VAR_10 = FUNC_2(VAR_7);
 if (VAR_10)
  goto free_rproc;

 VAR_10 = FUNC_3(VAR_7);
 if (VAR_10)
  goto free_rproc;

 VAR_10 = FUNC_4(VAR_7);
 if (VAR_10)
  goto free_rproc;

 VAR_10 = FUNC_13(&VAR_7->q6v5, VAR_5, VAR_8, VAR_6->crash_reason_smem,
        VAR_4);
 if (VAR_10)
  goto free_rproc;

 FUNC_9(VAR_8, &VAR_7->glink_subdev);
 FUNC_10(VAR_8, &VAR_7->smd_subdev);
 FUNC_11(VAR_8, &VAR_7->ssr_subdev, VAR_6->ssr_name);
 VAR_7->sysmon = FUNC_12(VAR_8,
           VAR_6->sysmon_name,
           VAR_6->ssctl_id);
 if (FUNC_0(VAR_7->sysmon)) {
  VAR_10 = FUNC_1(VAR_7->sysmon);
  goto free_rproc;
 }

 VAR_10 = FUNC_15(VAR_8);
 if (VAR_10)
  goto free_rproc;

 return 0;

free_rproc:
 FUNC_17(VAR_8);

 return VAR_10;
}
