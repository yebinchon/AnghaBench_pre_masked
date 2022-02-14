
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {scalar_t__ i_clusters; } ;
struct inode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct ocfs2_super*,int *) ;
 int FUNC_7 (struct ocfs2_super*,struct inode*,struct buffer_head*) ;
 int FUNC_8 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_9 (int *,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 int * FUNC_11 (struct ocfs2_super*,int ) ;

__attribute__((used)) static int FUNC_12(struct ocfs2_super *VAR_2,
         struct inode *VAR_3,
         struct buffer_head *VAR_4)
{
 int VAR_5 = 0;
 struct ocfs2_dinode *VAR_6;
 handle_t *VAR_7 = ((void*)0);

 VAR_6 = (struct ocfs2_dinode *) VAR_4->b_data;





 if (VAR_6->i_clusters) {
  if (FUNC_10(VAR_3))
   FUNC_5(VAR_3, 0);

  VAR_7 = FUNC_11(VAR_2, VAR_0);
  if (FUNC_1(VAR_7)) {
   VAR_5 = FUNC_2(VAR_7);
   VAR_7 = ((void*)0);
   FUNC_4(VAR_5);
   goto out;
  }

  VAR_5 = FUNC_8(VAR_7, FUNC_0(VAR_3),
       VAR_4,
       VAR_1);
  if (VAR_5 < 0) {
   FUNC_4(VAR_5);
   goto out;
  }

  FUNC_3(VAR_3, 0);

  VAR_5 = FUNC_9(VAR_7, VAR_3, VAR_4);
  if (VAR_5 < 0) {
   FUNC_4(VAR_5);
   goto out;
  }

  FUNC_6(VAR_2, VAR_7);
  VAR_7 = ((void*)0);

  VAR_5 = FUNC_7(VAR_2, VAR_3, VAR_4);
  if (VAR_5 < 0)
   FUNC_4(VAR_5);
 }

out:
 if (VAR_7)
  FUNC_6(VAR_2, VAR_7);
 return VAR_5;
}
