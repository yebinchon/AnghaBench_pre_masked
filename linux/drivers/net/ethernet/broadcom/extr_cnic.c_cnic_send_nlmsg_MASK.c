
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_2__ {int v4_addr; int v6_addr; } ;
struct iscsi_path {int ip_addr_len; int pmtu; int vlan_id; TYPE_1__ dst; scalar_t__ handle; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct cnic_ulp_ops {int (* iscsi_nl_send_msg ) (int ,scalar_t__,char*,int) ;} ;
struct cnic_uio_dev {int uio_dev; } ;
struct cnic_sock {int mtu; int vlan_id; int * dst_ip; int flags; scalar_t__ l5_cid; } ;
struct cnic_local {int * ulp_handle; int * ulp_ops; struct cnic_uio_dev* udev; } ;
typedef int path_req ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (struct iscsi_path*,int ,int) ;
 int FUNC_2 (int) ;
 struct cnic_ulp_ops* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,scalar_t__,char*,int) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct cnic_local *VAR_5, u32 VAR_6,
      struct cnic_sock *VAR_7)
{
 struct iscsi_path VAR_8;
 char *VAR_9 = ((void*)0);
 u16 VAR_10 = 0;
 u32 VAR_11 = VAR_2;
 struct cnic_ulp_ops *VAR_12;
 struct cnic_uio_dev *VAR_13 = VAR_5->udev;
 int VAR_14 = 0, VAR_15 = 0;

 if (!VAR_13 || VAR_13->uio_dev == -1)
  return -VAR_1;

 if (VAR_7) {
  VAR_10 = sizeof(VAR_8);
  VAR_9 = (char *) &VAR_8;
  FUNC_1(&VAR_8, 0, VAR_10);

  VAR_11 = VAR_3;
  VAR_8.handle = (u64) VAR_7->l5_cid;
  if (FUNC_7(VAR_4, &VAR_7->flags)) {
   FUNC_0(&VAR_8.dst.v6_addr, &VAR_7->dst_ip[0],
          sizeof(struct in6_addr));
   VAR_8.ip_addr_len = 16;
  } else {
   FUNC_0(&VAR_8.dst.v4_addr, &VAR_7->dst_ip[0],
          sizeof(struct in_addr));
   VAR_8.ip_addr_len = 4;
  }
  VAR_8.vlan_id = VAR_7->vlan_id;
  VAR_8.pmtu = VAR_7->mtu;
 }

 while (VAR_15 < 3) {
  VAR_14 = 0;
  FUNC_4();
  VAR_12 = FUNC_3(VAR_5->ulp_ops[VAR_0]);
  if (VAR_12)
   VAR_14 = VAR_12->iscsi_nl_send_msg(
    VAR_5->ulp_handle[VAR_0],
    VAR_11, VAR_9, VAR_10);
  FUNC_5();
  if (VAR_14 == 0 || VAR_11 != VAR_3)
   break;

  FUNC_2(100);
  VAR_15++;
 }
 return VAR_14;
}
