
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ocfs2_super {TYPE_1__* sb; } ;
struct inode {int i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_blocksize; int s_bdev; } ;


 struct ocfs2_super* FUNC_0 (int ) ;
 struct buffer_head* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_7 (struct ocfs2_super*,scalar_t__,int,struct buffer_head**) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;
 u64 VAR_3, VAR_4, VAR_5, VAR_6;
 struct buffer_head *VAR_7 = ((void*)0);
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_0->i_sb);

 VAR_6 = FUNC_5(VAR_0->i_sb, FUNC_3(VAR_0));
 VAR_3 = 0;
 while (VAR_3 < VAR_6) {
  VAR_1 = FUNC_6(VAR_0, VAR_3,
           &VAR_4, &VAR_5, ((void*)0));
  if (VAR_1 < 0) {
   FUNC_4(VAR_1);
   goto bail;
  }

  for (VAR_2 = 0; VAR_2 < VAR_5; VAR_2++, VAR_4++) {
   VAR_7 = FUNC_1(VAR_8->sb->s_bdev, VAR_4,
     VAR_8->sb->s_blocksize);

   if (!VAR_7)
    continue;

   FUNC_2(VAR_7);
   VAR_7 = ((void*)0);



   VAR_1 = FUNC_7(VAR_8, VAR_4, 1, &VAR_7);
   if (VAR_1 < 0) {
    FUNC_4(VAR_1);
    goto bail;
   }

   FUNC_2(VAR_7);
   VAR_7 = ((void*)0);
  }

  VAR_3 += VAR_5;
 }

bail:
 return VAR_1;
}
