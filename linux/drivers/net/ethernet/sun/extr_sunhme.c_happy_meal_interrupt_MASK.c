
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct happy_meal {int happy_lock; scalar_t__ gregs; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct happy_meal*,int) ;
 int FUNC_2 (struct happy_meal*) ;
 int FUNC_3 (struct happy_meal*,struct net_device*) ;
 int FUNC_4 (struct happy_meal*) ;
 int FUNC_5 (struct happy_meal*,scalar_t__) ;
 struct happy_meal* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct happy_meal *VAR_9 = FUNC_6(VAR_8);
 u32 VAR_10 = FUNC_5(VAR_9, VAR_9->gregs + VAR_0);

 FUNC_0(("happy_meal_interrupt: status=%08x ", VAR_10));

 FUNC_7(&VAR_9->happy_lock);

 if (VAR_10 & VAR_1) {
  FUNC_0(("ERRORS "));
  if (FUNC_1(VAR_9, VAR_10))
   goto out;
 }

 if (VAR_10 & VAR_2) {
  FUNC_0(("MIFIRQ "));
  FUNC_2(VAR_9);
 }

 if (VAR_10 & VAR_4) {
  FUNC_0(("TXALL "));
  FUNC_4(VAR_9);
 }

 if (VAR_10 & VAR_3) {
  FUNC_0(("RXTOHOST "));
  FUNC_3(VAR_9, VAR_8);
 }

 FUNC_0(("done\n"));
out:
 FUNC_8(&VAR_9->happy_lock);

 return VAR_5;
}
