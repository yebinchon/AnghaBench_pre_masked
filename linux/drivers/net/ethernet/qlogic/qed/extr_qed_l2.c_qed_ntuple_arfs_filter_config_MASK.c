
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_spq_comp_cb {void* cookie; int function; } ;
struct qed_ntuple_filter_params {int qid; int vf_id; scalar_t__ vport_id; scalar_t__ b_is_vf; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qed_hwfn* FUNC_3 (struct qed_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_spq_comp_cb*,struct qed_ntuple_filter_params*) ;
 int FUNC_5 (struct qed_hwfn*,int ,int,int) ;

__attribute__((used)) static int
FUNC_6(struct qed_dev *VAR_4,
         void *VAR_5,
         struct qed_ntuple_filter_params *VAR_6)
{
 struct qed_hwfn *VAR_7 = FUNC_3(VAR_4);
 struct qed_spq_comp_cb VAR_8;
 int VAR_9 = -VAR_0;

 VAR_8.function = VAR_3;
 VAR_8.cookie = VAR_5;

 if (VAR_6->b_is_vf) {
  if (!FUNC_5(VAR_7, VAR_6->vf_id, 0,
        0)) {
   FUNC_0(VAR_7, "vfid 0x%02x is out of bounds\n",
    VAR_6->vf_id);
   return VAR_9;
  }

  VAR_6->vport_id = VAR_6->vf_id + 1;
  VAR_6->qid = VAR_2;
 }

 VAR_9 = FUNC_4(VAR_7, &VAR_8, VAR_6);
 if (VAR_9)
  FUNC_1(VAR_7,
     "Failed to issue a-RFS filter configuration\n");
 else
  FUNC_2(VAR_7, VAR_1,
      "Successfully issued a-RFS filter configuration\n");

 return VAR_9;
}
