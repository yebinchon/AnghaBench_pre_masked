
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int v4_addr; int v6_addr; } ;
struct iscsi_path {TYPE_1__ src; int * mac_addr; int vlan_id; int handle; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct cnic_sock {int flags; int * ha; int * src_ip; int vlan_id; } ;
struct cnic_local {struct cnic_sock* csk_tbl; int * ulp_ops; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_sock*) ;
 int FUNC_2 (struct cnic_local*,struct cnic_sock*,int ) ;
 int FUNC_3 (struct cnic_sock*) ;
 int FUNC_4 (struct cnic_sock*) ;
 int FUNC_5 (struct cnic_sock*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct cnic_dev *VAR_10, u32 VAR_11,
      char *VAR_12, u16 VAR_13)
{
 int VAR_14 = -VAR_1;

 switch (VAR_11) {
 case 128: {
  struct cnic_local *VAR_15;
  u32 VAR_16;
  struct cnic_sock *VAR_17;
  struct iscsi_path *VAR_18;

  if (VAR_13 < sizeof(*VAR_18))
   break;

  VAR_18 = (struct iscsi_path *) VAR_12;
  VAR_15 = VAR_10->cnic_priv;
  VAR_16 = (u32) VAR_18->handle;
  if (VAR_16 >= VAR_5)
   break;

  if (!FUNC_8(VAR_15->ulp_ops[VAR_0])) {
   VAR_14 = -VAR_2;
   break;
  }
  VAR_17 = &VAR_15->csk_tbl[VAR_16];
  FUNC_4(VAR_17);
  if (FUNC_3(VAR_17) &&
      FUNC_9(VAR_6, &VAR_17->flags)) {

   VAR_17->vlan_id = VAR_18->vlan_id;

   FUNC_7(VAR_17->ha, VAR_18->mac_addr, VAR_3);
   if (FUNC_9(VAR_7, &VAR_17->flags))
    FUNC_7(&VAR_17->src_ip[0], &VAR_18->src.v6_addr,
           sizeof(struct in6_addr));
   else
    FUNC_7(&VAR_17->src_ip[0], &VAR_18->src.v4_addr,
           sizeof(struct in_addr));

   if (FUNC_6(VAR_17->ha)) {
    FUNC_1(VAR_17);
   } else if (!FUNC_9(VAR_9, &VAR_17->flags) &&
    !FUNC_9(VAR_8, &VAR_17->flags)) {

    FUNC_2(VAR_15, VAR_17,
     VAR_4);
    FUNC_0(VAR_6, &VAR_17->flags);
   }
  }
  FUNC_5(VAR_17);
  VAR_14 = 0;
 }
 }

 return VAR_14;
}
