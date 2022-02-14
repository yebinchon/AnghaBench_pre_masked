
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef size_t u16 ;
struct qed_ptt {int dummy; } ;
struct TYPE_4__ {size_t num_vports; TYPE_1__* wfq_data; } ;
struct qed_hwfn {TYPE_2__ qm_info; } ;
struct TYPE_3__ {int min_speed; int configured; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_3 (struct qed_hwfn*,size_t,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_0,
       struct qed_ptt *VAR_1,
       u32 VAR_2)
{
 bool VAR_3 = 0;
 int VAR_4 = 0;
 u16 VAR_5;


 for (VAR_5 = 0; VAR_5 < VAR_0->qm_info.num_vports; VAR_5++) {
  u32 VAR_6;

  if (!VAR_0->qm_info.wfq_data[VAR_5].configured)
   continue;

  VAR_6 = VAR_0->qm_info.wfq_data[VAR_5].min_speed;
  VAR_3 = 1;

  VAR_4 = FUNC_3(VAR_0, VAR_5, VAR_6, VAR_2);
  if (VAR_4) {
   FUNC_0(VAR_0,
      "WFQ validation failed while configuring min rate\n");
   break;
  }
 }

 if (!VAR_4 && VAR_3)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_2(VAR_0, VAR_1, VAR_2);

 return VAR_4;
}
