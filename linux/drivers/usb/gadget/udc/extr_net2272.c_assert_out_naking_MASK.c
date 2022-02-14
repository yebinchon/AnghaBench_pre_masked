
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int name; } ;
struct net2272_ep {TYPE_2__ ep; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ,char const*,int) ;
 int FUNC_1 (struct net2272_ep*,int ) ;
 int FUNC_2 (struct net2272_ep*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net2272_ep *VAR_4, const char *VAR_5)
{
 u8 VAR_6;


 return;


 VAR_6 = FUNC_1(VAR_4, VAR_2);
 if ((VAR_6 & (1 << VAR_3)) == 0) {
  FUNC_0(VAR_4->dev->dev, "%s %s %02x !NAK\n",
   VAR_4->ep.name, VAR_5, VAR_6);
  FUNC_2(VAR_4, VAR_1, 1 << VAR_0);
 }
}
