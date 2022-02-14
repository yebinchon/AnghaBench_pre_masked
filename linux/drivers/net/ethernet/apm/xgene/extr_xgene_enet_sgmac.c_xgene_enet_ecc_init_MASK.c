
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct xgene_enet_pdata {struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 (int,int) ;
 unsigned int FUNC_3 (struct xgene_enet_pdata*,int ) ;
 int FUNC_4 (struct xgene_enet_pdata*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct xgene_enet_pdata *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->ndev;
 u32 VAR_5, VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_3(VAR_3, VAR_1);
 VAR_5 = FUNC_3(VAR_3, VAR_0);

 if (!VAR_6 && VAR_5 == ~0U) {
  FUNC_0(VAR_4, "+ ecc_init done, skipping\n");
  return 0;
 }

 FUNC_4(VAR_3, VAR_1, 0);
 do {
  FUNC_2(100, 110);
  VAR_5 = FUNC_3(VAR_3, VAR_0);
  if (VAR_5 == ~0U)
   return 0;
 } while (++VAR_7 < 10);

 FUNC_1(VAR_4, "Failed to release memory from shutdown\n");
 return -VAR_2;
}
