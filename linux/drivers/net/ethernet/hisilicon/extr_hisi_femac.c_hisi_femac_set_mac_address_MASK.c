
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct net_device {int dev_addr; int addr_assign_type; int addr_len; } ;
struct hisi_femac_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hisi_femac_priv*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct hisi_femac_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2, void *VAR_3)
{
 struct hisi_femac_priv *VAR_4 = FUNC_3(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;

 if (!FUNC_1(VAR_5->sa_data))
  return -VAR_0;

 FUNC_2(VAR_2->dev_addr, VAR_5->sa_data, VAR_2->addr_len);
 VAR_2->addr_assign_type &= ~VAR_1;

 FUNC_0(VAR_4, VAR_2->dev_addr);

 return 0;
}
