
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int dma; int * cpu; } ;
struct TYPE_19__ {scalar_t__ frame_irq; TYPE_7__* bottom; TYPE_4__* top; } ;
struct TYPE_12__ {int nr; } ;
struct bttv {int cap_ctl; int loop_irq; int dma_on; TYPE_10__ main; int timeout; TYPE_9__* cvbi; TYPE_8__ curr; TYPE_1__ c; } ;
struct TYPE_16__ {scalar_t__ dma; } ;
struct TYPE_13__ {scalar_t__ dma; } ;
struct TYPE_20__ {TYPE_5__ bottom; TYPE_2__ top; } ;
struct TYPE_17__ {scalar_t__ dma; } ;
struct TYPE_18__ {TYPE_6__ bottom; } ;
struct TYPE_14__ {scalar_t__ dma; } ;
struct TYPE_15__ {TYPE_3__ top; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (char*,int ,int,int,unsigned long long,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,scalar_t__) ;

void
FUNC_8(struct bttv *VAR_8, int VAR_9)
{
 unsigned long VAR_10;
 int VAR_11;

 VAR_8->cap_ctl = 0;
 if (((void*)0) != VAR_8->curr.top) VAR_8->cap_ctl |= 0x02;
 if (((void*)0) != VAR_8->curr.bottom) VAR_8->cap_ctl |= 0x01;
 if (((void*)0) != VAR_8->cvbi) VAR_8->cap_ctl |= 0x0c;

 VAR_11 = 0;
 VAR_11 |= (VAR_8->cap_ctl & 0x03) ? 0x03 : 0x00;
 VAR_11 |= (VAR_8->cap_ctl & 0x0c) ? 0x0c : 0x00;
 VAR_11 |= VAR_9;

 FUNC_5("%d: capctl=%x lirq=%d top=%08llx/%08llx even=%08llx/%08llx\n",
   VAR_8->c.nr,VAR_11,VAR_8->loop_irq,
   VAR_8->cvbi ? (unsigned long long)VAR_8->cvbi->top.dma : 0,
   VAR_8->curr.top ? (unsigned long long)VAR_8->curr.top->top.dma : 0,
   VAR_8->cvbi ? (unsigned long long)VAR_8->cvbi->bottom.dma : 0,
   VAR_8->curr.bottom ? (unsigned long long)VAR_8->curr.bottom->bottom.dma : 0);

 VAR_10 = VAR_3;
 if (VAR_8->loop_irq) {
  VAR_10 |= VAR_2;
  VAR_10 |= (VAR_8->loop_irq & 0x0f) << 16;
  VAR_10 |= (~VAR_8->loop_irq & 0x0f) << 20;
 }
 if (VAR_8->curr.frame_irq || VAR_8->loop_irq || VAR_8->cvbi) {
  FUNC_7(&VAR_8->timeout, VAR_7+VAR_5);
 } else {
  FUNC_6(&VAR_8->timeout);
 }
 VAR_8->main.cpu[VAR_6] = FUNC_4(VAR_10);

 FUNC_1(VAR_11, ~0x0f, VAR_0);
 if (VAR_11) {
  if (VAR_8->dma_on)
   return;
  FUNC_3(VAR_8->main.dma, VAR_4);
  FUNC_2(3, VAR_1);
  VAR_8->dma_on = 1;
 } else {
  if (!VAR_8->dma_on)
   return;
  FUNC_0(~3, VAR_1);
  VAR_8->dma_on = 0;
 }
 return;
}
