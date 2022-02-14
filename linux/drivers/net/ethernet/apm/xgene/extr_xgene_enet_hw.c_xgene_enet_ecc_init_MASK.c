
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct xgene_enet_pdata {struct net_device* ndev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct xgene_enet_pdata*,int ,int*) ;
 int FUNC_3 (struct xgene_enet_pdata*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct xgene_enet_pdata *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->ndev;
 u32 VAR_5;
 u8 VAR_6 = 10;

 FUNC_3(VAR_3, VAR_1, 0x0);
 do {
  FUNC_1(100, 110);
  FUNC_2(VAR_3, VAR_0, &VAR_5);
 } while ((VAR_5 != 0xffffffff) && VAR_6--);

 if (VAR_5 != 0xffffffff) {
  FUNC_0(VAR_4, "Failed to release memory from shutdown\n");
  return -VAR_2;
 }

 return 0;
}
