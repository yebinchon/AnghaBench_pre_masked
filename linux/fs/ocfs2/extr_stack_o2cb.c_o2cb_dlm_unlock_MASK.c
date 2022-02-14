
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_dlm_lksb {int lksb_o2dlm; } ;
struct ocfs2_cluster_connection {int cc_lockspace; } ;
typedef enum dlm_status { ____Placeholder_dlm_status } dlm_status ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int,int ,struct ocfs2_dlm_lksb*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct ocfs2_cluster_connection *VAR_1,
      struct ocfs2_dlm_lksb *VAR_2,
      u32 VAR_3)
{
 enum dlm_status VAR_4;
 int VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 VAR_4 = FUNC_1(VAR_1->cc_lockspace, &VAR_2->lksb_o2dlm,
      VAR_5, VAR_0, VAR_2);
 VAR_6 = FUNC_0(VAR_4);
 return VAR_6;
}
