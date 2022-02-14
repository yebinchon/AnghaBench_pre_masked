
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct nps_enet_priv {scalar_t__ regs_base; } ;
struct net_device {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (unsigned long,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int*,int) ;
 int FUNC_2 (int *,int*,int) ;
 struct nps_enet_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct nps_enet_priv*,scalar_t__) ;
 int FUNC_5 (int,int*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1,
      unsigned char *VAR_2, u32 VAR_3)
{
 struct nps_enet_priv *VAR_4 = FUNC_3(VAR_1);
 s32 VAR_5, VAR_6 = VAR_3 & (sizeof(u32) - 1);
 u32 *VAR_7 = (u32 *)VAR_2, VAR_8 = VAR_3 / sizeof(u32);
 bool VAR_9 = FUNC_0((unsigned long)VAR_2, sizeof(u32));


 if (VAR_9) {
  FUNC_1(VAR_4->regs_base + VAR_0, VAR_7, VAR_8);
  VAR_7 += VAR_8;
 } else {
  for (VAR_5 = 0; VAR_5 < VAR_8; VAR_5++, VAR_7++) {
   u32 VAR_10 = FUNC_4(VAR_4, VAR_0);

   FUNC_5(VAR_10, VAR_7);
  }
 }

 if (VAR_6) {
  u32 VAR_11;

  FUNC_1(VAR_4->regs_base + VAR_0, &VAR_11, 1);
  FUNC_2((u8 *)VAR_7, &VAR_11, VAR_6);
 }
}
