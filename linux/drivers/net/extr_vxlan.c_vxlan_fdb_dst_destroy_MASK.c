
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxlan_rdst {int rcu; int list; } ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int ,int,int *) ;

__attribute__((used)) static void FUNC_3(struct vxlan_dev *VAR_2, struct vxlan_fdb *VAR_3,
      struct vxlan_rdst *VAR_4, bool VAR_5)
{
 FUNC_1(&VAR_4->list);
 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_0, VAR_5, ((void*)0));
 FUNC_0(&VAR_4->rcu, VAR_1);
}
