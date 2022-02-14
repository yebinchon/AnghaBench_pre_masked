
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dma; void** cpu; } ;
struct TYPE_3__ {int nr; } ;
struct bttv {TYPE_2__ main; TYPE_1__ c; } ;
struct btcx_riscmem {unsigned long dma; void** jmp; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,int ,struct btcx_riscmem*,int,...) ;

int
FUNC_2(struct bttv *VAR_2, int VAR_3, struct btcx_riscmem *VAR_4,
        int VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7 = VAR_2->main.dma + ((VAR_3+2) << 2);

 if (((void*)0) == VAR_4) {
  FUNC_1("%d: risc=%p slot[%d]=NULL\n", VAR_2->c.nr, VAR_4, VAR_3);
  VAR_2->main.cpu[VAR_3+1] = FUNC_0(VAR_7);
 } else {
  FUNC_1("%d: risc=%p slot[%d]=%08llx irq=%d\n",
    VAR_2->c.nr, VAR_4, VAR_3,
    (unsigned long long)VAR_4->dma, VAR_5);
  VAR_6 = VAR_1;
  if (VAR_5) {
   VAR_6 |= VAR_0;
   VAR_6 |= (VAR_5 & 0x0f) << 16;
   VAR_6 |= (~VAR_5 & 0x0f) << 20;
  }
  VAR_4->jmp[0] = FUNC_0(VAR_6);
  VAR_4->jmp[1] = FUNC_0(VAR_7);
  VAR_2->main.cpu[VAR_3+1] = FUNC_0(VAR_4->dma);
 }
 return 0;
}
