
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {unsigned int len; } ;
struct inode {int dummy; } ;
struct gfs2_inode {int i_gl; } ;
struct gfs2_dirent {int de_rec_len; } ;
struct buffer_head {int dummy; } ;


 int FUNC_0 (int) ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct qstr const*,unsigned int,struct gfs2_dirent*) ;
 int FUNC_5 (int ,struct buffer_head*) ;

__attribute__((used)) static struct gfs2_dirent *FUNC_6(struct inode *VAR_0,
       struct gfs2_dirent *VAR_1,
       const struct qstr *VAR_2,
       struct buffer_head *VAR_3,
       unsigned VAR_4)
{
 struct gfs2_inode *VAR_5 = FUNC_1(VAR_0);
 struct gfs2_dirent *VAR_6;
 unsigned VAR_7;

 VAR_7 = FUNC_2(VAR_1->de_rec_len);
 FUNC_0(VAR_4 + VAR_2->len > VAR_7);
 FUNC_5(VAR_5->i_gl, VAR_3);
 VAR_6 = (struct gfs2_dirent *)((char *)VAR_1 + VAR_4);
 VAR_1->de_rec_len = FUNC_3(VAR_4);
 FUNC_4(VAR_2, VAR_7 - VAR_4, VAR_6);
 return VAR_6;
}
