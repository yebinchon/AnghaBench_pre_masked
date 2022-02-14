
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_ptp_unmatched {scalar_t__ skb; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct mlxsw_sp1_ptp_unmatched*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(void *VAR_1, void *VAR_2)
{
 struct mlxsw_sp1_ptp_unmatched *VAR_3 = VAR_1;




 if (VAR_3->skb)
  FUNC_0(VAR_3->skb);
 FUNC_1(VAR_3, VAR_0);
}
