
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00_dev {int irqmask_lock; int txstatus_fifo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct rt2x00_dev*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct rt2x00_dev *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4;
 FUNC_4(&VAR_2->irqmask_lock, VAR_4);

 while (!FUNC_0(&VAR_2->txstatus_fifo)) {
  VAR_3 = FUNC_3(VAR_2, VAR_0);
  if (!FUNC_2(VAR_3, VAR_1))
   break;

  FUNC_1(&VAR_2->txstatus_fifo, VAR_3);
 }

 FUNC_5(&VAR_2->irqmask_lock, VAR_4);
}
