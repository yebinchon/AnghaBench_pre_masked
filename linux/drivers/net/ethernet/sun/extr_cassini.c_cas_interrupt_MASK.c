
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct cas {int lock; int napi; scalar_t__ regs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_device*,struct cas*,int) ;
 int FUNC_1 (struct cas*) ;
 int FUNC_2 (struct cas*,int ,int ) ;
 int FUNC_3 (struct net_device*,struct cas*,int) ;
 int FUNC_4 (int *) ;
 struct cas* FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct cas *VAR_9 = FUNC_5(VAR_8);
 unsigned long VAR_10;
 u32 VAR_11 = FUNC_6(VAR_9->regs + VAR_5);

 if (VAR_11 == 0)
  return VAR_4;

 FUNC_7(&VAR_9->lock, VAR_10);
 if (VAR_11 & (VAR_1 | VAR_2)) {
  FUNC_3(VAR_8, VAR_9, VAR_11);
  VAR_11 &= ~(VAR_1 | VAR_2);
 }

 if (VAR_11 & VAR_0) {




  FUNC_2(VAR_9, 0, 0);

  VAR_11 &= ~VAR_0;
 }

 if (VAR_11)
  FUNC_0(VAR_8, VAR_9, VAR_11);
 FUNC_8(&VAR_9->lock, VAR_10);
 return VAR_3;
}
