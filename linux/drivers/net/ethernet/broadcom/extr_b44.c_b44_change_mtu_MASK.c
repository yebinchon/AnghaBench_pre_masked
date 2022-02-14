
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct b44 {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct b44*) ;
 int FUNC_2 (struct b44*,int ) ;
 int FUNC_3 (struct b44*) ;
 struct b44* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1, int VAR_2)
{
 struct b44 *VAR_3 = FUNC_4(VAR_1);

 if (!FUNC_5(VAR_1)) {



  VAR_1->mtu = VAR_2;
  return 0;
 }

 FUNC_6(&VAR_3->lock);
 FUNC_1(VAR_3);
 VAR_1->mtu = VAR_2;
 FUNC_3(VAR_3);
 FUNC_2(VAR_3, VAR_0);
 FUNC_7(&VAR_3->lock);

 FUNC_0(VAR_3);

 return 0;
}
