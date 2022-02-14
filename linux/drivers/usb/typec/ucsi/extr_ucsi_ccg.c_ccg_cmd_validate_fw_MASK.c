
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int lock; } ;
struct ccg_cmd {unsigned int data; int len; int delay; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ucsi_ccg*,struct ccg_cmd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ucsi_ccg *VAR_2, unsigned int VAR_3)
{
 struct ccg_cmd VAR_4;
 int VAR_5;

 VAR_4.reg = VAR_0;
 VAR_4.data = VAR_3;
 VAR_4.len = 1;
 VAR_4.delay = 500;

 FUNC_1(&VAR_2->lock);

 VAR_5 = FUNC_0(VAR_2, &VAR_4);

 FUNC_2(&VAR_2->lock);

 if (VAR_5 != VAR_1)
  return VAR_5;

 return 0;
}
