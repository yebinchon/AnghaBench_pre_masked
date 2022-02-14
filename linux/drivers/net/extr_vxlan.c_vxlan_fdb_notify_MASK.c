
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {int dummy; } ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;




 int FUNC_0 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int) ;
 int FUNC_1 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_2(struct vxlan_dev *VAR_0, struct vxlan_fdb *VAR_1,
       struct vxlan_rdst *VAR_2, int VAR_3, bool VAR_4,
       struct netlink_ext_ack *VAR_5)
{
 int VAR_6;

 if (VAR_4) {
  switch (VAR_3) {
  case 128:
   VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2,
         1, VAR_5);
   if (VAR_6)
    return VAR_6;
   break;
  case 129:
   FUNC_1(VAR_0, VAR_1, VAR_2,
          0, VAR_5);
   break;
  }
 }

 FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 return 0;
}
