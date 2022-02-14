
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vortex_private {int info1; scalar_t__ partner_flow_ctrl; scalar_t__ flow_ctrl; scalar_t__ full_duplex; scalar_t__ large_frames; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 struct vortex_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (struct vortex_private*,int,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1)
{
 struct vortex_private *VAR_2 = FUNC_0(VAR_1);

 FUNC_1("%s:  setting %s-duplex.\n",
  VAR_1->name, (VAR_2->full_duplex) ? "full" : "half");


 FUNC_2(VAR_2,
         ((VAR_2->info1 & 0x8000) || VAR_2->full_duplex ? 0x20 : 0) |
         (VAR_2->large_frames ? 0x40 : 0) |
         ((VAR_2->full_duplex && VAR_2->flow_ctrl && VAR_2->partner_flow_ctrl) ?
   0x100 : 0),
         3, VAR_0);
}
