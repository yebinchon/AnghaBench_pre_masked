
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct ifi_canfd_priv {scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct ifi_canfd_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, int VAR_4)
{
 struct ifi_canfd_priv *VAR_5 = FUNC_3(VAR_3);
 u32 VAR_6 = 0;
 u32 VAR_7;

 VAR_7 = FUNC_4(VAR_5->base + VAR_1);
 if (VAR_7 & VAR_2) {
  FUNC_2(VAR_3, "No messages in RX FIFO\n");
  return 0;
 }

 for (;;) {
  if (VAR_7 & VAR_2)
   break;
  if (VAR_4 <= 0)
   break;

  FUNC_1(VAR_3);
  VAR_4--;
  VAR_6++;
  VAR_7 = FUNC_4(VAR_5->base + VAR_1);
 }

 if (VAR_6)
  FUNC_0(VAR_3, VAR_0);

 return VAR_6;
}
