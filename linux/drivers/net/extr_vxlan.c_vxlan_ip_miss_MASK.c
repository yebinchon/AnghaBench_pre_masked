
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_addr {int dummy; } vxlan_addr ;
struct vxlan_rdst {int remote_vni; union vxlan_addr remote_ip; } ;
struct vxlan_fdb {int state; } ;
struct vxlan_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct vxlan_dev* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int ,int,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3, union vxlan_addr *VAR_4)
{
 struct vxlan_dev *VAR_5 = FUNC_1(VAR_3);
 struct vxlan_fdb VAR_6 = {
  .state = VAR_0,
 };
 struct vxlan_rdst VAR_7 = {
  .remote_ip = *VAR_4,
  .remote_vni = FUNC_0(VAR_2),
 };

 FUNC_2(VAR_5, &VAR_6, &VAR_7, VAR_1, 1, ((void*)0));
}
