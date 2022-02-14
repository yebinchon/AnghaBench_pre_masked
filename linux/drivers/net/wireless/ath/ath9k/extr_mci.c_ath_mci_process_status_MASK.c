
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath_mci_profile {int num_mgmt; int status; } ;
struct ath_btcoex {struct ath_mci_profile mci; } ;
struct ath_softc {struct ath_btcoex btcoex; } ;
struct ath_mci_profile_status {int conn_handle; scalar_t__ is_critical; scalar_t__ is_link; } ;
struct ath_mci_profile_info {int conn_handle; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct ath_mci_profile*,struct ath_mci_profile_info*) ;
 int FUNC_3 (struct ath_softc*) ;
 scalar_t__ FUNC_4 (int,int ) ;

__attribute__((used)) static u8 FUNC_5(struct ath_softc *VAR_1,
     struct ath_mci_profile_status *VAR_2)
{
 struct ath_btcoex *VAR_3 = &VAR_1->btcoex;
 struct ath_mci_profile *VAR_4 = &VAR_3->mci;
 struct ath_mci_profile_info VAR_5;
 int VAR_6 = 0, VAR_7 = VAR_4->num_mgmt;


 if (VAR_2->is_link)
  return 0;

 VAR_5.conn_handle = VAR_2->conn_handle;
 if (FUNC_2(VAR_4, &VAR_5))
  return 0;

 if (VAR_2->conn_handle >= VAR_0)
  return 0;

 if (VAR_2->is_critical)
  FUNC_1(VAR_2->conn_handle, VAR_4->status);
 else
  FUNC_0(VAR_2->conn_handle, VAR_4->status);

 VAR_4->num_mgmt = 0;
 do {
  if (FUNC_4(VAR_6, VAR_4->status))
   VAR_4->num_mgmt++;
 } while (++VAR_6 < VAR_0);

 FUNC_3(VAR_1);
 if (VAR_7 != VAR_4->num_mgmt)
  return 1;

 return 0;
}
