
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_private {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;
 struct mwifiex_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*,int *,int *,int ,int,int const*,int) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_3, struct net_device *VAR_4,
    u8 VAR_5, bool VAR_6, const u8 *VAR_7)
{
 struct mwifiex_private *VAR_8 = FUNC_1(VAR_4);
 static const u8 VAR_9[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff};
 const u8 *VAR_10 = VAR_6 ? VAR_7 : VAR_9;

 if (FUNC_2(VAR_8, ((void*)0), ((void*)0), 0, VAR_5, VAR_10, 1)) {
  FUNC_0(VAR_8->adapter, VAR_1, "deleting the crypto keys\n");
  return -VAR_0;
 }

 FUNC_0(VAR_8->adapter, VAR_2, "info: crypto keys deleted\n");
 return 0;
}
