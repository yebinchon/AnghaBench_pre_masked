
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_addr {int dummy; } vxlan_addr ;
typedef int u32 ;
struct vxlan_rdst {int dummy; } ;
struct vxlan_fdb {int remotes; } ;
struct vxlan_dev {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (union vxlan_addr*) ;
 int FUNC_2 (struct vxlan_dev*,struct vxlan_fdb*,int,int) ;
 int FUNC_3 (struct vxlan_dev*,struct vxlan_fdb*,struct vxlan_rdst*,int) ;
 struct vxlan_rdst* FUNC_4 (struct vxlan_fdb*,union vxlan_addr*,int ,int ,int ) ;
 struct vxlan_fdb* FUNC_5 (struct vxlan_dev*,unsigned char const*,int ) ;

__attribute__((used)) static int FUNC_6(struct vxlan_dev *VAR_1,
         const unsigned char *VAR_2, union vxlan_addr VAR_3,
         __be16 VAR_4, __be32 VAR_5, __be32 VAR_6,
         u32 VAR_7, bool VAR_8)
{
 struct vxlan_fdb *VAR_9;
 struct vxlan_rdst *VAR_10 = ((void*)0);
 int VAR_11 = -VAR_0;

 VAR_9 = FUNC_5(VAR_1, VAR_2, VAR_5);
 if (!VAR_9)
  return VAR_11;

 if (!FUNC_1(&VAR_3)) {
  VAR_10 = FUNC_4(VAR_9, &VAR_3, VAR_4, VAR_6, VAR_7);
  if (!VAR_10)
   goto out;
 }




 if (VAR_10 && !FUNC_0(&VAR_9->remotes)) {
  FUNC_3(VAR_1, VAR_9, VAR_10, VAR_8);
  goto out;
 }

 FUNC_2(VAR_1, VAR_9, 1, VAR_8);

out:
 return 0;
}
