
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nixge_priv {int dummy; } ;
struct net_device {int* dev_addr; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 struct nixge_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct nixge_priv*,int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct net_device *VAR_2)
{
 struct nixge_priv *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3, VAR_0,
        (VAR_2->dev_addr[2]) << 24 |
        (VAR_2->dev_addr[3] << 16) |
        (VAR_2->dev_addr[4] << 8) |
        (VAR_2->dev_addr[5] << 0));

 FUNC_1(VAR_3, VAR_1,
        (VAR_2->dev_addr[1] | (VAR_2->dev_addr[0] << 8)));

 return 0;
}
