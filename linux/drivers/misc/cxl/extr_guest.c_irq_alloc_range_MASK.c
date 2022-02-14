
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_avail {int range; int offset; int bitmap; } ;
struct cxl {TYPE_1__* guest; } ;
struct TYPE_2__ {int irq_nranges; struct irq_avail* irq_avail; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ,int,int ) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct cxl *VAR_1, int VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;
 struct irq_avail *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_1->guest->irq_nranges; VAR_4++) {
  VAR_6 = &VAR_1->guest->irq_avail[VAR_4];
  VAR_5 = FUNC_0(VAR_6->bitmap, VAR_6->range,
     0, VAR_2, 0);
  if (VAR_5 < VAR_6->range) {
   FUNC_1(VAR_6->bitmap, VAR_5, VAR_2);
   *VAR_3 = VAR_6->offset + VAR_5;
   FUNC_2("guest: allocate IRQs %#x->%#x\n",
    *VAR_3, *VAR_3 + VAR_2 - 1);

   return 0;
  }
 }
 return -VAR_0;
}
