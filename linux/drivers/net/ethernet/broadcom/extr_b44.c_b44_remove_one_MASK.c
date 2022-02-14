
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int bus; } ;
struct net_device {int dummy; } ;
struct b44 {int flags; int napi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct b44*) ;
 int FUNC_1 (struct net_device*) ;
 struct b44* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ssb_device*,int ) ;
 struct net_device* FUNC_6 (struct ssb_device*) ;
 int FUNC_7 (struct ssb_device*,int ) ;
 int FUNC_8 (struct ssb_device*,int *) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static void FUNC_10(struct ssb_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_6(VAR_2);
 struct b44 *VAR_4 = FUNC_2(VAR_3);

 FUNC_9(VAR_3);
 if (VAR_4->flags & VAR_0)
  FUNC_0(VAR_4);
 FUNC_5(VAR_2, 0);
 FUNC_4(VAR_2->bus);
 FUNC_3(&VAR_4->napi);
 FUNC_1(VAR_3);
 FUNC_7(VAR_2, VAR_1);
 FUNC_8(VAR_2, ((void*)0));
}
