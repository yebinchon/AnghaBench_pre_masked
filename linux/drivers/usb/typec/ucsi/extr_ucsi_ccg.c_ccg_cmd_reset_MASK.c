
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucsi_ccg {int lock; int flags; } ;
struct ccg_cmd {int len; int delay; int reg; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ucsi_ccg*,struct ccg_cmd*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ucsi_ccg *VAR_5)
{
 struct ccg_cmd VAR_6;
 u8 *VAR_7;
 int VAR_8;

 VAR_7 = (u8 *)&VAR_6.data;
 VAR_6.reg = VAR_0;
 VAR_7[0] = VAR_4;
 VAR_7[1] = VAR_1;
 VAR_6.len = 2;
 VAR_6.delay = 5000;

 FUNC_2(&VAR_5->lock);

 FUNC_4(VAR_3, &VAR_5->flags);

 VAR_8 = FUNC_0(VAR_5, &VAR_6);
 if (VAR_8 != VAR_2)
  goto err_clear_flag;

 VAR_8 = 0;

err_clear_flag:
 FUNC_1(VAR_3, &VAR_5->flags);

 FUNC_3(&VAR_5->lock);

 return VAR_8;
}
