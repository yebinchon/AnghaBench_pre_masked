
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int i_size; int i_ctime; int i_mtime; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct gfs2_inode*,scalar_t__) ;
 int FUNC_3 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_4 (int ,struct buffer_head*) ;
 int FUNC_5 (TYPE_1__*,unsigned int) ;
 int FUNC_6 (scalar_t__,char const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct gfs2_inode *VAR_0, const char *VAR_1,
      unsigned int VAR_2, unsigned int VAR_3)
{
 struct buffer_head *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_0, &VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_4(VAR_0->i_gl, VAR_4);
 FUNC_6(VAR_4->b_data + VAR_2 + sizeof(struct gfs2_dinode), VAR_1, VAR_3);
 if (VAR_0->i_inode.i_size < VAR_2 + VAR_3)
  FUNC_5(&VAR_0->i_inode, VAR_2 + VAR_3);
 VAR_0->i_inode.i_mtime = VAR_0->i_inode.i_ctime = FUNC_1(&VAR_0->i_inode);
 FUNC_2(VAR_0, VAR_4->b_data);

 FUNC_0(VAR_4);

 return VAR_3;
}
