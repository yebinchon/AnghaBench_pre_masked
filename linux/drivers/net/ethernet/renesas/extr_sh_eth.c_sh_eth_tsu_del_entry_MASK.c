
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sh_eth_private {TYPE_1__* cd; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int tsu; } ;


 struct sh_eth_private* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int const*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, const u8 *VAR_1)
{
 struct sh_eth_private *VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4;

 if (!VAR_2->cd->tsu)
  return 0;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 if (VAR_3) {

  if (FUNC_1(VAR_0, VAR_3))
   goto done;


  VAR_4 = FUNC_2(VAR_0, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;
 }
done:
 return 0;
}
