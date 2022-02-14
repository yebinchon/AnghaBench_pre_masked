
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int affinity; } ;
struct irq_desc {int lock; TYPE_1__ irq_common_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (unsigned int,int ,int ) ;
 unsigned int FUNC_2 (int) ;
 struct irq_desc* FUNC_3 (unsigned int) ;
 unsigned int VAR_2 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ,unsigned int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct irq_desc*,unsigned int) ;

__attribute__((used)) static void FUNC_10(int VAR_3)
{
 unsigned int VAR_4, VAR_5;
 struct irq_desc *VAR_6;
 unsigned long VAR_7;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = FUNC_3(VAR_5);

 if (!VAR_6)
  return;

 FUNC_4(&VAR_6->lock, VAR_7);
 VAR_4 = FUNC_6(VAR_0);
 VAR_4 = FUNC_1(VAR_4,
   VAR_6->irq_common_data.affinity, VAR_1);

 if (FUNC_8(VAR_4 >= VAR_2))
  VAR_4 = FUNC_0(VAR_6->irq_common_data.affinity,
    VAR_1);

 FUNC_7(VAR_0, VAR_4);


 FUNC_9(VAR_6, VAR_4);
 FUNC_5(&VAR_6->lock, VAR_7);
}
