
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct device {int dummy; } ;
struct calling_interface_buffer {int cmd_class; int cmd_select; int * input; } ;
struct TYPE_8__ {int tokenID; int location; } ;
struct TYPE_7__ {int cmd_class; int cmd_select; int need_capability; int max; int min; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_3__* VAR_9 ;
 int FUNC_2 (struct device*,char*,...) ;
 TYPE_1__* VAR_10 ;
 TYPE_1__* VAR_11 ;

int FUNC_3(struct device *VAR_12,
       struct calling_interface_buffer *VAR_13)
{
 u16 VAR_14 = 0;
 int VAR_15;


 if (VAR_13->cmd_class > 30) {
  FUNC_2(VAR_12, "class too big: %u\n", VAR_13->cmd_class);
  return -VAR_4;
 }


 if (!(VAR_8 & (1 << VAR_13->cmd_class))) {
  FUNC_2(VAR_12, "invalid command, supported commands: 0x%8x\n",
   VAR_8);
  return -VAR_4;
 }


 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_5); VAR_15++) {
  if (VAR_13->cmd_class != VAR_5[VAR_15].cmd_class)
   continue;
  if (VAR_13->cmd_select != VAR_5[VAR_15].cmd_select &&
      VAR_5[VAR_15].cmd_select != -1)
   continue;
  FUNC_2(VAR_12, "blacklisted command: %u/%u\n",
   VAR_13->cmd_class, VAR_13->cmd_select);
  return -VAR_4;
 }



 if ((VAR_13->cmd_class == VAR_1 ||
      VAR_13->cmd_class == VAR_2) &&
      VAR_13->cmd_select < 3) {

  if (!VAR_9) {
   FUNC_2(VAR_12, "no token support on this system\n");
   return -VAR_4;
  }


  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
   if (VAR_9[VAR_15].location != VAR_13->input[0])
    continue;
   VAR_14 = VAR_9[VAR_15].tokenID;
   break;
  }


  if (!VAR_14) {
   FUNC_2(VAR_12, "token at location %04x doesn't exist\n",
    VAR_13->input[0]);
   return -VAR_4;
  }


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_10); VAR_15++) {
   if (!VAR_10[VAR_15].min || !VAR_10[VAR_15].max)
    continue;
   if (VAR_14 >= VAR_10[VAR_15].min &&
       VAR_14 <= VAR_10[VAR_15].max)
    return -VAR_4;
  }


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_11); VAR_15++) {
   if (!VAR_11[VAR_15].min || !VAR_11[VAR_15].max)
    continue;
   if (VAR_14 < VAR_11[VAR_15].min ||
       VAR_14 > VAR_11[VAR_15].max)
    continue;
   if (!VAR_11[VAR_15].need_capability ||
       FUNC_1(VAR_11[VAR_15].need_capability)) {
    FUNC_2(VAR_12, "whitelisted token: %x\n", VAR_14);
    return 0;
   }

  }
 }

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_6); VAR_15++) {
  if (VAR_13->cmd_class != VAR_6[VAR_15].cmd_class)
   continue;
  if (VAR_13->cmd_select != VAR_6[VAR_15].cmd_select)
   continue;
  if (!VAR_6[VAR_15].need_capability ||
      FUNC_1(VAR_6[VAR_15].need_capability)) {
   FUNC_2(VAR_12, "whitelisted capable command: %u/%u\n",
   VAR_13->cmd_class, VAR_13->cmd_select);
   return 0;
  }
  FUNC_2(VAR_12, "missing capability %d for %u/%u\n",
   VAR_6[VAR_15].need_capability,
   VAR_13->cmd_class, VAR_13->cmd_select);

 }


 if (FUNC_1(VAR_0)) {
  FUNC_2(VAR_12, "Allowing %u/%u due to CAP_SYS_RAWIO\n",
   VAR_13->cmd_class, VAR_13->cmd_select);
  return 0;
 }

 return -VAR_3;
}
