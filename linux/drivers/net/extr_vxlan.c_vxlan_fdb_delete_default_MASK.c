
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct vxlan_fdb {int dummy; } ;
struct vxlan_dev {int * hash_lock; } ;
typedef int __be32 ;


 struct vxlan_fdb* FUNC_0 (struct vxlan_dev*,int ,int ) ;
 int VAR_0 ;
 size_t FUNC_1 (struct vxlan_dev*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct vxlan_dev*,struct vxlan_fdb*,int,int) ;

__attribute__((used)) static void FUNC_5(struct vxlan_dev *VAR_1, __be32 VAR_2)
{
 struct vxlan_fdb *VAR_3;
 u32 VAR_4 = FUNC_1(VAR_1, VAR_0, VAR_2);

 FUNC_2(&VAR_1->hash_lock[VAR_4]);
 VAR_3 = FUNC_0(VAR_1, VAR_0, VAR_2);
 if (VAR_3)
  FUNC_4(VAR_1, VAR_3, 1, 1);
 FUNC_3(&VAR_1->hash_lock[VAR_4]);
}
