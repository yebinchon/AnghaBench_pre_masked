
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_addr {int dummy; } vxlan_addr ;
struct vxlan_rdst {int rcu; int list; } ;
struct vxlan_fdb {int flags; scalar_t__ state; void* used; int eth_addr; void* updated; } ;
struct vxlan_dev {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ) ;
 struct vxlan_rdst* FUNC_1 (struct vxlan_fdb*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 void* VAR_7 ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int FUNC_5 (struct vxlan_fdb*,union vxlan_addr*,int ,int ,int ,struct vxlan_rdst**) ;
 int FUNC_6 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int ,int,struct netlink_ext_ack*) ;
 int FUNC_7 (struct vxlan_fdb*,union vxlan_addr*,int ,int ,int ,struct vxlan_rdst*) ;

__attribute__((used)) static int FUNC_8(struct vxlan_dev *VAR_9,
         union vxlan_addr *VAR_10,
         __u16 VAR_11, __u16 VAR_12,
         __be16 VAR_13, __be32 VAR_14,
         __u32 VAR_15, __u16 VAR_16,
         struct vxlan_fdb *VAR_17,
         bool VAR_18,
         struct netlink_ext_ack *VAR_19)
{
 __u16 VAR_20 = (VAR_16 & ~VAR_4);
 struct vxlan_rdst *VAR_21 = ((void*)0);
 struct vxlan_rdst VAR_22;
 int VAR_23 = 0;
 int VAR_24 = 0;
 int VAR_25;




 if (!(VAR_20 & VAR_3) ||
     !(VAR_17->flags & VAR_5)) {
  if (VAR_17->state != VAR_11) {
   VAR_17->state = VAR_11;
   VAR_17->updated = VAR_7;
   VAR_23 = 1;
  }
  if (VAR_17->flags != VAR_20) {
   VAR_17->flags = VAR_20;
   VAR_17->updated = VAR_7;
   VAR_23 = 1;
  }
 }

 if ((VAR_12 & VAR_2)) {

  if (!(FUNC_2(VAR_17->eth_addr) ||
        FUNC_3(VAR_17->eth_addr))) {
   VAR_24 = FUNC_7(VAR_17, VAR_10, VAR_13, VAR_14,
            VAR_15, &VAR_22);
   VAR_23 |= VAR_24;
  } else {
   return -VAR_0;
  }
 }
 if ((VAR_12 & VAR_1) &&
     (FUNC_2(VAR_17->eth_addr) ||
      FUNC_3(VAR_17->eth_addr))) {
  VAR_24 = FUNC_5(VAR_17, VAR_10, VAR_13, VAR_14, VAR_15, &VAR_21);

  if (VAR_24 < 0)
   return VAR_24;
  VAR_23 |= VAR_24;
 }

 if (VAR_16 & VAR_4)
  VAR_17->used = VAR_7;

 if (VAR_23) {
  if (VAR_21 == ((void*)0))
   VAR_21 = FUNC_1(VAR_17);

  VAR_25 = FUNC_6(VAR_9, VAR_17, VAR_21, VAR_6,
           VAR_18, VAR_19);
  if (VAR_25)
   goto err_notify;
 }

 return 0;

err_notify:
 if ((VAR_12 & VAR_2) && VAR_24)
  *VAR_21 = VAR_22;
 else if ((VAR_12 & VAR_1) && VAR_24) {
  FUNC_4(&VAR_21->list);
  FUNC_0(&VAR_21->rcu, VAR_8);
 }
 return VAR_25;
}
