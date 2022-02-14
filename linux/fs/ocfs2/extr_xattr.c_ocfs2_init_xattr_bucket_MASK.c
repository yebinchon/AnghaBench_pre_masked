
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_xattr_bucket {int bu_blocks; int * bu_bhs; TYPE_1__* bu_inode; } ;
struct TYPE_2__ {int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ocfs2_xattr_bucket*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ocfs2_xattr_bucket *VAR_1,
       u64 VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->bu_blocks; VAR_4++) {
  VAR_1->bu_bhs[VAR_4] = FUNC_6(VAR_1->bu_inode->i_sb,
           VAR_2 + VAR_4);
  if (!VAR_1->bu_bhs[VAR_4]) {
   VAR_5 = -VAR_0;
   FUNC_1(VAR_5);
   break;
  }

  if (!FUNC_2(FUNC_0(VAR_1->bu_inode),
        VAR_1->bu_bhs[VAR_4])) {
   if (VAR_3)
    FUNC_4(FUNC_0(VAR_1->bu_inode),
             VAR_1->bu_bhs[VAR_4]);
   else {
    FUNC_7(VAR_1->bu_bhs[VAR_4]);
    FUNC_3(FUNC_0(VAR_1->bu_inode),
         VAR_1->bu_bhs[VAR_4]);
   }
  }
 }

 if (VAR_5)
  FUNC_5(VAR_1);
 return VAR_5;
}
