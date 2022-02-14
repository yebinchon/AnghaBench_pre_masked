
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4ican_priv {scalar_t__ base; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_device*,char*) ;
 struct sun4ican_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_4)
{
 struct sun4ican_priv *VAR_5 = FUNC_1(VAR_4);
 int VAR_6 = VAR_1;
 u32 VAR_7 = 0;

 do {
  VAR_7 = FUNC_2(VAR_5->base + VAR_3);
  VAR_7 |= VAR_2;
  FUNC_3(VAR_7, VAR_5->base + VAR_3);
 } while (VAR_6-- && !(VAR_7 & VAR_2));

 if (!(FUNC_2(VAR_5->base + VAR_3) &
       VAR_2)) {
  FUNC_0(VAR_4, "setting controller into reset mode failed!\n");
  return -VAR_0;
 }

 return 0;
}
