
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct device_node {int dummy; } ;
struct TYPE_2__ {void* shift; void* mult; } ;
struct cpts {int dev; TYPE_1__ cc; } ;


 int VAR_0 ;
 int FUNC_0 (struct cpts*,struct device_node*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct device_node*,char*,void**) ;

__attribute__((used)) static int FUNC_3(struct cpts *VAR_1, struct device_node *VAR_2)
{
 int VAR_3 = -VAR_0;
 u32 VAR_4;

 if (!FUNC_2(VAR_2, "cpts_clock_mult", &VAR_4))
  VAR_1->cc.mult = VAR_4;

 if (!FUNC_2(VAR_2, "cpts_clock_shift", &VAR_4))
  VAR_1->cc.shift = VAR_4;

 if ((VAR_1->cc.mult && !VAR_1->cc.shift) ||
     (!VAR_1->cc.mult && VAR_1->cc.shift))
  goto of_error;

 return FUNC_0(VAR_1, VAR_2);

of_error:
 FUNC_1(VAR_1->dev, "CPTS: Missing property in the DT.\n");
 return VAR_3;
}
