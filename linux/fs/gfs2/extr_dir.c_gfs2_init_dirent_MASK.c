
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_dirent {int de_name_len; } ;
struct buffer_head {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct gfs2_dirent* FUNC_2 (struct inode*,struct gfs2_dirent*,struct qstr const*,struct buffer_head*,unsigned int) ;
 int FUNC_3 (struct gfs2_dirent*) ;

__attribute__((used)) static struct gfs2_dirent *FUNC_4(struct inode *VAR_0,
         struct gfs2_dirent *VAR_1,
         const struct qstr *VAR_2,
         struct buffer_head *VAR_3)
{
 unsigned VAR_4 = 0;

 if (!FUNC_3(VAR_1))
  VAR_4 = FUNC_0(FUNC_1(VAR_1->de_name_len));
 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
