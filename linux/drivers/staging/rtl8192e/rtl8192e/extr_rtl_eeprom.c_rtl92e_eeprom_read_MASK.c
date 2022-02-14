
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct r8192_priv {scalar_t__ epromtype; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int,int) ;
 int FUNC_1 (struct net_device*,int ,int) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

u32 FUNC_4(struct net_device *VAR_6, u32 VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_2(VAR_6);
 u32 VAR_9 = 0;

 FUNC_1(VAR_6, VAR_1,
        (VAR_4 << VAR_3));
 FUNC_3(VAR_5);


 if (VAR_8->epromtype == VAR_0)
  VAR_9 = FUNC_0(VAR_6, (VAR_7 & 0xFF) | (0x6 << 8), 11);
 else
  VAR_9 = FUNC_0(VAR_6, (VAR_7 & 0x3F) | (0x6 << 6), 9);

 FUNC_1(VAR_6, VAR_1,
        (VAR_2<<VAR_3));
 return VAR_9;
}
