
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int dev; int lock; } ;
struct ccg_cmd {int len; int delay; int data; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ucsi_ccg*,struct ccg_cmd*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ucsi_ccg *VAR_3)
{
 struct ccg_cmd VAR_4;
 int VAR_5;

 VAR_4.reg = VAR_0;
 VAR_4.data = VAR_2;
 VAR_4.len = 1;
 VAR_4.delay = 50;

 FUNC_2(&VAR_3->lock);

 VAR_5 = FUNC_0(VAR_3, &VAR_4);

 FUNC_3(&VAR_3->lock);

 if (VAR_5 != VAR_1) {
  FUNC_1(VAR_3->dev, "enter flashing failed ret=%d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
