
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int sa_data; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int mac_addr; } ;
struct adapter {TYPE_1__ eeprompriv; int bup; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, void *VAR_2)
{
 struct adapter *VAR_3 = (struct adapter *)FUNC_1(VAR_1);
 struct sockaddr *VAR_4 = VAR_2;

 if (!VAR_3->bup)
  FUNC_0(VAR_3->eeprompriv.mac_addr, VAR_4->sa_data, VAR_0);

 return 0;
}
