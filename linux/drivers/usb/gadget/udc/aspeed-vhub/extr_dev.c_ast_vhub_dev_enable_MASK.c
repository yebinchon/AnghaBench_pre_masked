
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_8__ {int stalled; int wedged; } ;
struct ast_vhub_ep {TYPE_4__ epn; } ;
struct TYPE_7__ {size_t buf_dma; } ;
struct TYPE_5__ {scalar_t__ speed; } ;
struct ast_vhub_dev {int enabled; size_t index; int wakeup_en; struct ast_vhub_ep** epns; scalar_t__ regs; TYPE_3__ ep0; TYPE_2__* vhub; TYPE_1__ gadget; } ;
struct TYPE_6__ {scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_0 (struct ast_vhub_dev*) ;
 int FUNC_1 (struct ast_vhub_ep*) ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (size_t,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct ast_vhub_dev *VAR_11)
{
 u32 VAR_12, VAR_13, VAR_14;

 if (VAR_11->enabled)
  return;


 FUNC_0(VAR_11);


 VAR_12 = VAR_5 |
  VAR_6 |
  VAR_7 |
  VAR_8;
 if (VAR_11->gadget.speed == VAR_4)
  VAR_12 |= VAR_9;
 FUNC_3(VAR_12, VAR_11->regs + VAR_0);


 VAR_13 = VAR_10 << VAR_11->index;
 VAR_12 = FUNC_2(VAR_11->vhub->regs + VAR_2);
 VAR_12 |= VAR_13;
 FUNC_3(VAR_12, VAR_11->vhub->regs + VAR_2);


 FUNC_3(VAR_11->ep0.buf_dma, VAR_11->regs + VAR_1);


 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  struct ast_vhub_ep *VAR_15 = VAR_11->epns[VAR_14];

  if (VAR_15 && (VAR_15->epn.stalled || VAR_15->epn.wedged)) {
   VAR_15->epn.stalled = 0;
   VAR_15->epn.wedged = 0;
   FUNC_1(VAR_15);
  }
 }


 VAR_11->wakeup_en = 0;
 VAR_11->enabled = 1;
}
