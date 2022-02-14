
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct meth_private {int dma_ctrl; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {unsigned long int_stat; } ;
struct TYPE_4__ {TYPE_1__ eth; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_0 (struct net_device*,unsigned long) ;
 int FUNC_1 (struct net_device*,unsigned long) ;
 int FUNC_2 (struct net_device*,unsigned long) ;
 struct meth_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct net_device *VAR_9 = (struct net_device *)VAR_8;
 struct meth_private *VAR_10 = FUNC_3(VAR_9);
 unsigned long VAR_11;

 VAR_11 = VAR_6->eth.int_stat;
 while (VAR_11 & 0xff) {




  if (VAR_11 & VAR_2) {
   FUNC_0(VAR_9, VAR_11);
  }
  if (VAR_11 & (VAR_4 | VAR_5)) {

   FUNC_2(VAR_9, VAR_11);
  }
  if (VAR_11 & VAR_3) {
   if (!(VAR_10->dma_ctrl & VAR_1))
    break;

   FUNC_1(VAR_9, VAR_11);
  }
  VAR_11 = VAR_6->eth.int_stat;
 }

 return VAR_0;
}
