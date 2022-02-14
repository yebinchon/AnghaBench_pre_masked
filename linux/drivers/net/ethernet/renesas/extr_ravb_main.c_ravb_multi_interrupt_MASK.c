
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
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct ravb_private *VAR_9 = FUNC_0(VAR_8);
 irqreturn_t VAR_10 = VAR_1;
 u32 VAR_11;

 FUNC_5(&VAR_9->lock);

 VAR_11 = FUNC_3(VAR_8, VAR_2);


 if ((VAR_11 & VAR_5) && FUNC_4(VAR_8))
  VAR_10 = VAR_0;


 if (VAR_11 & VAR_4) {
  FUNC_1(VAR_8);
  VAR_10 = VAR_0;
 }


 if (VAR_11 & VAR_3) {
  FUNC_2(VAR_8);
  VAR_10 = VAR_0;
 }

 FUNC_6(&VAR_9->lock);
 return VAR_10;
}
