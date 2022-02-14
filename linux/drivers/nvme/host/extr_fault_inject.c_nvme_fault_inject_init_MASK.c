
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fault_attr {int dummy; } ;
struct nvme_fault_inject {int dont_retry; int status; struct dentry* parent; struct fault_attr attr; } ;
struct dentry {int dummy; } ;


 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,struct dentry*,int*) ;
 struct dentry* FUNC_2 (char const*,int *) ;
 int FUNC_3 (char*,int,struct dentry*,int *) ;
 int FUNC_4 (struct dentry*) ;
 struct fault_attr VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dentry* FUNC_5 (char*,struct dentry*,struct fault_attr*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (struct fault_attr*,scalar_t__) ;

void FUNC_8(struct nvme_fault_inject *VAR_3,
       const char *VAR_4)
{
 struct dentry *VAR_5, *VAR_6;
 struct fault_attr *VAR_7 = &VAR_3->attr;


 if (VAR_2)
  FUNC_7(&VAR_1, VAR_2);


 VAR_6 = FUNC_2(VAR_4, ((void*)0));
 if (!VAR_6) {
  FUNC_6("%s: failed to create debugfs directory\n", VAR_4);
  return;
 }

 *VAR_7 = VAR_1;
 VAR_5 = FUNC_5("fault_inject", VAR_6, VAR_7);
 if (FUNC_0(VAR_5)) {
  FUNC_6("%s: failed to create debugfs attr\n", VAR_4);
  FUNC_4(VAR_6);
  return;
 }
 VAR_3->parent = VAR_6;


 VAR_3->status = VAR_0;
 VAR_3->dont_retry = 1;
 FUNC_3("status", 0600, VAR_5, &VAR_3->status);
 FUNC_1("dont_retry", 0600, VAR_5, &VAR_3->dont_retry);
}
