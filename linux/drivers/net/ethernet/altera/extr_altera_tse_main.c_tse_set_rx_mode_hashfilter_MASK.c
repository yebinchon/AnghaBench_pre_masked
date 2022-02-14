
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; } ;
struct altera_tse_private {int mac_cfg_lock; int mac_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 struct altera_tse_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_4)
{
 struct altera_tse_private *VAR_5 = FUNC_2(VAR_4);

 FUNC_3(&VAR_5->mac_cfg_lock);

 if (VAR_4->flags & VAR_1)
  FUNC_6(VAR_5->mac_dev, FUNC_5(VAR_3),
       VAR_2);

 if (VAR_4->flags & VAR_0)
  FUNC_1(VAR_4);
 else
  FUNC_0(VAR_4);

 FUNC_4(&VAR_5->mac_cfg_lock);
}
