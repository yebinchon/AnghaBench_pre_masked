
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct c67x00_td {int data; int residue; int retry_cnt; int status; int ctrl_reg; int dev_addr; int pid_ep; int pipe; int urb; int td_addr; } ;
struct c67x00_hcd {int dummy; } ;


 struct device* FUNC_0 (struct c67x00_hcd*) ;
 int FUNC_1 (struct device*,char*,char*,...) ;
 char* FUNC_2 (struct c67x00_td*) ;
 int FUNC_3 (struct c67x00_td*) ;
 int FUNC_4 (struct c67x00_td*) ;
 int FUNC_5 (struct c67x00_td*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct c67x00_hcd *VAR_0, struct c67x00_td *VAR_1, char *VAR_2)
{
 struct device *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, "### %s at 0x%04x\n", VAR_2, VAR_1->td_addr);
 FUNC_1(VAR_3, "urb:      0x%p\n", VAR_1->urb);
 FUNC_1(VAR_3, "endpoint:   %4d\n", FUNC_6(VAR_1->pipe));
 FUNC_1(VAR_3, "pipeout:    %4d\n", FUNC_7(VAR_1->pipe));
 FUNC_1(VAR_3, "ly_base_addr: 0x%04x\n", FUNC_3(VAR_1));
 FUNC_1(VAR_3, "port_length:  0x%04x\n", FUNC_5(VAR_1));
 FUNC_1(VAR_3, "pid_ep:         0x%02x\n", VAR_1->pid_ep);
 FUNC_1(VAR_3, "dev_addr:       0x%02x\n", VAR_1->dev_addr);
 FUNC_1(VAR_3, "ctrl_reg:       0x%02x\n", VAR_1->ctrl_reg);
 FUNC_1(VAR_3, "status:         0x%02x\n", VAR_1->status);
 FUNC_1(VAR_3, "retry_cnt:      0x%02x\n", VAR_1->retry_cnt);
 FUNC_1(VAR_3, "residue:        0x%02x\n", VAR_1->residue);
 FUNC_1(VAR_3, "next_td_addr: 0x%04x\n", FUNC_4(VAR_1));
 FUNC_1(VAR_3, "data: %*ph\n", FUNC_2(VAR_1), VAR_1->data);
}
