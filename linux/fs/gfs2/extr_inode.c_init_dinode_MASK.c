
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i_mode; int i_size; int i_rdev; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; int i_no_addr; } ;
struct gfs2_dinode {int di_reserved; int __pad4; scalar_t__ __pad3; scalar_t__ __pad2; scalar_t__ __pad1; void* di_minor; void* di_major; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;


 int VAR_0 ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*,int) ;
 int FUNC_5 (struct gfs2_inode*,struct gfs2_dinode*) ;
 int FUNC_6 (struct buffer_head*,struct gfs2_inode*) ;
 struct buffer_head* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct buffer_head*) ;
 int FUNC_9 (scalar_t__,char const*,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_12(struct gfs2_inode *VAR_1, struct gfs2_inode *VAR_2,
   const char *VAR_3)
{
 struct gfs2_dinode *VAR_4;
 struct buffer_head *VAR_5;

 VAR_5 = FUNC_7(VAR_2->i_gl, VAR_2->i_no_addr);
 FUNC_8(VAR_2->i_gl, VAR_5);
 VAR_4 = (struct gfs2_dinode *)VAR_5->b_data;
 FUNC_5(VAR_2, VAR_4);

 VAR_4->di_major = FUNC_3(FUNC_0(VAR_2->i_inode.i_rdev));
 VAR_4->di_minor = FUNC_3(FUNC_1(VAR_2->i_inode.i_rdev));
 VAR_4->__pad1 = 0;
 VAR_4->__pad2 = 0;
 VAR_4->__pad3 = 0;
 FUNC_10(&VAR_4->__pad4, 0, sizeof(VAR_4->__pad4));
 FUNC_10(&VAR_4->di_reserved, 0, sizeof(VAR_4->di_reserved));
 FUNC_4(VAR_5, sizeof(struct gfs2_dinode));

 switch(VAR_2->i_inode.i_mode & VAR_0) {
 case 129:
  FUNC_6(VAR_5, VAR_1);
  break;
 case 128:
  FUNC_9(VAR_5->b_data + sizeof(struct gfs2_dinode), VAR_3, VAR_2->i_inode.i_size);
  break;
 }

 FUNC_11(VAR_5);
 FUNC_2(VAR_5);
}
