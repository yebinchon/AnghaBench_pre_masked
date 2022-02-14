
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {unsigned long nrpages; int i_pages; } ;
struct inode {int i_mode; TYPE_1__ i_data; } ;
struct gfs2_inode {scalar_t__ i_diskflags; int i_flags; struct inode i_inode; scalar_t__ i_no_addr; scalar_t__ i_no_formal_ino; } ;
struct gfs2_glock {struct gfs2_inode* gl_object; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct seq_file*,char*,char const*,unsigned long long,unsigned long long,int ,int ,unsigned int,unsigned long long,unsigned long) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct seq_file *VAR_0, struct gfs2_glock *VAR_1,
     const char *VAR_2)
{
 struct gfs2_inode *VAR_3 = VAR_1->gl_object;
 struct inode *VAR_4 = &VAR_3->i_inode;
 unsigned long VAR_5;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_3(&VAR_4->i_data.i_pages);
 VAR_5 = VAR_4->i_data.nrpages;
 FUNC_4(&VAR_4->i_data.i_pages);

 FUNC_1(VAR_0, "%s I: n:%llu/%llu t:%u f:0x%02lx d:0x%08x s:%llu "
         "p:%lu\n", VAR_2,
    (unsigned long long)VAR_3->i_no_formal_ino,
    (unsigned long long)VAR_3->i_no_addr,
    FUNC_0(VAR_3->i_inode.i_mode), VAR_3->i_flags,
    (unsigned int)VAR_3->i_diskflags,
    (unsigned long long)FUNC_2(VAR_4), VAR_5);
}
