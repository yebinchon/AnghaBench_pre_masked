
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct ci_hdrc* private; } ;
struct ci_hdrc {scalar_t__ role; } ;
struct TYPE_2__ {int name; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (struct ci_hdrc*) ;
 int FUNC_1 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct ci_hdrc *VAR_3 = VAR_1->private;

 if (VAR_3->role != VAR_0)
  FUNC_1(VAR_1, "%s\n", FUNC_0(VAR_3)->name);

 return 0;
}
