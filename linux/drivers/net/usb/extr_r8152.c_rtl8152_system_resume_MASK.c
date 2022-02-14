
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* up ) (struct r8152*) ;} ;
struct r8152 {int intr_urb; int flags; TYPE_1__ rtl_ops; struct net_device* netdev; } ;
struct net_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct r8152*) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct r8152 *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->netdev;

 FUNC_1(VAR_4);

 if (FUNC_2(VAR_4) && VAR_4->flags & VAR_1) {
  VAR_3->rtl_ops.up(VAR_3);
  FUNC_0(VAR_4);
  FUNC_3(VAR_2, &VAR_3->flags);
  FUNC_5(VAR_3->intr_urb, VAR_0);
 }

 return 0;
}
