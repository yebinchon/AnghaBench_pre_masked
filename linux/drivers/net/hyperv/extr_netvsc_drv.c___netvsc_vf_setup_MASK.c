
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int,int *) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (struct net_device*) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_1,
         struct net_device *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_3(VAR_2, VAR_1->mtu);
 if (VAR_3)
  FUNC_5(VAR_2,
       "unable to change mtu to %u\n", VAR_1->mtu);


 FUNC_0(VAR_2, VAR_1->flags | VAR_0, ((void*)0));


 FUNC_6(VAR_1);
 FUNC_4(VAR_2, VAR_1);
 FUNC_1(VAR_2, VAR_1);
 FUNC_7(VAR_1);

 if (FUNC_8(VAR_1)) {
  VAR_3 = FUNC_2(VAR_2, ((void*)0));
  if (VAR_3)
   FUNC_5(VAR_2,
        "unable to open: %d\n", VAR_3);
 }
}
