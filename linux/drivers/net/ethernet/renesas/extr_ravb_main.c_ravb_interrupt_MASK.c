
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ravb_private {int lock; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int ) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_11, void *VAR_12)
{
 struct net_device *VAR_13 = VAR_12;
 struct ravb_private *VAR_14 = FUNC_0(VAR_13);
 irqreturn_t VAR_15 = VAR_1;
 u32 VAR_16;

 FUNC_7(&VAR_14->lock);

 VAR_16 = FUNC_5(VAR_13, VAR_2);


 if (VAR_16 & (VAR_5 | VAR_6 | VAR_8)) {
  int VAR_17;


  if (FUNC_6(VAR_13))
   VAR_15 = VAR_0;


  for (VAR_17 = VAR_10; VAR_17 >= VAR_9; VAR_17--) {
   if (FUNC_4(VAR_13, VAR_17))
    VAR_15 = VAR_0;
  }
 }


 if (VAR_16 & VAR_7) {
  FUNC_1(VAR_13);
  VAR_15 = VAR_0;
 }


 if (VAR_16 & VAR_4) {
  FUNC_2(VAR_13);
  VAR_15 = VAR_0;
 }


 if (VAR_16 & VAR_3) {
  FUNC_3(VAR_13);
  VAR_15 = VAR_0;
 }

 FUNC_8(&VAR_14->lock);
 return VAR_15;
}
