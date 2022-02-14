
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmmac_priv {int device; scalar_t__ ioaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int,int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct stmmac_priv *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_3 = FUNC_1(VAR_2->ioaddr + VAR_1);
 FUNC_3(VAR_3 | 0x01, VAR_2->ioaddr + VAR_1);




 VAR_4 = FUNC_2(VAR_2->ioaddr + VAR_1, VAR_3,
     !(VAR_3 & 0x01), 100, 100000);

 if (VAR_4) {
  FUNC_0(VAR_2->device, "EMAC reset timeout\n");
  return -VAR_0;
 }
 return 0;
}
