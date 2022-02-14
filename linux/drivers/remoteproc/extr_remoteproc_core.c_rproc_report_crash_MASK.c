
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int crash_handler; int name; int dev; } ;
typedef enum rproc_crash_type { ____Placeholder_rproc_crash_type } rproc_crash_type ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rproc *VAR_0, enum rproc_crash_type VAR_1)
{
 if (!VAR_0) {
  FUNC_1("NULL rproc pointer\n");
  return;
 }

 FUNC_0(&VAR_0->dev, "crash detected in %s: type %s\n",
  VAR_0->name, FUNC_2(VAR_1));


 FUNC_3(&VAR_0->crash_handler);
}
