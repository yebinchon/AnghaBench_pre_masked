
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {int dev; } ;
struct cmd_header {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct lbs_private*,int ,struct cmd_header*,int,int ,unsigned long) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct cmd_header*,int ,int) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int FUNC_5(struct lbs_private *VAR_2)
{
 int VAR_3 = -1;
 struct cmd_header VAR_4;

 FUNC_3(&VAR_4, 0, sizeof(VAR_4));

 FUNC_1("send DEEP_SLEEP command\n");
 VAR_3 = FUNC_0(VAR_2, VAR_0, &VAR_4, sizeof(VAR_4),
   VAR_1, (unsigned long) &VAR_4);
 if (VAR_3)
  FUNC_4(VAR_2->dev, "DEEP_SLEEP cmd failed\n");

 FUNC_2(200);
 return VAR_3;
}
