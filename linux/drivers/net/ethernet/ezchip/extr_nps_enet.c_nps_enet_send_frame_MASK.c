
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {short len; scalar_t__ data; } ;
struct nps_enet_priv {scalar_t__ regs_base; } ;
struct net_device {int dummy; } ;


 scalar_t__ FUNC_0 (short,int) ;
 int FUNC_1 (unsigned long,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 short VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*,scalar_t__) ;
 struct nps_enet_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct nps_enet_priv*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5,
    struct sk_buff *VAR_6)
{
 struct nps_enet_priv *VAR_7 = FUNC_4(VAR_5);
 u32 VAR_8 = 0;
 short VAR_9 = VAR_6->len;
 u32 VAR_10, VAR_11 = FUNC_0(VAR_9, sizeof(u32));
 u32 *VAR_12 = (void *)VAR_6->data;
 bool VAR_13 = FUNC_1((unsigned long)VAR_12, sizeof(u32));


 if (VAR_13)
  FUNC_3(VAR_7->regs_base + VAR_1, VAR_12, VAR_11);
 else
  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++, VAR_12++)
   FUNC_5(VAR_7, VAR_1,
      FUNC_2(VAR_12));


 VAR_8 |= VAR_9 << VAR_4;

 VAR_8 |= VAR_0 << VAR_3;

 FUNC_5(VAR_7, VAR_2, VAR_8);
}
