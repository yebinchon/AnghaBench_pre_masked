
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_public_vf_info {scalar_t__ tx_accept_mode; scalar_t__ rx_accept_mode; int mac; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qed_public_vf_info* FUNC_1 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0, u8 VAR_1)
{
 struct qed_public_vf_info *VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1, 0);

 if (!VAR_2)
  return;


 FUNC_0(VAR_2->mac);

 VAR_2->rx_accept_mode = 0;
 VAR_2->tx_accept_mode = 0;
}
