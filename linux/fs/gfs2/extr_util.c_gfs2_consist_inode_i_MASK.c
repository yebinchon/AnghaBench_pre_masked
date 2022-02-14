
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {scalar_t__ i_no_addr; scalar_t__ i_no_formal_ino; int i_inode; } ;


 struct gfs2_sbd* FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_sbd*,char*,unsigned long long,unsigned long long,char const*,char*,unsigned int) ;

int FUNC_2(struct gfs2_inode *VAR_0, int VAR_1,
    const char *VAR_2, char *VAR_3, unsigned int VAR_4)
{
 struct gfs2_sbd *VAR_5 = FUNC_0(&VAR_0->i_inode);
 int VAR_6;
 VAR_6 = FUNC_1(VAR_5,
         "fatal: filesystem consistency error\n"
         "  inode = %llu %llu\n"
         "  function = %s, file = %s, line = %u\n",
         (unsigned long long)VAR_0->i_no_formal_ino,
         (unsigned long long)VAR_0->i_no_addr,
         VAR_2, VAR_3, VAR_4);
 return VAR_6;
}
