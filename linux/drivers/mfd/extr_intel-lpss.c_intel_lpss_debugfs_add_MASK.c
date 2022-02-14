
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_lpss {struct dentry* debugfs; int idle_ltr; int active_ltr; int caps; int dev; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_0 ;
 struct dentry* FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,int ,struct dentry*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct intel_lpss*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(struct intel_lpss *VAR_2)
{
 struct dentry *VAR_3;

 VAR_3 = FUNC_2(FUNC_4(VAR_2->dev), VAR_1);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);


 FUNC_5(VAR_2);

 FUNC_3("capabilities", VAR_0, VAR_3, &VAR_2->caps);
 FUNC_3("active_ltr", VAR_0, VAR_3, &VAR_2->active_ltr);
 FUNC_3("idle_ltr", VAR_0, VAR_3, &VAR_2->idle_ltr);

 VAR_2->debugfs = VAR_3;
 return 0;
}
