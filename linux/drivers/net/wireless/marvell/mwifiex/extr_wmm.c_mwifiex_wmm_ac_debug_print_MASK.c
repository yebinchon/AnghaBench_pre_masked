
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee_types_wmm_ac_parameters {int aci_aifsn_bitmap; int ecw_bitmap; int tx_op_limit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int,int,int,int,int,int ) ;
 size_t* VAR_5 ;

__attribute__((used)) static void
FUNC_2(const struct ieee_types_wmm_ac_parameters *VAR_6)
{
 const char *VAR_7[] = { "BK", "BE", "VI", "VO" };

 FUNC_1("info: WMM AC_%s: ACI=%d, ACM=%d, Aifsn=%d, "
   "EcwMin=%d, EcwMax=%d, TxopLimit=%d\n",
   VAR_7[VAR_5[(VAR_6->aci_aifsn_bitmap
          & VAR_0) >> 5]],
   (VAR_6->aci_aifsn_bitmap & VAR_0) >> 5,
   (VAR_6->aci_aifsn_bitmap & VAR_1) >> 4,
   VAR_6->aci_aifsn_bitmap & VAR_2,
   VAR_6->ecw_bitmap & VAR_4,
   (VAR_6->ecw_bitmap & VAR_3) >> 4,
   FUNC_0(VAR_6->tx_op_limit));
}
