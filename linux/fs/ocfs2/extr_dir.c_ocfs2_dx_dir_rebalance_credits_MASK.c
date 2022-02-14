
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int sb; } ;
struct ocfs2_dx_root_block {int dr_list; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct ocfs2_super *VAR_0,
       struct ocfs2_dx_root_block *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0->sb, 3);

 VAR_2 += FUNC_0(VAR_0->sb, &VAR_1->dr_list);
 VAR_2 += FUNC_2(VAR_0->sb);
 return VAR_2;
}
