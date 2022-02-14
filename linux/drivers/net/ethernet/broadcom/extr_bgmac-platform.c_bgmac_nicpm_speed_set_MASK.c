
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ nicpm_base; } ;
struct bgmac {TYPE_3__* net_dev; TYPE_1__ plat; } ;
struct TYPE_6__ {TYPE_2__* phydev; } ;
struct TYPE_5__ {int speed; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;



 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct bgmac* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_8)
{
 struct bgmac *VAR_9 = FUNC_2(VAR_8);
 u32 VAR_10;

 if (!VAR_9->plat.nicpm_base)
  return;


 FUNC_3(VAR_7,
        VAR_9->plat.nicpm_base + VAR_6);

 VAR_10 = VAR_1;
 switch (VAR_9->net_dev->phydev->speed) {
 default:
  FUNC_1(VAR_8, "Unsupported speed. Defaulting to 1000Mb\n");

 case 128:
  VAR_10 |= VAR_2 << VAR_5;
  break;
 case 129:
  VAR_10 |= VAR_3 << VAR_5;
  break;
 case 130:
  VAR_10 |= VAR_4 << VAR_5;
  break;
 }

 FUNC_3(VAR_10, VAR_9->plat.nicpm_base + VAR_0);

 FUNC_0(VAR_9->net_dev);
}
