
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_dinode {int dummy; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef scalar_t__ loff_t ;


 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_3 (int ,struct buffer_head*) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, loff_t VAR_1, loff_t VAR_2)
{
 struct gfs2_inode *VAR_3 = FUNC_0(VAR_0);
 struct buffer_head *VAR_4;
 int VAR_5;

 if (VAR_1 >= VAR_0->i_size)
  return 0;
 if (VAR_1 + VAR_2 > VAR_0->i_size)
  VAR_2 = VAR_0->i_size - VAR_1;

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5)
  return VAR_5;
 FUNC_3(VAR_3->i_gl, VAR_4);
 FUNC_4(VAR_4->b_data + sizeof(struct gfs2_dinode) + VAR_1, 0,
        VAR_2);
 FUNC_1(VAR_4);
 return 0;
}
