
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_journal {int j_trans_id; } ;
struct ocfs2_caching_info {int ci_created_trans; } ;
struct TYPE_2__ {struct ocfs2_journal* journal; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_caching_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_5(struct ocfs2_caching_info *VAR_1)
{
 int VAR_2;
 struct ocfs2_journal *VAR_3 =
  FUNC_0(FUNC_1(VAR_1))->journal;

 FUNC_2(&VAR_0);
 VAR_2 = !(FUNC_4(VAR_3->j_trans_id, VAR_1->ci_created_trans));
 if (!VAR_2)
  VAR_1->ci_created_trans = 0;
 FUNC_3(&VAR_0);
 return VAR_2;
}
