
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct net_device {int mtu; } ;
struct in6_addr {int dummy; } ;
struct dst_entry {scalar_t__ dev; } ;
struct TYPE_11__ {scalar_t__ sin_family; int sin_port; } ;
struct TYPE_8__ {scalar_t__ sin6_family; int sin6_port; } ;
struct TYPE_12__ {TYPE_4__ v4; TYPE_1__ v6; } ;
struct TYPE_9__ {int s_addr; } ;
struct TYPE_14__ {scalar_t__ sin_family; int sin_port; TYPE_2__ sin_addr; } ;
struct TYPE_13__ {scalar_t__ sin6_family; int sin6_port; int sin6_addr; } ;
struct TYPE_10__ {TYPE_7__ v4; TYPE_6__ v6; } ;
struct cnic_sockaddr {TYPE_5__ local; TYPE_3__ remote; } ;
struct cnic_sock {int src_port; int mtu; scalar_t__ vlan_id; int dst_port; int * dst_ip; int flags; struct cnic_dev* dev; } ;
struct cnic_local {int csk_port_tbl; } ;
struct cnic_dev {struct net_device* netdev; struct cnic_local* cnic_priv; } ;
typedef int __be16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_7__*,struct dst_entry**) ;
 int FUNC_5 (TYPE_6__*,struct dst_entry**) ;
 scalar_t__ FUNC_6 (scalar_t__,struct net_device**) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct dst_entry*) ;
 int FUNC_9 (struct dst_entry*) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static int FUNC_12(struct cnic_sock *VAR_7, struct cnic_sockaddr *VAR_8)
{
 struct cnic_dev *VAR_9 = VAR_7->dev;
 struct cnic_local *VAR_10 = VAR_9->cnic_priv;
 int VAR_11, VAR_12 = 0;
 struct dst_entry *VAR_13 = ((void*)0);
 struct net_device *VAR_14;
 __be16 VAR_15;
 u32 VAR_16;

 if (VAR_8->local.v6.sin6_family == VAR_1 &&
     VAR_8->remote.v6.sin6_family == VAR_1)
  VAR_11 = 1;
 else if (VAR_8->local.v4.sin_family == VAR_0 &&
   VAR_8->remote.v4.sin_family == VAR_0)
  VAR_11 = 0;
 else
  return -VAR_4;

 FUNC_1(VAR_6, &VAR_7->flags);

 if (VAR_11) {
  FUNC_11(VAR_6, &VAR_7->flags);
  FUNC_5(&VAR_8->remote.v6, &VAR_13);

  FUNC_10(&VAR_7->dst_ip[0], &VAR_8->remote.v6.sin6_addr,
         sizeof(struct in6_addr));
  VAR_7->dst_port = VAR_8->remote.v6.sin6_port;
  VAR_15 = VAR_8->local.v6.sin6_port;

 } else {
  FUNC_4(&VAR_8->remote.v4, &VAR_13);

  VAR_7->dst_ip[0] = VAR_8->remote.v4.sin_addr.s_addr;
  VAR_7->dst_port = VAR_8->remote.v4.sin_port;
  VAR_15 = VAR_8->local.v4.sin_port;
 }

 VAR_7->vlan_id = 0;
 VAR_7->mtu = VAR_9->netdev->mtu;
 if (VAR_13 && VAR_13->dev) {
  u16 VAR_17 = FUNC_6(VAR_13->dev, &VAR_14);
  if (VAR_14 == VAR_9->netdev) {
   VAR_7->vlan_id = VAR_17;
   VAR_7->mtu = FUNC_8(VAR_13);
  }
 }

 VAR_16 = FUNC_0(VAR_15);
 if (VAR_16 >= VAR_3 &&
     VAR_16 < VAR_2) {
  if (FUNC_2(&VAR_10->csk_port_tbl, VAR_16))
   VAR_16 = 0;
 } else
  VAR_16 = 0;

 if (!VAR_16) {
  VAR_16 = FUNC_3(&VAR_10->csk_port_tbl);
  if (VAR_16 == -1) {
   VAR_12 = -VAR_5;
   goto err_out;
  }
  VAR_15 = FUNC_7(VAR_16);
 }
 VAR_7->src_port = VAR_15;

err_out:
 FUNC_9(VAR_13);
 return VAR_12;
}
