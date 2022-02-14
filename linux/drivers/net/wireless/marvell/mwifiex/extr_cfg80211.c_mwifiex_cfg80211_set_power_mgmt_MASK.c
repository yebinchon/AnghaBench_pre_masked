
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct mwifiex_private*,int*) ;
 struct mwifiex_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_1,
    struct net_device *VAR_2,
    bool VAR_3, int VAR_4)
{
 struct mwifiex_private *VAR_5 = FUNC_2(VAR_2);
 u32 VAR_6;

 if (VAR_4)
  FUNC_0(VAR_5->adapter, VAR_0,
       "info: ignore timeout value for IEEE Power Save\n");

 VAR_6 = VAR_3;

 return FUNC_1(VAR_5, &VAR_6);
}
