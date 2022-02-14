
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union event_ring_data {int dummy; } event_ring_data ;
typedef int u8 ;
typedef int u16 ;
struct qed_iscsi_info {int (* event_cb ) (int ,int ,union event_ring_data*) ;int event_context; } ;
struct qed_hwfn {struct qed_iscsi_info* p_iscsi_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,union event_ring_data*) ;

__attribute__((used)) static int
FUNC_2(struct qed_hwfn *VAR_1,
        u8 VAR_2,
        u16 VAR_3, union event_ring_data *VAR_4, u8 VAR_5)
{
 if (VAR_1->p_iscsi_info->event_cb) {
  struct qed_iscsi_info *VAR_6 = VAR_1->p_iscsi_info;

  return VAR_6->event_cb(VAR_6->event_context,
      VAR_2, VAR_4);
 } else {
  FUNC_0(VAR_1, "iSCSI async completion is not set\n");
  return -VAR_0;
 }
}
