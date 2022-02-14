
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ctrlmode; } ;
struct ifi_canfd_priv {scalar_t__ base; TYPE_1__ can; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ifi_canfd_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_12, bool VAR_13)
{
 struct ifi_canfd_priv *VAR_14 = FUNC_0(VAR_12);
 u32 VAR_15 = 0;

 if (VAR_13) {
  VAR_15 = VAR_11 |
   VAR_6 |
   VAR_4 |
   VAR_5 |
   VAR_3;
  if (VAR_14->can.ctrlmode & VAR_0)
   VAR_15 |= VAR_1;
 }

 FUNC_1(VAR_7 |
        VAR_9 |
        VAR_10 |
        VAR_8 | VAR_15,
        VAR_14->base + VAR_2);
}
