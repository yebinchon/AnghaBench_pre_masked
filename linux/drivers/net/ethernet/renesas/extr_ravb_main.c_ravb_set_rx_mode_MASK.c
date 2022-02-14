
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ravb_private {int lock; } ;
struct net_device {long flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct ravb_private *VAR_4 = FUNC_0(VAR_3);
 unsigned long VAR_5;

 FUNC_2(&VAR_4->lock, VAR_5);
 FUNC_1(VAR_3, VAR_0, VAR_1,
      VAR_3->flags & VAR_2 ? VAR_1 : 0);
 FUNC_3(&VAR_4->lock, VAR_5);
}
