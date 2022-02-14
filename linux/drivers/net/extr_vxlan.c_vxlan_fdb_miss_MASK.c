
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_rdst {int dummy; } ;
struct vxlan_fdb {int eth_addr; int state; } ;
struct vxlan_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int ,int,int *) ;

__attribute__((used)) static void FUNC_2(struct vxlan_dev *VAR_3, const u8 VAR_4[VAR_0])
{
 struct vxlan_fdb VAR_5 = {
  .state = VAR_1,
 };
 struct vxlan_rdst VAR_6 = { };

 FUNC_0(VAR_5.eth_addr, VAR_4, VAR_0);

 FUNC_1(VAR_3, &VAR_5, &VAR_6, VAR_2, 1, ((void*)0));
}
