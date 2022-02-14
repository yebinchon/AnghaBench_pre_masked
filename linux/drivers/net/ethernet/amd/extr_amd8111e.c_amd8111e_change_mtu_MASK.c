
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct amd8111e_priv {int lock; scalar_t__ mmio; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct amd8111e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, int VAR_3)
{
 struct amd8111e_priv *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (!FUNC_2(VAR_2)) {



  VAR_2->mtu = VAR_3;
  return 0;
 }

 FUNC_4(&VAR_4->lock);


 FUNC_6(VAR_1, VAR_4->mmio + VAR_0);

 VAR_2->mtu = VAR_3;

 VAR_5 = FUNC_0(VAR_2);
 FUNC_5(&VAR_4->lock);
 if(!VAR_5)
  FUNC_3(VAR_2);
 return VAR_5;
}
