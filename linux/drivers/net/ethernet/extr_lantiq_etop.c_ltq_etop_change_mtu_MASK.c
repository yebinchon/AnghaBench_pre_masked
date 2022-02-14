
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; } ;
struct ltq_etop_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 struct ltq_etop_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct net_device *VAR_2, int VAR_3)
{
 struct ltq_etop_priv *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 VAR_2->mtu = VAR_3;

 FUNC_2(&VAR_4->lock, VAR_5);
 FUNC_0((VAR_0 << 16) | VAR_3, VAR_1);
 FUNC_3(&VAR_4->lock, VAR_5);

 return 0;
}
