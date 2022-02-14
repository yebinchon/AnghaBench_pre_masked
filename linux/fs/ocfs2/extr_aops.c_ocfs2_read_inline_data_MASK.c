
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_4__ {int id_data; } ;
struct TYPE_5__ {TYPE_1__ i_data; } ;
struct ocfs2_dinode {TYPE_2__ id2; int i_dyn_features; } ;
struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ ip_blkno; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 void* FUNC_4 (struct page*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (void*,int ,scalar_t__) ;
 int FUNC_8 (void*,int ,scalar_t__) ;
 int FUNC_9 (int ,char*,unsigned long long,...) ;
 scalar_t__ FUNC_10 (int ,struct ocfs2_dinode*) ;

int FUNC_11(struct inode *VAR_3, struct page *VAR_4,
      struct buffer_head *VAR_5)
{
 void *VAR_6;
 loff_t VAR_7;
 struct ocfs2_dinode *VAR_8 = (struct ocfs2_dinode *)VAR_5->b_data;

 if (!(FUNC_6(VAR_8->i_dyn_features) & VAR_1)) {
  FUNC_9(VAR_3->i_sb, "Inode %llu lost inline data flag\n",
       (unsigned long long)FUNC_0(VAR_3)->ip_blkno);
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_3);

 if (VAR_7 > VAR_2 ||
     VAR_7 > FUNC_10(VAR_3->i_sb, VAR_8)) {
  FUNC_9(VAR_3->i_sb,
       "Inode %llu has with inline data has bad size: %Lu\n",
       (unsigned long long)FUNC_0(VAR_3)->ip_blkno,
       (unsigned long long)VAR_7);
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_4);
 if (VAR_7)
  FUNC_7(VAR_6, VAR_8->id2.i_data.id_data, VAR_7);

 FUNC_8(VAR_6 + VAR_7, 0, VAR_2 - VAR_7);
 FUNC_2(VAR_4);
 FUNC_5(VAR_6);

 FUNC_1(VAR_4);

 return 0;
}
