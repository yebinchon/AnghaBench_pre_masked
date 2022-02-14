
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct enetc_pf {TYPE_2__* si; struct enetc_msg_swbd* rxmsg; } ;
struct enetc_msg_swbd {scalar_t__ vaddr; } ;
struct enetc_msg_cmd_header {int type; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {struct device dev; } ;



 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct enetc_pf*,int) ;

void FUNC_2(struct enetc_pf *VAR_1, int VAR_2, u16 *VAR_3)
{
 struct enetc_msg_swbd *VAR_4 = &VAR_1->rxmsg[VAR_2];
 struct device *VAR_5 = &VAR_1->si->pdev->dev;
 struct enetc_msg_cmd_header *VAR_6;
 u16 VAR_7;

 *VAR_3 = VAR_0;
 VAR_6 = (struct enetc_msg_cmd_header *)VAR_4->vaddr;
 VAR_7 = VAR_6->type;

 switch (VAR_7) {
 case 128:
  *VAR_3 = FUNC_1(VAR_1, VAR_2);
  break;
 default:
  FUNC_0(VAR_5, "command not supported (cmd_type: 0x%x)\n",
   VAR_7);
 }
}
