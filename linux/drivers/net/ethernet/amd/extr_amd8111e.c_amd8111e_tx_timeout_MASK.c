
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct amd8111e_priv {int lock; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct amd8111e_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0)
{
 struct amd8111e_priv *VAR_1 = FUNC_2(VAR_0);
 int VAR_2;

 FUNC_1(VAR_0, "transmit timed out, resetting\n");

 FUNC_4(&VAR_1->lock);
 VAR_2 = FUNC_0(VAR_0);
 FUNC_5(&VAR_1->lock);
 if(!VAR_2)
  FUNC_3(VAR_0);
}
