
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct greth_private {int devlock; int napi; TYPE_1__* regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int control; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct greth_private*) ;
 int FUNC_2 (int *) ;
 struct greth_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct net_device *VAR_10 = VAR_9;
 struct greth_private *VAR_11;
 u32 VAR_12, VAR_13;
 irqreturn_t VAR_14 = VAR_7;

 VAR_11 = FUNC_3(VAR_10);

 FUNC_4(&VAR_11->devlock);


 VAR_12 = FUNC_0(VAR_11->regs->status);





 VAR_13 = FUNC_0(VAR_11->regs->control);


 if (((VAR_12 & (VAR_0 | VAR_1)) && (VAR_13 & VAR_4)) ||
     ((VAR_12 & (VAR_2 | VAR_3)) && (VAR_13 & VAR_5))) {
  VAR_14 = VAR_6;


  FUNC_1(VAR_11);
  FUNC_2(&VAR_11->napi);
 }

 FUNC_5(&VAR_11->devlock);

 return VAR_14;
}
