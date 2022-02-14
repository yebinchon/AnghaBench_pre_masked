
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct station_parameters {int sta_flags_set; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {scalar_t__ bss_type; struct station_parameters* sta_params; int media_connected; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mwifiex_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct mwifiex_private*,int const*,int ) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_4, struct net_device *VAR_5,
    const u8 *VAR_6,
    struct station_parameters *VAR_7)
{
 int VAR_8;
 struct mwifiex_private *VAR_9 = FUNC_1(VAR_5);


 if (!(VAR_7->sta_flags_set & FUNC_0(VAR_3)))
  return -VAR_0;


 if ((VAR_9->bss_type != VAR_1) || !VAR_9->media_connected)
  return -VAR_0;

 VAR_9->sta_params = VAR_7;

 VAR_8 = FUNC_2(VAR_9, VAR_6, VAR_2);
 VAR_9->sta_params = ((void*)0);

 return VAR_8;
}
