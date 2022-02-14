
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qstr {int dummy; } ;
struct inode {int dummy; } ;
struct gfs2_dirent {int dummy; } ;
struct buffer_head {int b_size; int b_data; } ;


 scalar_t__ FUNC_0 (struct gfs2_dirent*) ;
 struct gfs2_dirent* FUNC_1 (struct inode*,struct gfs2_dirent*,struct qstr const*,struct buffer_head*,unsigned int) ;
 int VAR_0 ;
 struct gfs2_dirent* FUNC_2 (struct inode*,int ,int ,int ,struct qstr const*,void*) ;

__attribute__((used)) static struct gfs2_dirent *FUNC_3(struct inode *VAR_1,
         struct buffer_head *VAR_2,
         const struct qstr *VAR_3,
         void *VAR_4)
{
 struct gfs2_dirent *VAR_5;
 VAR_5 = FUNC_2(VAR_1, VAR_2->b_data, VAR_2->b_size,
    VAR_0, VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return VAR_5;
 return FUNC_1(VAR_1, VAR_5, VAR_3, VAR_2,
         (unsigned)(VAR_4 - (void *)VAR_5));
}
