
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending; int local; int global; } ;
struct uwb_rc {TYPE_1__ drp_avail; } ;
struct seq_file {struct uwb_rc* private; } ;


 int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_1, void *VAR_2)
{
 struct uwb_rc *VAR_3 = VAR_1->private;

 FUNC_0(VAR_1, "global:  %*pb\n", VAR_0, VAR_3->drp_avail.global);
 FUNC_0(VAR_1, "local:   %*pb\n", VAR_0, VAR_3->drp_avail.local);
 FUNC_0(VAR_1, "pending: %*pb\n", VAR_0, VAR_3->drp_avail.pending);

 return 0;
}
