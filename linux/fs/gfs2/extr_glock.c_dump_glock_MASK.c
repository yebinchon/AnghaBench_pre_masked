
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct gfs2_glock {TYPE_1__ gl_lockref; } ;


 int FUNC_0 (struct seq_file*,struct gfs2_glock*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_0, struct gfs2_glock *VAR_1, bool VAR_2)
{
 FUNC_1(&VAR_1->gl_lockref.lock);
 FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_1->gl_lockref.lock);
}
