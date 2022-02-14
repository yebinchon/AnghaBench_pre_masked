
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_vport {int handle; scalar_t__ vlan_mode; int pvid; } ;
struct qlcnic_vf_info {struct qlcnic_vport* vp; } ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;
struct qlcnic_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_0(struct qlcnic_adapter *VAR_7,
          struct qlcnic_vf_info *VAR_8,
          struct qlcnic_cmd_args *VAR_9)
{
 struct qlcnic_vport *VAR_10 = VAR_8->vp;
 u8 VAR_11, VAR_12;

 if (!(VAR_9->req.arg[1] & VAR_1))
  return -VAR_2;

 VAR_9->req.arg[1] |= (VAR_8->vp->handle << 16);
 VAR_9->req.arg[1] |= VAR_0;

 if (VAR_10->vlan_mode == VAR_6) {
  VAR_11 = VAR_9->req.arg[1] & 0x7;
  VAR_9->req.arg[1] &= ~0x7;
  VAR_12 = (VAR_11 == VAR_3 || VAR_11 == VAR_4) ?
    VAR_4 : VAR_5;
  VAR_9->req.arg[3] |= VAR_10->pvid << 16;
  VAR_9->req.arg[1] |= VAR_12;
 }

 return 0;
}
