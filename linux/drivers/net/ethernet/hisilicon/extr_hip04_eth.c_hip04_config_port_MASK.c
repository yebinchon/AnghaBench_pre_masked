
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct net_device {int dummy; } ;
struct hip04_priv {int phy_mode; scalar_t__ base; void* duplex; void* speed; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;


 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 struct hip04_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (void*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_13, u32 VAR_14, u32 VAR_15)
{
 struct hip04_priv *VAR_16 = FUNC_0(VAR_13);
 u32 VAR_17;

 VAR_16->speed = VAR_14;
 VAR_16->duplex = VAR_15;

 switch (VAR_16->phy_mode) {
 case 128:
  if (VAR_14 == VAR_12)
   VAR_17 = VAR_10;
  else if (VAR_14 == VAR_11)
   VAR_17 = VAR_9;
  else
   VAR_17 = VAR_8;
  break;
 case 129:
  if (VAR_14 == VAR_11)
   VAR_17 = VAR_7;
  else
   VAR_17 = VAR_6;
  break;
 default:
  FUNC_1(VAR_13, "not supported mode\n");
  VAR_17 = VAR_6;
  break;
 }
 FUNC_2(VAR_17, VAR_16->base + VAR_5);

 VAR_17 = VAR_15 ? VAR_0 : VAR_1;
 FUNC_2(VAR_17, VAR_16->base + VAR_2);

 VAR_17 = VAR_3;
 FUNC_2(VAR_17, VAR_16->base + VAR_4);
}
