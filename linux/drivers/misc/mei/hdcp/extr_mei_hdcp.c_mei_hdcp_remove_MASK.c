
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_device {int dev; } ;
struct i915_hdcp_comp_master {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct i915_hdcp_comp_master*) ;
 int FUNC_2 (struct mei_cl_device*) ;
 struct i915_hdcp_comp_master* FUNC_3 (struct mei_cl_device*) ;
 int FUNC_4 (struct mei_cl_device*,int *) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct mei_cl_device *VAR_1)
{
 struct i915_hdcp_comp_master *VAR_2 =
      FUNC_3(VAR_1);

 FUNC_0(&VAR_1->dev, &VAR_0);
 FUNC_1(VAR_2);
 FUNC_4(VAR_1, ((void*)0));

 return FUNC_2(VAR_1);
}
