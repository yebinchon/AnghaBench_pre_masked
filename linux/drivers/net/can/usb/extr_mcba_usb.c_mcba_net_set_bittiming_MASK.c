
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int bitrate; } ;
struct TYPE_4__ {TYPE_1__ bittiming; } ;
struct mcba_priv {TYPE_2__ can; } ;


 int FUNC_0 (struct mcba_priv*,int const) ;
 struct mcba_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct mcba_priv *VAR_1 = FUNC_1(VAR_0);
 const u16 VAR_2 = VAR_1->can.bittiming.bitrate / 1000;

 FUNC_0(VAR_1, VAR_2);

 return 0;
}
