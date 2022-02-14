
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int num_vports; TYPE_1__* wfq_data; } ;
struct qed_hwfn {TYPE_2__ qm_info; } ;
struct TYPE_3__ {int configured; int min_speed; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct qed_hwfn *VAR_3,
         u16 VAR_4, u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13;

 VAR_13 = VAR_3->qm_info.num_vports;


 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  u32 VAR_14;

  if ((VAR_12 != VAR_4) &&
      VAR_3->qm_info.wfq_data[VAR_12].configured) {
   VAR_11++;
   VAR_14 = VAR_3->qm_info.wfq_data[VAR_12].min_speed;
   VAR_7 += VAR_14;
  }
 }


 VAR_11++;
 VAR_7 += VAR_5;
 VAR_10 = VAR_13 - VAR_11;

 if (VAR_5 < VAR_6 / VAR_2) {
  FUNC_0(VAR_3, VAR_1,
      "Vport [%d] - Requested rate[%d Mbps] is less than one percent of configured PF min rate[%d Mbps]\n",
      VAR_4, VAR_5, VAR_6);
  return -VAR_0;
 }

 if (VAR_13 > VAR_2) {
  FUNC_0(VAR_3, VAR_1,
      "Number of vports is greater than %d\n",
      VAR_2);
  return -VAR_0;
 }

 if (VAR_7 > VAR_6) {
  FUNC_0(VAR_3, VAR_1,
      "Total requested min rate for all vports[%d Mbps] is greater than configured PF min rate[%d Mbps]\n",
      VAR_7, VAR_6);
  return -VAR_0;
 }

 VAR_8 = VAR_6 - VAR_7;

 VAR_9 = VAR_8 / VAR_10;
 if (VAR_9 < VAR_6 / VAR_2) {
  FUNC_0(VAR_3, VAR_1,
      "Non WFQ configured vports rate [%d Mbps] is less than one percent of configured PF min rate[%d Mbps]\n",
      VAR_9, VAR_6);
  return -VAR_0;
 }

 VAR_3->qm_info.wfq_data[VAR_4].min_speed = VAR_5;
 VAR_3->qm_info.wfq_data[VAR_4].configured = 1;

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  if (VAR_3->qm_info.wfq_data[VAR_12].configured)
   continue;

  VAR_3->qm_info.wfq_data[VAR_12].min_speed = VAR_9;
 }

 return 0;
}
