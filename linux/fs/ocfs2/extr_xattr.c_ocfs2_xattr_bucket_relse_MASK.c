
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_xattr_bucket {int bu_blocks; int ** bu_bhs; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ocfs2_xattr_bucket *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->bu_blocks; VAR_1++) {
  FUNC_0(VAR_0->bu_bhs[VAR_1]);
  VAR_0->bu_bhs[VAR_1] = ((void*)0);
 }
}
