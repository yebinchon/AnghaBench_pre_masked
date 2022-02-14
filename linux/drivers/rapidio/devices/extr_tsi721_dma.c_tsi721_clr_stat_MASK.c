
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct tsi721_bdma_chan {int sts_rdptr; int sts_size; scalar_t__ regs; scalar_t__* sts_base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct tsi721_bdma_chan *VAR_1)
{
 u32 VAR_2;
 u64 *VAR_3;
 int VAR_4, VAR_5;


 VAR_2 = VAR_1->sts_rdptr;
 VAR_3 = VAR_1->sts_base;
 VAR_5 = VAR_2 * 8;
 while (VAR_3[VAR_5]) {
  for (VAR_4 = 0; VAR_4 < 8 && VAR_3[VAR_5]; VAR_4++, VAR_5++)
   VAR_3[VAR_5] = 0;

  ++VAR_2;
  VAR_2 %= VAR_1->sts_size;
  VAR_5 = VAR_2 * 8;
 }

 FUNC_0(VAR_2, VAR_1->regs + VAR_0);
 VAR_1->sts_rdptr = VAR_2;
}
