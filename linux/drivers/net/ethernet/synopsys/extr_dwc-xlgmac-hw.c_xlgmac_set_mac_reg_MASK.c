
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct xlgmac_pdata {scalar_t__ mac_regs; int netdev; } ;
struct netdev_hw_addr {int * addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_1 (struct xlgmac_pdata*,int ,int ,char*,int *,unsigned int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct xlgmac_pdata *VAR_4,
          struct netdev_hw_addr *VAR_5,
          unsigned int *VAR_6)
{
 unsigned int VAR_7, VAR_8;
 u8 *VAR_9;

 VAR_8 = 0;
 VAR_7 = 0;

 if (VAR_5) {
  VAR_9 = (u8 *)&VAR_8;
  VAR_9[0] = VAR_5->addr[0];
  VAR_9[1] = VAR_5->addr[1];
  VAR_9[2] = VAR_5->addr[2];
  VAR_9[3] = VAR_5->addr[3];
  VAR_9 = (u8 *)&VAR_7;
  VAR_9[0] = VAR_5->addr[4];
  VAR_9[1] = VAR_5->addr[5];

  FUNC_1(VAR_4, VAR_3, VAR_4->netdev,
     "adding mac address %pM at %#x\n",
     VAR_5->addr, *VAR_6);

  VAR_7 = FUNC_0(VAR_7,
        VAR_1,
      VAR_0,
      1);
 }

 FUNC_2(VAR_7, VAR_4->mac_regs + *VAR_6);
 *VAR_6 += VAR_2;
 FUNC_2(VAR_8, VAR_4->mac_regs + *VAR_6);
 *VAR_6 += VAR_2;
}
