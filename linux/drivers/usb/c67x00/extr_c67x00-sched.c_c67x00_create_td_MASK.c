
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int pipe; struct c67x00_urb_priv* hcpriv; } ;
struct c67x00_urb_priv {int port; int ep_data; } ;
struct c67x00_td {int td_addr; int pid_ep; int dev_addr; int ctrl_reg; int retry_cnt; unsigned long privdata; int td_list; struct urb* urb; void* data; void* next_td_addr; scalar_t__ residue; scalar_t__ status; int pipe; void* port_length; void* ly_base_addr; int ep_data; } ;
struct c67x00_hcd {int low_speed_ports; int next_td_addr; int next_buf_addr; int td_list; TYPE_1__* sie; } ;
typedef int __u8 ;
struct TYPE_4__ {scalar_t__ speed; } ;
struct TYPE_3__ {int sie_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct c67x00_hcd*,struct urb*,int,int) ;
 struct c67x00_td* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* FUNC_4 (struct c67x00_td*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct c67x00_hcd *VAR_15, struct urb *VAR_16,
       void *VAR_17, int VAR_18, int VAR_19, int VAR_20,
       unsigned long VAR_21)
{
 struct c67x00_td *VAR_22;
 struct c67x00_urb_priv *VAR_23 = VAR_16->hcpriv;
 const __u8 VAR_24 = 1, VAR_25 = 3;
 __u8 VAR_26 = 0;
 int VAR_27 = 0;

 if (FUNC_1(VAR_15, VAR_16, VAR_18, FUNC_8(VAR_16->pipe)
      || FUNC_7(VAR_16->pipe)))
  return -VAR_2;

 VAR_22 = FUNC_2(sizeof(*VAR_22), VAR_4);
 if (!VAR_22)
  return -VAR_3;

 VAR_22->pipe = VAR_16->pipe;
 VAR_22->ep_data = VAR_23->ep_data;

 if ((FUNC_4(VAR_22)->speed == VAR_14) &&
     !(VAR_15->low_speed_ports & (1 << VAR_23->port)))
  VAR_26 |= VAR_6;

 switch (FUNC_9(VAR_22->pipe)) {
 case 128:
  VAR_27 = VAR_12;
  VAR_26 |= VAR_5;
  break;
 case 130:
  VAR_27 = VAR_10;
  break;
 case 131:
  VAR_27 = VAR_9;
  break;
 case 129:
  VAR_27 = VAR_11;
  break;
 }

 if (VAR_20)
  VAR_26 |= VAR_7;

 VAR_26 |= VAR_0;


 VAR_22->td_addr = VAR_15->next_td_addr;
 VAR_15->next_td_addr = VAR_15->next_td_addr + VAR_1;


 VAR_22->ly_base_addr = FUNC_0(VAR_15->next_buf_addr);
 VAR_22->port_length = FUNC_0((VAR_15->sie->sie_num << 15) |
     (VAR_23->port << 14) | (VAR_18 & 0x3FF));
 VAR_22->pid_ep = ((VAR_19 & 0xF) << VAR_8) |
     (FUNC_6(VAR_22->pipe) & 0xF);
 VAR_22->dev_addr = FUNC_5(VAR_22->pipe) & 0x7F;
 VAR_22->ctrl_reg = VAR_26;
 VAR_22->status = 0;
 VAR_22->retry_cnt = (VAR_27 << VAR_13) | (VAR_24 << 4) | VAR_25;
 VAR_22->residue = 0;
 VAR_22->next_td_addr = FUNC_0(VAR_15->next_td_addr);


 VAR_22->data = VAR_17;
 VAR_22->urb = VAR_16;
 VAR_22->privdata = VAR_21;

 VAR_15->next_buf_addr += (VAR_18 + 1) & ~0x01;

 FUNC_3(&VAR_22->td_list, &VAR_15->td_list);
 return 0;
}
