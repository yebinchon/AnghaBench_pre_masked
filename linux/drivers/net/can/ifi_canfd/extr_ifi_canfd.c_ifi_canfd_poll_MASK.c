
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct napi_struct {struct net_device* dev; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct ifi_canfd_priv {TYPE_1__ can; scalar_t__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct net_device*,int) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct napi_struct*,int) ;
 struct ifi_canfd_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct napi_struct *VAR_4, int VAR_5)
{
 struct net_device *VAR_6 = VAR_4->dev;
 struct ifi_canfd_priv *VAR_7 = FUNC_6(VAR_6);
 u32 VAR_8 = FUNC_7(VAR_7->base + VAR_1);
 int VAR_9 = 0;


 VAR_9 += FUNC_3(VAR_6);


 if (VAR_8 & VAR_3)
  VAR_9 += FUNC_2(VAR_6);


 if (VAR_7->can.ctrlmode & VAR_0)
  VAR_9 += FUNC_1(VAR_6);


 if (!(VAR_8 & VAR_2))
  VAR_9 += FUNC_0(VAR_6, VAR_5 - VAR_9);

 if (VAR_9 < VAR_5) {
  FUNC_5(VAR_4, VAR_9);
  FUNC_4(VAR_6, 1);
 }

 return VAR_9;
}
