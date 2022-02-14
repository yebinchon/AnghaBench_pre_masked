
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_device_id {int dummy; } ;
struct mei_cl_device {int dev; } ;
struct i915_hdcp_comp_master {int dummy; } ;
struct component_match {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct component_match*) ;
 int FUNC_1 (int *,int *,struct component_match*) ;
 int FUNC_2 (int *,struct component_match**,int ,struct i915_hdcp_comp_master*) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (struct i915_hdcp_comp_master*) ;
 struct i915_hdcp_comp_master* FUNC_5 (int,int ) ;
 int FUNC_6 (struct mei_cl_device*) ;
 int FUNC_7 (struct mei_cl_device*) ;
 int FUNC_8 (struct mei_cl_device*,struct i915_hdcp_comp_master*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct mei_cl_device *VAR_4,
     const struct mei_cl_device_id *VAR_5)
{
 struct i915_hdcp_comp_master *VAR_6;
 struct component_match *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_7(VAR_4);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_4->dev, "mei_cldev_enable Failed. %d\n", VAR_8);
  goto enable_err_exit;
 }

 VAR_6 = FUNC_5(sizeof(*VAR_6), VAR_1);
 if (!VAR_6) {
  VAR_8 = -VAR_0;
  goto err_exit;
 }

 VAR_7 = ((void*)0);
 FUNC_2(&VAR_4->dev, &VAR_7,
      VAR_3, VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_8 = -VAR_0;
  goto err_exit;
 }

 FUNC_8(VAR_4, VAR_6);
 VAR_8 = FUNC_1(&VAR_4->dev,
           &VAR_2,
           VAR_7);
 if (VAR_8 < 0) {
  FUNC_3(&VAR_4->dev, "Master comp add failed %d\n", VAR_8);
  goto err_exit;
 }

 return 0;

err_exit:
 FUNC_8(VAR_4, ((void*)0));
 FUNC_4(VAR_6);
 FUNC_6(VAR_4);
enable_err_exit:
 return VAR_8;
}
