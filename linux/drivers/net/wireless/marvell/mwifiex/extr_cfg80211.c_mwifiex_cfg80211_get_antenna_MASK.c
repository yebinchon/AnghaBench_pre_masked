
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wiphy {int dummy; } ;
struct mwifiex_private {int rx_ant; int tx_ant; } ;
struct mwifiex_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mwifiex_adapter* FUNC_0 (struct wiphy*) ;
 struct mwifiex_private* FUNC_1 (struct mwifiex_adapter*,int ) ;
 int FUNC_2 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int
FUNC_3(struct wiphy *VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct mwifiex_adapter *VAR_6 = FUNC_0(VAR_3);
 struct mwifiex_private *VAR_7 = FUNC_1(VAR_6,
       VAR_2);
 FUNC_2(VAR_7, VAR_1,
    VAR_0, 0, ((void*)0), 1);

 *VAR_4 = VAR_7->tx_ant;
 *VAR_5 = VAR_7->rx_ant;

 return 0;
}
