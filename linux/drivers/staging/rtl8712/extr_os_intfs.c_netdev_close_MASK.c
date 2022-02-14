
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_2__ {int (* LedControlHandler ) (struct _adapter*,int ) ;} ;
struct _adapter {TYPE_1__ ledpriv; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct _adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct _adapter*) ;
 int FUNC_5 (struct _adapter*) ;
 int FUNC_6 (struct _adapter*) ;
 int FUNC_7 (struct _adapter*) ;
 int FUNC_8 (struct _adapter*,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_1)
{
 struct _adapter *VAR_2 = FUNC_1(VAR_1);


 VAR_2->ledpriv.LedControlHandler(VAR_2, VAR_0);
 FUNC_0(200);


 if (VAR_1) {
  if (!FUNC_2(VAR_1))
   FUNC_3(VAR_1);
 }


 FUNC_4(VAR_2);

 FUNC_7(VAR_2);

 FUNC_5(VAR_2);

 FUNC_6(VAR_2);
 return 0;
}
