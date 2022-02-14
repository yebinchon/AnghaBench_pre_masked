
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mwifiex_sta_node {scalar_t__ is_11n_enabled; } ;
struct TYPE_2__ {int ra_list_spinlock; } ;
struct mwifiex_private {TYPE_1__ wmm; } ;
struct mwifiex_ds_tdls_oper {int tdls_action; int peer_mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (struct mwifiex_ds_tdls_oper*,int ,int) ;
 int FUNC_2 (struct mwifiex_private*) ;
 int FUNC_3 (struct mwifiex_private*) ;
 int FUNC_4 (struct mwifiex_private*,int const*,int ) ;
 int FUNC_5 (struct mwifiex_private*,int const*) ;
 struct mwifiex_sta_node* FUNC_6 (struct mwifiex_private*,int const*) ;
 int FUNC_7 (struct mwifiex_private*,int const*,int ) ;
 int FUNC_8 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_ds_tdls_oper*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(struct mwifiex_private *VAR_6, const u8 *VAR_7)
{
 struct mwifiex_sta_node *VAR_8;
 struct mwifiex_ds_tdls_oper VAR_9;

 FUNC_1(&VAR_9, 0, sizeof(struct mwifiex_ds_tdls_oper));
 VAR_8 = FUNC_6(VAR_6, VAR_7);

 if (VAR_8) {
  if (VAR_8->is_11n_enabled) {
   FUNC_2(VAR_6);
   FUNC_9(&VAR_6->wmm.ra_list_spinlock);
   FUNC_3(VAR_6);
   FUNC_10(&VAR_6->wmm.ra_list_spinlock);
  }
  FUNC_5(VAR_6, VAR_7);
 }

 FUNC_7(VAR_6, VAR_7, VAR_4);
 FUNC_4(VAR_6, VAR_7, VAR_5);
 FUNC_0(&VAR_9.peer_mac, VAR_7, VAR_0);
 VAR_9.tdls_action = VAR_3;
 return FUNC_8(VAR_6, VAR_2,
    VAR_1, 0, &VAR_9, 1);
}
