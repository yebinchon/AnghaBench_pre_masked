
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct kernfs_root {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_3, struct kernfs_root *VAR_4)
{
 if (VAR_2.flags & VAR_1)
  FUNC_0(VAR_3, ",nsdelegate");
 if (VAR_2.flags & VAR_0)
  FUNC_0(VAR_3, ",memory_localevents");
 return 0;
}
