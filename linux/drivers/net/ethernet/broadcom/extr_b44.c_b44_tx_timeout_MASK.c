
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct b44 {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*,int ) ;
 int FUNC_3 (struct b44*) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct b44* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1)
{
 struct b44 *VAR_2 = FUNC_5(VAR_1);

 FUNC_4(VAR_1, "transmit timed out, resetting\n");

 FUNC_7(&VAR_2->lock);

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 FUNC_2(VAR_2, VAR_0);

 FUNC_8(&VAR_2->lock);

 FUNC_0(VAR_2);

 FUNC_6(VAR_1);
}
