
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ipw2100_priv {TYPE_1__* net_dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int FUNC_1 (struct ipw2100_priv*,int ,int *,int*) ;
 int FUNC_2 (int ,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ipw2100_priv *VAR_3)
{
 u32 VAR_4 = VAR_1;
 u8 VAR_5[VAR_1];

 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_2, VAR_5, &VAR_4);
 if (VAR_6) {
  FUNC_0("MAC address read failed\n");
  return -VAR_0;
 }

 FUNC_2(VAR_3->net_dev->dev_addr, VAR_5, VAR_1);
 FUNC_0("card MAC is %pM\n", VAR_3->net_dev->dev_addr);

 return 0;
}
