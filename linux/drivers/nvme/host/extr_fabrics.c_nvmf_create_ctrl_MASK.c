
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmf_transport_ops {int required_opts; int allowed_opts; int module; struct nvme_ctrl* (* create_ctrl ) (struct device*,struct nvmf_ctrl_options*) ;} ;
struct nvmf_ctrl_options {int mask; int transport; } ;
struct nvme_ctrl {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nvme_ctrl* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct nvme_ctrl*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct nvme_ctrl*) ;
 int FUNC_3 (int *) ;
 struct nvmf_ctrl_options* FUNC_4 (int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct nvmf_ctrl_options*,int) ;
 int FUNC_7 (struct nvmf_ctrl_options*,int) ;
 int FUNC_8 (struct nvmf_ctrl_options*) ;
 struct nvmf_transport_ops* FUNC_9 (struct nvmf_ctrl_options*) ;
 int FUNC_10 (struct nvmf_ctrl_options*,char const*) ;
 int VAR_6 ;
 int FUNC_11 (char*,int ) ;
 int FUNC_12 (char*,int ) ;
 struct nvme_ctrl* FUNC_13 (struct device*,struct nvmf_ctrl_options*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static struct nvme_ctrl *
FUNC_16(struct device *VAR_7, const char *VAR_8)
{
 struct nvmf_ctrl_options *VAR_9;
 struct nvmf_transport_ops *VAR_10;
 struct nvme_ctrl *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return FUNC_0(-VAR_2);

 VAR_12 = FUNC_10(VAR_9, VAR_8);
 if (VAR_12)
  goto out_free_opts;


 FUNC_12("nvme-%s", VAR_9->transport);






 VAR_12 = FUNC_7(VAR_9, VAR_5);
 if (VAR_12)
  goto out_free_opts;
 VAR_9->mask &= ~VAR_5;

 FUNC_3(&VAR_6);
 VAR_10 = FUNC_9(VAR_9);
 if (!VAR_10) {
  FUNC_11("no handler found for transport %s.\n",
   VAR_9->transport);
  VAR_12 = -VAR_1;
  goto out_unlock;
 }

 if (!FUNC_14(VAR_10->module)) {
  VAR_12 = -VAR_0;
  goto out_unlock;
 }
 FUNC_15(&VAR_6);

 VAR_12 = FUNC_7(VAR_9, VAR_10->required_opts);
 if (VAR_12)
  goto out_module_put;
 VAR_12 = FUNC_6(VAR_9, VAR_4 |
    VAR_10->allowed_opts | VAR_10->required_opts);
 if (VAR_12)
  goto out_module_put;

 VAR_11 = VAR_10->create_ctrl(VAR_7, VAR_9);
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  goto out_module_put;
 }

 FUNC_5(VAR_10->module);
 return VAR_11;

out_module_put:
 FUNC_5(VAR_10->module);
 goto out_free_opts;
out_unlock:
 FUNC_15(&VAR_6);
out_free_opts:
 FUNC_8(VAR_9);
 return FUNC_0(VAR_12);
}
