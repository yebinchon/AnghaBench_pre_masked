
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u8 ;
struct aac_dev {unsigned long OIMR; TYPE_2__* queues; TYPE_1__* IndexRegs; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {int ODR; int OISR; } ;
struct TYPE_5__ {int * queue; } ;
struct TYPE_4__ {int * Mailbox; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct aac_dev*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (struct aac_dev*,int ) ;
 unsigned long FUNC_6 (struct aac_dev*,int ) ;
 int FUNC_7 (struct aac_dev*,int ,unsigned long) ;
 scalar_t__ FUNC_8 (unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_13, void *VAR_14)
{
 struct aac_dev *VAR_15 = VAR_14;
 unsigned long VAR_16;
 u8 VAR_17 = FUNC_5(VAR_15, VAR_11.OISR);







 if (FUNC_3(VAR_17 & ~(VAR_15->OIMR))) {
  VAR_16 = FUNC_6(VAR_15, VAR_12);
  if (FUNC_8(VAR_16 & VAR_5)) {
   FUNC_1(VAR_15, FUNC_4 (&VAR_15->IndexRegs->Mailbox[5]));
   FUNC_7(VAR_15, VAR_11.ODR,VAR_5);
   FUNC_7(VAR_15, VAR_10,VAR_4);
  }
  else if (FUNC_8(VAR_16 & VAR_1)) {
   FUNC_7(VAR_15, VAR_11.ODR, VAR_1);
   FUNC_0(&VAR_15->queues->queue[VAR_6]);
  }
  else if (FUNC_3(VAR_16 & VAR_3)) {
   FUNC_7(VAR_15, VAR_11.ODR,VAR_3);
   FUNC_2(&VAR_15->queues->queue[VAR_7]);
  }
  else if (FUNC_8(VAR_16 & VAR_0)) {
   FUNC_7(VAR_15, VAR_11.ODR, VAR_0);
  }
  else if (FUNC_8(VAR_16 & VAR_2)) {
   FUNC_7(VAR_15, VAR_11.ODR, VAR_0);
   FUNC_7(VAR_15, VAR_11.ODR, VAR_2);
  }
  return VAR_8;
 }
 return VAR_9;
}
