
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dcbx_mib_meta_data {TYPE_1__* mib; int size; int addr; TYPE_1__* lldp_remote; } ;
typedef enum qed_mib_read_type { ____Placeholder_qed_mib_read_type } qed_mib_read_type ;
struct TYPE_2__ {scalar_t__ prefix_seq_num; scalar_t__ suffix_seq_num; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,int,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct qed_hwfn *VAR_4,
    struct qed_ptt *VAR_5,
    struct qed_dcbx_mib_meta_data *VAR_6,
    enum qed_mib_read_type VAR_7)
{
 u32 VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;




 do {
  if (VAR_7 == VAR_2) {
   FUNC_2(VAR_4, VAR_5, VAR_6->lldp_remote,
     VAR_6->addr, VAR_6->size);
   VAR_8 = VAR_6->lldp_remote->prefix_seq_num;
   VAR_9 = VAR_6->lldp_remote->suffix_seq_num;
  } else {
   FUNC_2(VAR_4, VAR_5, VAR_6->mib,
     VAR_6->addr, VAR_6->size);
   VAR_8 = VAR_6->mib->prefix_seq_num;
   VAR_9 = VAR_6->mib->suffix_seq_num;
  }
  VAR_10++;

  FUNC_1(VAR_4,
      VAR_3,
      "mib type = %d, try count = %d prefix seq num  = %d suffix seq num = %d\n",
      VAR_7, VAR_10, VAR_8, VAR_9);
 } while ((VAR_8 != VAR_9) &&
   (VAR_10 < VAR_1));

 if (VAR_10 >= VAR_1) {
  FUNC_0(VAR_4,
         "MIB read err, mib type = %d, try count = %d prefix seq num = %d suffix seq num = %d\n",
         VAR_7, VAR_10, VAR_8, VAR_9);
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
