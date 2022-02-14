
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_security_xattr_info {scalar_t__ value_len; int name; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_4__ {scalar_t__ s_blocksize; } ;


 scalar_t__ VAR_0 ;
 struct ocfs2_super* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (struct ocfs2_super*,int,struct ocfs2_alloc_context**) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct inode *VAR_4,
        struct ocfs2_security_xattr_info *VAR_5,
        int *VAR_6,
        int *VAR_7,
        struct ocfs2_alloc_context **VAR_8)
{
 int VAR_9 = 0;
 struct ocfs2_super *VAR_10 = FUNC_0(VAR_4->i_sb);
 int VAR_11 = FUNC_5(FUNC_6(VAR_5->name),
       VAR_5->value_len);






 if (VAR_4->i_sb->s_blocksize == VAR_0 ||
     VAR_11 > VAR_2) {
  VAR_9 = FUNC_4(VAR_10, 1, VAR_8);
  if (VAR_9) {
   FUNC_1(VAR_9);
   return VAR_9;
  }
  *VAR_7 += VAR_1;
 }


 if (VAR_5->value_len > VAR_3) {
  int VAR_12 = FUNC_2(VAR_4->i_sb,
           VAR_5->value_len);

  *VAR_7 += FUNC_3(VAR_4->i_sb,
          VAR_12);
  *VAR_6 += VAR_12;
 }
 return VAR_9;
}
