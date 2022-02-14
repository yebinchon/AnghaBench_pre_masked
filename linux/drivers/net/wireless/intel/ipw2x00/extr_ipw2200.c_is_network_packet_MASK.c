
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct libipw_hdr_4addr {int addr1; int addr2; int addr3; } ;
struct ipw_priv {TYPE_1__* net_dev; int bssid; TYPE_2__* ieee; } ;
struct TYPE_4__ {int iw_mode; } ;
struct TYPE_3__ {int dev_addr; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct ipw_priv *VAR_0,
        struct libipw_hdr_4addr *VAR_1)
{


 switch (VAR_0->ieee->iw_mode) {
 case 129:

  if (FUNC_0(VAR_1->addr2, VAR_0->net_dev->dev_addr))
   return 0;


  if (FUNC_1(VAR_1->addr1))
   return FUNC_0(VAR_1->addr3, VAR_0->bssid);


  return FUNC_0(VAR_1->addr1,
     VAR_0->net_dev->dev_addr);

 case 128:

  if (FUNC_0(VAR_1->addr3, VAR_0->net_dev->dev_addr))
   return 0;


  if (FUNC_1(VAR_1->addr1))
   return FUNC_0(VAR_1->addr2, VAR_0->bssid);


  return FUNC_0(VAR_1->addr1,
     VAR_0->net_dev->dev_addr);
 }

 return 1;
}
