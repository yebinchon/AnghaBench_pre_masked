
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {struct adapter* private; } ;
struct TYPE_3__ {scalar_t__ nchan; } ;
struct TYPE_4__ {TYPE_1__ arch; } ;
struct adapter {TYPE_2__ params; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,char*,char*,char*,...) ;
 int FUNC_1 (struct seq_file*,char*) ;
 int FUNC_2 (struct seq_file*) ;
 int FUNC_3 (struct seq_file*) ;
 int FUNC_4 (struct seq_file*) ;
 int FUNC_5 (struct seq_file*) ;
 int FUNC_6 (struct seq_file*) ;
 int FUNC_7 (struct seq_file*) ;
 int FUNC_8 (struct seq_file*) ;

__attribute__((used)) static int FUNC_9(struct seq_file *VAR_1, void *VAR_2)
{
 struct adapter *VAR_3 = VAR_1->private;

 FUNC_1(VAR_1, "\n--------Adapter Stats--------\n");
 FUNC_6(VAR_1);
 FUNC_3(VAR_1);
 FUNC_5(VAR_1);
 FUNC_7(VAR_1);

 FUNC_1(VAR_1, "\n-------- Channel Stats --------\n");
 if (VAR_3->params.arch.nchan == VAR_0)
  FUNC_0(VAR_1, "%-25s %-20s %-20s %-20s %-20s\n",
      " ", "channel 0", "channel 1",
      "channel 2", "channel 3");
 else
  FUNC_0(VAR_1, "%-25s %-20s %-20s\n",
      " ", "channel 0", "channel 1");
 FUNC_2(VAR_1);
 FUNC_8(VAR_1);
 FUNC_4(VAR_1);

 return 0;
}
