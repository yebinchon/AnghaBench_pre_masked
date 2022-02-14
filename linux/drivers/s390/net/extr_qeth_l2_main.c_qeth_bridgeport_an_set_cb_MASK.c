
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qeth_card {int dummy; } ;
struct TYPE_2__ {scalar_t__ lnid; } ;
struct qdio_brinfo_entry_l2 {TYPE_1__ addr_lnid; int nit; } ;
struct net_if_token {int dummy; } ;
struct mac_addr_lnid {int dummy; } ;
typedef enum qdio_brinfo_entry_type { ____Placeholder_qdio_brinfo_entry_type } qdio_brinfo_entry_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qeth_card*,int ,int ,struct net_if_token*,struct mac_addr_lnid*) ;

__attribute__((used)) static void FUNC_2(void *VAR_5,
  enum qdio_brinfo_entry_type VAR_6, void *VAR_7)
{
 struct qeth_card *VAR_8 = (struct qeth_card *)VAR_5;
 struct qdio_brinfo_entry_l2 *VAR_9;
 u8 VAR_10;

 if (VAR_6 != VAR_4) {
  FUNC_0(1);
  return;
 }

 VAR_9 = (struct qdio_brinfo_entry_l2 *)VAR_7;
 VAR_10 = VAR_0;
 if (VAR_9->addr_lnid.lnid < VAR_2)
  VAR_10 |= VAR_1;
 FUNC_1(VAR_8, VAR_3, VAR_10,
  (struct net_if_token *)&VAR_9->nit,
  (struct mac_addr_lnid *)&VAR_9->addr_lnid);
}
