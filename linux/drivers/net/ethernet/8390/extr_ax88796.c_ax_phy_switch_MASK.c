
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ei_device {scalar_t__ mem; } ;
struct ax_device {TYPE_1__* plat; } ;
struct TYPE_2__ {int gpoc_val; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 struct ei_device* FUNC_2 (struct net_device*) ;
 struct ax_device* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, int VAR_2)
{
 struct ei_device *VAR_3 = FUNC_2(VAR_1);
 struct ax_device *VAR_4 = FUNC_3(VAR_1);

 u8 VAR_5 = VAR_4->plat->gpoc_val;

 if (!!VAR_2)
  VAR_5 &= ~VAR_0;
 else
  VAR_5 |= VAR_0;

 FUNC_1(VAR_5, VAR_3->mem + FUNC_0(0x17));
}
