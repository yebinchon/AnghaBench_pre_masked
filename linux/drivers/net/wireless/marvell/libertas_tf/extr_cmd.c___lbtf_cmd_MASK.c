
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct lbtf_private {int driver_lock; } ;
struct cmd_header {int dummy; } ;
struct cmd_ctrl_node {int result; int cmdwaitqwoken; int cmdwait_q; } ;


 scalar_t__ FUNC_0 (struct cmd_ctrl_node*) ;
 int VAR_0 ;
 int FUNC_1 (struct cmd_ctrl_node*) ;
 int FUNC_2 (struct lbtf_private*,struct cmd_ctrl_node*) ;
 struct cmd_ctrl_node* FUNC_3 (struct lbtf_private*,int ,struct cmd_header*,int,int (*) (struct lbtf_private*,unsigned long,struct cmd_header*),unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int ,int ) ;

int FUNC_11(struct lbtf_private *VAR_1, uint16_t VAR_2,
       struct cmd_header *VAR_3, int VAR_4,
       int (*VAR_5)(struct lbtf_private *,
         unsigned long, struct cmd_header *),
       unsigned long VAR_6)
{
 struct cmd_ctrl_node *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 FUNC_4(VAR_0);

 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6);
 if (FUNC_0(VAR_7)) {
  VAR_9 = FUNC_1(VAR_7);
  goto done;
 }

 FUNC_6();
 VAR_9 = FUNC_10(VAR_7->cmdwait_q,
           VAR_7->cmdwaitqwoken);
 if (VAR_9) {
  FUNC_7("PREP_CMD: command 0x%04x interrupted by signal: %d\n",
       VAR_2, VAR_9);
  goto done;
 }

 FUNC_8(&VAR_1->driver_lock, VAR_8);
 VAR_9 = VAR_7->result;
 if (VAR_9)
  FUNC_7("PREP_CMD: command 0x%04x failed: %d\n",
       VAR_2, VAR_9);

 FUNC_2(VAR_1, VAR_7);
 FUNC_9(&VAR_1->driver_lock, VAR_8);

done:
 FUNC_5(VAR_0, "ret %d", VAR_9);
 return VAR_9;
}
