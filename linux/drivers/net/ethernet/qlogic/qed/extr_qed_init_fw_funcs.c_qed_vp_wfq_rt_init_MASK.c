
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qed_hwfn {int dummy; } ;
struct init_qm_vport_params {scalar_t__* first_tx_pq_id; int vport_wfq; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct qed_hwfn*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_6,
         u8 VAR_7,
         struct init_qm_vport_params *VAR_8)
{
 u16 VAR_9;
 u32 VAR_10;
 u8 VAR_11, VAR_12;


 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  if (!VAR_8[VAR_12].vport_wfq)
   continue;

  VAR_10 = FUNC_1(VAR_8[VAR_12].vport_wfq);
  if (VAR_10 > VAR_5) {
   FUNC_0(VAR_6,
      "Invalid VPORT WFQ weight configuration\n");
   return -1;
  }


  for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
   VAR_9 = VAR_8[VAR_12].first_tx_pq_id[VAR_11];
   if (VAR_9 != VAR_1) {
    FUNC_2(VAR_6,
          VAR_2 +
          VAR_9,
          (u32)VAR_4);
    FUNC_2(VAR_6,
          VAR_3 +
          VAR_9, VAR_10);
   }
  }
 }

 return 0;
}
