
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cb710_slot {int dummy; } ;
struct cb710_mmc_reader {int irq_lock; } ;


 int FUNC_0 (struct cb710_slot*,unsigned short,unsigned short) ;
 int FUNC_1 (struct cb710_slot*) ;
 struct cb710_mmc_reader* FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct cb710_slot *VAR_0,
 unsigned short VAR_1, unsigned short VAR_2)
{
 struct cb710_mmc_reader *VAR_3 = FUNC_2(FUNC_1(VAR_0));
 unsigned long VAR_4;

 FUNC_3(&VAR_3->irq_lock, VAR_4);

 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_4(&VAR_3->irq_lock, VAR_4);
}
