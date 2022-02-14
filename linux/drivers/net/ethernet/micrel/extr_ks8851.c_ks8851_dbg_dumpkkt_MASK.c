
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ks8851_net {int netdev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ks8851_net *VAR_0, u8 *VAR_1)
{
 FUNC_0(VAR_0->netdev,
     "pkt %02x%02x%02x%02x %02x%02x%02x%02x %02x%02x%02x%02x\n",
     VAR_1[4], VAR_1[5], VAR_1[6], VAR_1[7],
     VAR_1[8], VAR_1[9], VAR_1[10], VAR_1[11],
     VAR_1[12], VAR_1[13], VAR_1[14], VAR_1[15]);
}
