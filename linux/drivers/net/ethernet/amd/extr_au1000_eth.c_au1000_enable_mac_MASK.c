
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct au1000_private {int mac_enabled; int lock; int enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 struct au1000_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 struct au1000_private *VAR_7 = FUNC_1(VAR_4);

 FUNC_2(&VAR_7->lock, VAR_6);

 if (VAR_5 || (!VAR_7->mac_enabled)) {
  FUNC_5(VAR_0, VAR_7->enable);
  FUNC_4();
  FUNC_0(2);
  FUNC_5((VAR_1 | VAR_2 | VAR_3
    | VAR_0), VAR_7->enable);
  FUNC_4();
  FUNC_0(2);

  VAR_7->mac_enabled = 1;
 }

 FUNC_3(&VAR_7->lock, VAR_6);
}
