
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct ftgmac100 {TYPE_1__* netdev; int dev; scalar_t__ base; } ;
struct TYPE_2__ {unsigned int* dev_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,unsigned int*) ;
 void* FUNC_1 (int ,unsigned int*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (unsigned int*,unsigned int*) ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct ftgmac100 *VAR_3)
{
 u8 VAR_4[VAR_0];
 unsigned int VAR_5;
 unsigned int VAR_6;
 void *VAR_7;

 VAR_7 = FUNC_1(VAR_3->dev, VAR_4, VAR_0);
 if (VAR_7) {
  FUNC_3(VAR_3->netdev->dev_addr, VAR_4);
  FUNC_0(VAR_3->dev, "Read MAC address %pM from device tree\n",
    VAR_4);
  return;
 }

 VAR_5 = FUNC_4(VAR_3->base + VAR_2);
 VAR_6 = FUNC_4(VAR_3->base + VAR_1);

 VAR_4[0] = (VAR_5 >> 8) & 0xff;
 VAR_4[1] = VAR_5 & 0xff;
 VAR_4[2] = (VAR_6 >> 24) & 0xff;
 VAR_4[3] = (VAR_6 >> 16) & 0xff;
 VAR_4[4] = (VAR_6 >> 8) & 0xff;
 VAR_4[5] = VAR_6 & 0xff;

 if (FUNC_5(VAR_4)) {
  FUNC_3(VAR_3->netdev->dev_addr, VAR_4);
  FUNC_0(VAR_3->dev, "Read MAC address %pM from chip\n", VAR_4);
 } else {
  FUNC_2(VAR_3->netdev);
  FUNC_0(VAR_3->dev, "Generated random MAC address %pM\n",
    VAR_3->netdev->dev_addr);
 }
}
