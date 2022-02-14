
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_ccg {int port_num; int dev; int lock; } ;
struct ccg_cmd {int data; int len; int delay; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ucsi_ccg*,struct ccg_cmd*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct ucsi_ccg *VAR_4, bool VAR_5)
{
 struct ccg_cmd VAR_6;
 int VAR_7;

 VAR_6.reg = VAR_0;
 if (VAR_5)
  VAR_6.data = (VAR_4->port_num == 1) ?
       VAR_2 : (VAR_2 | VAR_3);
 else
  VAR_6.data = 0x0;
 VAR_6.len = 1;
 VAR_6.delay = 10;

 FUNC_2(&VAR_4->lock);

 VAR_7 = FUNC_0(VAR_4, &VAR_6);

 FUNC_3(&VAR_4->lock);

 if (VAR_7 != VAR_1) {
  FUNC_1(VAR_4->dev, "port control failed ret=%d\n", VAR_7);
  return VAR_7;
 }
 return 0;
}
