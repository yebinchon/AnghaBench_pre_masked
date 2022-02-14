
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ocfs2_local_alloc {int la_size; int la_bitmap; } ;
struct ocfs2_dinode {int dummy; } ;


 struct ocfs2_local_alloc* FUNC_0 (struct ocfs2_dinode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct ocfs2_dinode *VAR_0)
{
 u32 VAR_1;
 struct ocfs2_local_alloc *VAR_2 = FUNC_0(VAR_0);

 VAR_1 = FUNC_2(VAR_2->la_bitmap, FUNC_1(VAR_2->la_size));

 FUNC_3(VAR_1);
 return VAR_1;
}
