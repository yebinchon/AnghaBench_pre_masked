
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int bus_width; } ;
struct TYPE_5__ {TYPE_1__ parallel; } ;
struct v4l2_fwnode_endpoint {TYPE_2__ bus; } ;
struct TYPE_6__ {int mode_reg2; int pix_width_ctrl_emb; int pix_width_ctrl; int data_selection_ctrl; } ;
struct mipid02_dev {TYPE_3__ r; struct v4l2_fwnode_endpoint tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct mipid02_dev *VAR_5)
{
 struct v4l2_fwnode_endpoint *VAR_6 = &VAR_5->tx;

 VAR_5->r.data_selection_ctrl = VAR_2;
 VAR_5->r.pix_width_ctrl = VAR_6->bus.parallel.bus_width;
 VAR_5->r.pix_width_ctrl_emb = VAR_6->bus.parallel.bus_width;
 if (VAR_6->bus.parallel.flags & VAR_3)
  VAR_5->r.mode_reg2 |= VAR_0;
 if (VAR_6->bus.parallel.flags & VAR_4)
  VAR_5->r.mode_reg2 |= VAR_1;

 return 0;
}
