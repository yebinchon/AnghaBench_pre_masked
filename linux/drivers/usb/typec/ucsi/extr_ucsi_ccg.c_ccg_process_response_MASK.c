
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct ucsi_ccg {int cmd_resp; TYPE_1__ dev_resp; int flags; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct ucsi_ccg*) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ucsi_ccg *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;

 if (VAR_4->dev_resp.code & VAR_0) {
  if (VAR_4->dev_resp.code == VAR_2) {
   if (FUNC_4(VAR_3, &VAR_4->flags))
    VAR_4->cmd_resp = VAR_4->dev_resp.code;
   FUNC_2(VAR_4);
  }
  if (FUNC_3(VAR_4->dev_resp.code))
   FUNC_1(VAR_5, "invalid async evt %d\n",
    VAR_4->dev_resp.code);
 } else {
  if (FUNC_4(VAR_1, &VAR_4->flags)) {
   VAR_4->cmd_resp = VAR_4->dev_resp.code;
   FUNC_0(VAR_1, &VAR_4->flags);
  } else {
   FUNC_1(VAR_5, "dev resp 0x%04x but no cmd pending\n",
    VAR_4->dev_resp.code);
  }
 }
}
