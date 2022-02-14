
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct ltq_etop_priv {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 struct ltq_etop_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_4)
{
 struct ltq_etop_priv *VAR_5 = FUNC_1(VAR_4);
 unsigned long VAR_6;


 FUNC_2(&VAR_5->lock, VAR_6);
 if ((VAR_4->flags & VAR_2) || (VAR_4->flags & VAR_1))
  FUNC_0(VAR_0, 0, VAR_3);
 else
  FUNC_0(0, VAR_0, VAR_3);
 FUNC_3(&VAR_5->lock, VAR_6);
}
