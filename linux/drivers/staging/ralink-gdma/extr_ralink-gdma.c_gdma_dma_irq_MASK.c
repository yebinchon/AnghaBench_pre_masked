
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gdma_dma_dev {int task; scalar_t__ chan_issued; int cnt; int * chan; TYPE_1__* data; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int done_int_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gdma_dma_dev*,int *) ;
 int FUNC_2 (struct gdma_dma_dev*,int) ;
 int FUNC_3 (struct gdma_dma_dev*,int,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct gdma_dma_dev *VAR_4 = VAR_3;
 u32 VAR_5, VAR_6;
 unsigned int VAR_7;

 VAR_6 = VAR_4->data->done_int_reg;
 VAR_5 = FUNC_2(VAR_4, VAR_6);
 if (FUNC_5(!VAR_5))
  return VAR_1;


 FUNC_3(VAR_4, VAR_6, VAR_5);

 VAR_7 = 0;
 while (VAR_5) {
  if (VAR_5 & 0x1) {
   FUNC_1(VAR_4, &VAR_4->chan[VAR_7]);
   FUNC_0(&VAR_4->cnt);
  }
  VAR_5 >>= 1;
  VAR_7++;
 }


 if (VAR_4->chan_issued)
  FUNC_4(&VAR_4->task);

 return VAR_0;
}
