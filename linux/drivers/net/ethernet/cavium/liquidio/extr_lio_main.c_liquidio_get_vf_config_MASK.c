
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int id; scalar_t__ active; } ;
struct TYPE_7__ {int num_vfs_alloced; int* vf_vlantci; int * vf_spoofchk; int * vf_linkstate; TYPE_1__ trusted_vf; int * vf_macaddr; } ;
struct octeon_device {TYPE_2__ sriov_info; } ;
struct net_device {int dummy; } ;
struct TYPE_8__ {int speed; } ;
struct TYPE_9__ {TYPE_3__ s; } ;
struct TYPE_10__ {TYPE_4__ link; } ;
struct lio {TYPE_5__ linfo; struct octeon_device* oct_dev; } ;
struct ifla_vf_info {int vf; int vlan; int qos; int trusted; scalar_t__ min_tx_rate; int max_tx_rate; int spoofchk; int linkstate; int * mac; } ;


 int VAR_0 ;
 struct lio* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct ifla_vf_info*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, int VAR_4,
      struct ifla_vf_info *VAR_5)
{
 struct lio *VAR_6 = FUNC_0(VAR_3);
 struct octeon_device *VAR_7 = VAR_6->oct_dev;
 u8 *VAR_8;

 if (VAR_4 < 0 || VAR_4 >= VAR_7->sriov_info.num_vfs_alloced)
  return -VAR_0;

 FUNC_2(VAR_5, 0, sizeof(struct ifla_vf_info));

 VAR_5->vf = VAR_4;
 VAR_8 = 2 + (u8 *)&VAR_7->sriov_info.vf_macaddr[VAR_4];
 FUNC_1(&VAR_5->mac[0], VAR_8);
 VAR_5->vlan = VAR_7->sriov_info.vf_vlantci[VAR_4] & VAR_2;
 VAR_5->qos = VAR_7->sriov_info.vf_vlantci[VAR_4] >> VAR_1;
 if (VAR_7->sriov_info.trusted_vf.active &&
     VAR_7->sriov_info.trusted_vf.id == VAR_4)
  VAR_5->trusted = 1;
 else
  VAR_5->trusted = 0;
 VAR_5->linkstate = VAR_7->sriov_info.vf_linkstate[VAR_4];
 VAR_5->spoofchk = VAR_7->sriov_info.vf_spoofchk[VAR_4];
 VAR_5->max_tx_rate = VAR_6->linfo.link.s.speed;
 VAR_5->min_tx_rate = 0;

 return 0;
}
