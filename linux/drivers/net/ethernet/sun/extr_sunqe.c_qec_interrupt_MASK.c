
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sunqec {struct sunqe** qes; scalar_t__ gregs; } ;
struct sunqe {int lock; scalar_t__ qcregs; int dev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct sunqe*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct sunqe*,int) ;
 int FUNC_4 (struct sunqe*) ;
 int FUNC_5 (struct sunqe*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 struct sunqec *VAR_9 = VAR_8;
 u32 VAR_10;
 int VAR_11 = 0;


 VAR_10 = FUNC_6(VAR_9->gregs + VAR_5);
 while (VAR_11 < 4) {
  if (VAR_10 & 0xf) {
   struct sunqe *VAR_12 = VAR_9->qes[VAR_11];
   u32 VAR_13;

   VAR_13 = FUNC_6(VAR_12->qcregs + VAR_0);
   if (VAR_13 & VAR_1) {
    if (FUNC_3(VAR_12, VAR_13))
     goto next;
   }
   if (VAR_13 & VAR_2)
    FUNC_4(VAR_12);
   if (FUNC_1(VAR_12->dev) &&
       (VAR_13 & VAR_3)) {
    FUNC_8(&VAR_12->lock);
    FUNC_5(VAR_12);
    if (FUNC_0(VAR_12) > 0) {



     FUNC_2(VAR_12->dev);
     FUNC_7(1, VAR_12->qcregs + VAR_4);
    }
    FUNC_9(&VAR_12->lock);
   }
 next:
   ;
  }
  VAR_10 >>= 4;
  VAR_11++;
 }

 return VAR_6;
}
