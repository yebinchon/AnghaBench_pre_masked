
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ucsi_ccg {int cmd_resp; int flags; struct device* dev; } ;
struct device {int dummy; } ;
struct ccg_cmd {int reg; int delay; int len; int data; } ;


 int VAR_0 ;

 int VAR_1 ;
 int FUNC_0 (struct ucsi_ccg*) ;
 int FUNC_1 (struct ucsi_ccg*) ;
 int FUNC_2 (struct ucsi_ccg*,int,int *,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static int FUNC_7(struct ucsi_ccg *VAR_2, struct ccg_cmd *VAR_3)
{
 struct device *VAR_4 = VAR_2->dev;
 int VAR_5;

 switch (VAR_3->reg & 0xF000) {
 case 128:
  FUNC_6(VAR_0, &VAR_2->flags);
  break;
 default:
  FUNC_4(VAR_4, "invalid cmd register\n");
  break;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_3->reg, (u8 *)&VAR_3->data, VAR_3->len);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_5(VAR_3->delay);

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0) {
  FUNC_4(VAR_4, "response read error\n");
  switch (VAR_3->reg & 0xF000) {
  case 128:
   FUNC_3(VAR_0, &VAR_2->flags);
   break;
  default:
   FUNC_4(VAR_4, "invalid cmd register\n");
   break;
  }
  return -VAR_1;
 }
 FUNC_0(VAR_2);

 return VAR_2->cmd_resp;
}
