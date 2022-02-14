
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct ifi_canfd_priv {TYPE_1__ can; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct net_device*,char*) ;
 struct ifi_canfd_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_9)
{
 struct ifi_canfd_priv *VAR_10 = FUNC_2(VAR_9);
 u32 VAR_11 = FUNC_3(VAR_10->base + VAR_4);
 int VAR_12 = 0;

 if ((VAR_11 & VAR_6) &&
     (VAR_10->can.state != VAR_1)) {
  FUNC_1(VAR_9, "Error, entered active state\n");
  VAR_12 += FUNC_0(VAR_9,
      VAR_1);
 }

 if ((VAR_11 & VAR_8) &&
     (VAR_10->can.state != VAR_3)) {
  FUNC_1(VAR_9, "Error, entered warning state\n");
  VAR_12 += FUNC_0(VAR_9,
      VAR_3);
 }

 if ((VAR_11 & VAR_7) &&
     (VAR_10->can.state != VAR_2)) {
  FUNC_1(VAR_9, "Error, entered passive state\n");
  VAR_12 += FUNC_0(VAR_9,
      VAR_2);
 }

 if ((VAR_11 & VAR_5) &&
     (VAR_10->can.state != VAR_0)) {
  FUNC_1(VAR_9, "Error, entered bus-off state\n");
  VAR_12 += FUNC_0(VAR_9,
      VAR_0);
 }

 return VAR_12;
}
