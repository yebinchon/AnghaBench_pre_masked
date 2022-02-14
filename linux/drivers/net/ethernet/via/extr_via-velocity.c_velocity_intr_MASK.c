
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct velocity_info {int lock; int napi; int mac_regs; } ;
struct net_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int *) ;
 struct velocity_info* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct velocity_info*,int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_6, void *VAR_7)
{
 struct net_device *VAR_8 = VAR_7;
 struct velocity_info *VAR_9 = FUNC_6(VAR_8);
 u32 VAR_10;

 FUNC_7(&VAR_9->lock);
 VAR_10 = FUNC_3(VAR_9->mac_regs);


 if (VAR_10 == 0) {
  FUNC_8(&VAR_9->lock);
  return VAR_1;
 }


 FUNC_4(VAR_9->mac_regs, VAR_10);

 if (FUNC_1(FUNC_5(&VAR_9->napi))) {
  FUNC_2(VAR_9->mac_regs);
  FUNC_0(&VAR_9->napi);
 }

 if (VAR_10 & (~(VAR_4 | VAR_2 | VAR_5 | VAR_3)))
  FUNC_9(VAR_9, VAR_10);

 FUNC_8(&VAR_9->lock);

 return VAR_0;
}
