
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_2__ {int lock; int core; int phy; int pll; int wp; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,struct seq_file*) ;
 int FUNC_1 (int *,struct seq_file*) ;
 int FUNC_2 (int *,struct seq_file*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int *,struct seq_file*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct seq_file *VAR_1)
{
 FUNC_6(&VAR_0.lock);

 if (FUNC_3()) {
  FUNC_7(&VAR_0.lock);
  return;
 }

 FUNC_5(&VAR_0.wp, VAR_1);
 FUNC_2(&VAR_0.pll, VAR_1);
 FUNC_1(&VAR_0.phy, VAR_1);
 FUNC_0(&VAR_0.core, VAR_1);

 FUNC_4();
 FUNC_7(&VAR_0.lock);
}
