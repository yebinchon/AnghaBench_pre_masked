
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * function; } ;
struct tlan_priv {TYPE_1__ timer; TYPE_1__ media_timer; } ;
struct net_device {scalar_t__ base_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct tlan_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct tlan_priv *VAR_4 = FUNC_1(VAR_3);

 FUNC_0(&VAR_4->media_timer);
 FUNC_3(VAR_3, VAR_2);
 FUNC_2(VAR_0, VAR_3->base_addr + VAR_1);

 FUNC_4(VAR_3);
 if (VAR_4->timer.function != ((void*)0)) {
  FUNC_0(&VAR_4->timer);
  VAR_4->timer.function = ((void*)0);
 }
}
