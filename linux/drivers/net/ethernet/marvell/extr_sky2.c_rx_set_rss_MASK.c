
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sky2_port {size_t port; struct sky2_hw* hw; } ;
struct sky2_hw {int flags; } ;
struct net_device {int dummy; } ;
typedef int rss_key ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (size_t,scalar_t__) ;
 struct sky2_port* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,int) ;
 int * VAR_10 ;
 int FUNC_4 (struct sky2_hw*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_11, netdev_features_t VAR_12)
{
 struct sky2_port *VAR_13 = FUNC_2(VAR_11);
 struct sky2_hw *VAR_14 = VAR_13->hw;
 int VAR_15, VAR_16 = 4;


 if (VAR_14->flags & VAR_9) {
  VAR_16 = 10;
  FUNC_4(VAR_14, FUNC_1(VAR_13->port, VAR_5), VAR_2);
 }


 if (VAR_12 & VAR_3) {
  u32 VAR_17[10];

  FUNC_3(VAR_17, sizeof(VAR_17));
  for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++)
   FUNC_4(VAR_14, FUNC_1(VAR_13->port, VAR_6 + VAR_15 * 4),
         VAR_17[VAR_15]);


  FUNC_4(VAR_14, FUNC_1(VAR_13->port, VAR_7),
        VAR_8);

  FUNC_4(VAR_14, FUNC_0(VAR_10[VAR_13->port], VAR_4),
        VAR_1);
 } else
  FUNC_4(VAR_14, FUNC_0(VAR_10[VAR_13->port], VAR_4),
        VAR_0);
}
