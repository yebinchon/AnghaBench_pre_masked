
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_xattr_block {int xb_fs_generation; int xb_blkno; int xb_signature; int xb_check; } ;
struct buffer_head {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_2__ {unsigned long long fs_generation; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ocfs2_xattr_block*) ;
 TYPE_1__* FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct buffer_head*) ;
 unsigned long long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*,char*,unsigned long long,unsigned long long,...) ;
 int FUNC_7 (struct super_block*,scalar_t__,int *) ;
 int FUNC_8 (unsigned long long) ;

__attribute__((used)) static int FUNC_9(struct super_block *VAR_0,
          struct buffer_head *VAR_1)
{
 int VAR_2;
 struct ocfs2_xattr_block *VAR_3 =
  (struct ocfs2_xattr_block *)VAR_1->b_data;

 FUNC_8((unsigned long long)VAR_1->b_blocknr);

 FUNC_0(!FUNC_3(VAR_1));






 VAR_2 = FUNC_7(VAR_0, VAR_1->b_data, &VAR_3->xb_check);
 if (VAR_2)
  return VAR_2;





 if (!FUNC_1(VAR_3)) {
  return FUNC_6(VAR_0,
       "Extended attribute block #%llu has bad signature %.*s\n",
       (unsigned long long)VAR_1->b_blocknr, 7,
       VAR_3->xb_signature);
 }

 if (FUNC_5(VAR_3->xb_blkno) != VAR_1->b_blocknr) {
  return FUNC_6(VAR_0,
       "Extended attribute block #%llu has an invalid xb_blkno of %llu\n",
       (unsigned long long)VAR_1->b_blocknr,
       (unsigned long long)FUNC_5(VAR_3->xb_blkno));
 }

 if (FUNC_4(VAR_3->xb_fs_generation) != FUNC_2(VAR_0)->fs_generation) {
  return FUNC_6(VAR_0,
       "Extended attribute block #%llu has an invalid xb_fs_generation of #%u\n",
       (unsigned long long)VAR_1->b_blocknr,
       FUNC_4(VAR_3->xb_fs_generation));
 }

 return 0;
}
