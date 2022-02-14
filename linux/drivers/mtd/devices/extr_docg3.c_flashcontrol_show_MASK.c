
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct seq_file {scalar_t__ private; } ;
struct docg3 {TYPE_1__* cascade; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct docg3*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,char*,int,char*,char*,char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_6, void *VAR_7)
{
 struct docg3 *VAR_8 = (struct docg3 *)VAR_6->private;

 u8 VAR_9;

 FUNC_1(&VAR_8->cascade->lock);
 VAR_9 = FUNC_0(VAR_8, VAR_5);
 FUNC_2(&VAR_8->cascade->lock);

 FUNC_3(VAR_6, "FlashControl : 0x%02x (%s,CE# %s,%s,%s,flash %s)\n",
     VAR_9,
     VAR_9 & VAR_4 ? "protocol violation" : "-",
     VAR_9 & VAR_0 ? "active" : "inactive",
     VAR_9 & VAR_2 ? "protection error" : "-",
     VAR_9 & VAR_3 ? "sequence error" : "-",
     VAR_9 & VAR_1 ? "ready" : "not ready");

 return 0;
}
