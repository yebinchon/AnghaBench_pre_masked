
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dev_addr; } ;
struct gemini_ethernet_port {scalar_t__ gmac_base; } ;
typedef int addr ;
typedef int __le32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 struct gemini_ethernet_port* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4)
{
 struct gemini_ethernet_port *VAR_5 = FUNC_3(VAR_4);
 __le32 VAR_6[3];

 FUNC_2(VAR_6, 0, sizeof(VAR_6));
 FUNC_1(VAR_6, VAR_4->dev_addr, VAR_0);

 FUNC_4(FUNC_0(VAR_6[0]), VAR_5->gmac_base + VAR_1);
 FUNC_4(FUNC_0(VAR_6[1]), VAR_5->gmac_base + VAR_2);
 FUNC_4(FUNC_0(VAR_6[2]), VAR_5->gmac_base + VAR_3);
}
