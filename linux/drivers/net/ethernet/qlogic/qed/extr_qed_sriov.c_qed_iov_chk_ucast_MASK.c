
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_public_vf_info {int mac; scalar_t__ is_trusted_configured; } ;
struct qed_hwfn {int dummy; } ;
struct qed_filter_ucast {scalar_t__ type; int mac; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,int ,int) ;
 struct qed_public_vf_info* FUNC_2 (struct qed_hwfn*,int,int) ;
 int FUNC_3 (struct qed_hwfn*,int ) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_4,
        int VAR_5, struct qed_filter_ucast *VAR_6)
{
 struct qed_public_vf_info *VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5, 1);
 if (!VAR_7)
  return -VAR_0;


 if (VAR_6->type == VAR_1 ||
     VAR_6->type == VAR_2) {
  FUNC_0(VAR_7->mac, VAR_6->mac);

  if (VAR_7->is_trusted_configured) {
   FUNC_1(VAR_4, VAR_7->mac, VAR_5);


   FUNC_3(VAR_4, VAR_3);
  }
 }

 return 0;
}
