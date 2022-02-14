
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int* dev_addr; } ;
struct jme_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct jme_adapter*,int ,int) ;
 struct jme_adapter* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_2)
{
 struct jme_adapter *VAR_3 = FUNC_1(VAR_2);
 u32 VAR_4;

 VAR_4 = (VAR_2->dev_addr[3] & 0xff) << 24 |
       (VAR_2->dev_addr[2] & 0xff) << 16 |
       (VAR_2->dev_addr[1] & 0xff) << 8 |
       (VAR_2->dev_addr[0] & 0xff);
 FUNC_0(VAR_3, VAR_1, VAR_4);
 VAR_4 = (VAR_2->dev_addr[5] & 0xff) << 8 |
       (VAR_2->dev_addr[4] & 0xff);
 FUNC_0(VAR_3, VAR_0, VAR_4);
}
