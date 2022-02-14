
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct docg3 {TYPE_1__* cascade; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct docg3*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, void *VAR_2)
{
 struct docg3 *VAR_3 = (struct docg3 *)VAR_1->private;
 int VAR_4;

 FUNC_1(&VAR_3->cascade->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_0);
 FUNC_2(&VAR_3->cascade->lock);

 FUNC_3(VAR_1, "DeviceId = %d\n", VAR_4);
 return 0;
}
