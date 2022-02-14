
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lbs_private {int driver_lock; int dev; } ;
struct cmd_header {int dummy; } ;
struct cmd_ctrl_node {int result; int cmdwaitqwoken; int cmdwait_q; } ;


 scalar_t__ FUNC_0 (struct cmd_ctrl_node*) ;
 int FUNC_1 (struct cmd_ctrl_node*) ;
 int FUNC_2 (struct lbs_private*,struct cmd_ctrl_node*) ;
 struct cmd_ctrl_node* FUNC_3 (struct lbs_private*,int ,struct cmd_header*,int,int (*) (struct lbs_private*,unsigned long,struct cmd_header*),unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int ,int ) ;

int FUNC_9(struct lbs_private *VAR_0, uint16_t VAR_1,
       struct cmd_header *VAR_2, int VAR_3,
       int (*VAR_4)(struct lbs_private *, unsigned long, struct cmd_header *),
       unsigned long VAR_5)
{
 struct cmd_ctrl_node *VAR_6;
 unsigned long VAR_7;
 int VAR_8 = 0;

 VAR_6 = FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3,
      VAR_4, VAR_5);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  goto done;
 }

 FUNC_4();






 FUNC_8(VAR_6->cmdwait_q, VAR_6->cmdwaitqwoken);

 FUNC_6(&VAR_0->driver_lock, VAR_7);
 VAR_8 = VAR_6->result;
 if (VAR_8)
  FUNC_5(VAR_0->dev, "PREP_CMD: command 0x%04x failed: %d\n",
       VAR_1, VAR_8);

 FUNC_2(VAR_0, VAR_6);
 FUNC_7(&VAR_0->driver_lock, VAR_7);

done:
 return VAR_8;
}
