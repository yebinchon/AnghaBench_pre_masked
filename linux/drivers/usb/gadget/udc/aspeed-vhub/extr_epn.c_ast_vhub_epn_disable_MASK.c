
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct usb_ep {int dummy; } ;
struct TYPE_4__ {int * desc; } ;
struct TYPE_3__ {int enabled; int g_idx; scalar_t__ regs; } ;
struct ast_vhub_ep {TYPE_2__ ep; TYPE_1__ epn; struct ast_vhub* vhub; } ;
struct ast_vhub {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ast_vhub_ep*,char*) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ast_vhub_ep*,int ) ;
 int FUNC_3 (struct ast_vhub_ep*,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct ast_vhub_ep* FUNC_7 (struct usb_ep*) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct usb_ep* VAR_4)
{
 struct ast_vhub_ep *VAR_5 = FUNC_7(VAR_4);
 struct ast_vhub *VAR_6 = VAR_5->vhub;
 unsigned long VAR_7;
 u32 VAR_8, VAR_9;

 FUNC_0(VAR_5, "Disabling !\n");

 FUNC_5(&VAR_6->lock, VAR_7);

 VAR_5->epn.enabled = 0;


 FUNC_3(VAR_5, 0);


 FUNC_8(0, VAR_5->epn.regs + VAR_2);


 VAR_8 = FUNC_1(VAR_5->epn.g_idx);
 VAR_9 = FUNC_4(VAR_6->regs + VAR_0);
 VAR_9 &= ~VAR_8;
 FUNC_8(VAR_9, VAR_6->regs + VAR_0);
 FUNC_8(VAR_8, VAR_6->regs + VAR_1);


 FUNC_2(VAR_5, -VAR_3);


 VAR_5->ep.desc = ((void*)0);

 FUNC_6(&VAR_6->lock, VAR_7);

 return 0;
}
