
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {int desc; } ;
struct TYPE_2__ {int stalled; int wedged; scalar_t__ is_in; scalar_t__ is_iso; } ;
struct ast_vhub_ep {scalar_t__ d_idx; TYPE_1__ epn; int queue; struct ast_vhub* vhub; } ;
struct ast_vhub {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ast_vhub_ep*,char*,int,int) ;
 int FUNC_1 (struct ast_vhub_ep*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct ast_vhub_ep* FUNC_5 (struct usb_ep*) ;

__attribute__((used)) static int FUNC_6(struct usb_ep* VAR_3, bool VAR_4,
          bool VAR_5)
{
 struct ast_vhub_ep *VAR_6 = FUNC_5(VAR_3);
 struct ast_vhub *VAR_7 = VAR_6->vhub;
 unsigned long VAR_8;

 FUNC_0(VAR_6, "Set halt (%d) & wedge (%d)\n", VAR_4, VAR_5);

 if (!VAR_3 || !VAR_3->desc)
  return -VAR_1;
 if (VAR_6->d_idx == 0)
  return 0;
 if (VAR_6->epn.is_iso)
  return -VAR_2;

 FUNC_3(&VAR_7->lock, VAR_8);


 if (VAR_4 && VAR_6->epn.is_in && !FUNC_2(&VAR_6->queue)) {
  FUNC_4(&VAR_7->lock, VAR_8);
  return -VAR_0;
 }
 VAR_6->epn.stalled = VAR_4;
 VAR_6->epn.wedged = VAR_5;
 FUNC_1(VAR_6);

 FUNC_4(&VAR_7->lock, VAR_8);

 return 0;
}
