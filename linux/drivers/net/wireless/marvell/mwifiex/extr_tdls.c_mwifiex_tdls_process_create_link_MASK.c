
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mwifiex_sta_node {scalar_t__ tdls_status; } ;
struct mwifiex_private {int adapter; } ;
struct mwifiex_ds_tdls_oper {int tdls_action; int peer_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (struct mwifiex_ds_tdls_oper*,int ,int) ;
 struct mwifiex_sta_node* FUNC_2 (struct mwifiex_private*,int const*) ;
 int FUNC_3 (int ,int ,char*,int const*) ;
 struct mwifiex_sta_node* FUNC_4 (struct mwifiex_private*,int const*) ;
 int FUNC_5 (struct mwifiex_private*,int const*) ;
 int FUNC_6 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_tdls_oper*,int) ;

__attribute__((used)) static int
FUNC_7(struct mwifiex_private *VAR_7, const u8 *VAR_8)
{
 struct mwifiex_sta_node *VAR_9;
 struct mwifiex_ds_tdls_oper VAR_10;

 FUNC_1(&VAR_10, 0, sizeof(struct mwifiex_ds_tdls_oper));
 VAR_9 = FUNC_4(VAR_7, VAR_8);

 if (VAR_9 && VAR_9->tdls_status == VAR_5) {
  FUNC_3(VAR_7->adapter, VAR_6,
       "Setup already in progress for peer %pM\n", VAR_8);
  return 0;
 }

 VAR_9 = FUNC_2(VAR_7, VAR_8);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->tdls_status = VAR_5;
 FUNC_5(VAR_7, VAR_8);
 FUNC_0(&VAR_10.peer_mac, VAR_8, VAR_1);
 VAR_10.tdls_action = VAR_4;
 return FUNC_6(VAR_7, VAR_3,
    VAR_2, 0, &VAR_10, 1);
}
