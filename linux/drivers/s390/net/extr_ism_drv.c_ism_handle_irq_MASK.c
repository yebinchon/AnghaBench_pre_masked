
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ism_dev {int lock; TYPE_1__* sba; int smcd; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ e; scalar_t__* dmbe_mask; scalar_t__ s; int * dmb_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,unsigned long*) ;
 unsigned long FUNC_2 (unsigned long*,unsigned long,unsigned long) ;
 int FUNC_3 (struct ism_dev*) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct ism_dev *VAR_6 = VAR_5;
 unsigned long VAR_7, VAR_8;
 unsigned long *VAR_9;

 VAR_9 = (void *) &VAR_6->sba->dmb_bits[VAR_3];
 VAR_8 = sizeof(VAR_6->sba->dmb_bits) * VAR_0 - VAR_2;

 FUNC_5(&VAR_6->lock);
 VAR_6->sba->s = 0;
 FUNC_0();
 for (VAR_7 = 0;;) {
  VAR_7 = FUNC_2(VAR_9, VAR_8, VAR_7);
  if (VAR_7 >= VAR_8)
   break;

  FUNC_1(VAR_7, VAR_9);
  VAR_6->sba->dmbe_mask[VAR_7 + VAR_2] = 0;
  FUNC_0();
  FUNC_4(VAR_6->smcd, VAR_7 + VAR_2);
 }

 if (VAR_6->sba->e) {
  VAR_6->sba->e = 0;
  FUNC_0();
  FUNC_3(VAR_6);
 }
 FUNC_6(&VAR_6->lock);
 return VAR_1;
}
