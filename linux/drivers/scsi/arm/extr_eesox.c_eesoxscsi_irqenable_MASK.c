
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expansion_card {scalar_t__ irq_data; } ;
struct eesoxscsi_info {int ctl_port; int control; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct expansion_card *VAR_1, int VAR_2)
{
 struct eesoxscsi_info *VAR_3 = (struct eesoxscsi_info *)VAR_1->irq_data;

 VAR_3->control |= VAR_0;

 FUNC_0(VAR_3->control, VAR_3->ctl_port);
}
