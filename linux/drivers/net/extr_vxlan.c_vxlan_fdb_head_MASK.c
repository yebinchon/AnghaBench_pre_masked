
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vxlan_dev {struct hlist_head* fdb_head; } ;
struct hlist_head {int dummy; } ;
typedef int __be32 ;


 size_t FUNC_0 (struct vxlan_dev*,int const*,int ) ;

__attribute__((used)) static inline struct hlist_head *FUNC_1(struct vxlan_dev *VAR_0,
      const u8 *VAR_1, __be32 VAR_2)
{
 return &VAR_0->fdb_head[FUNC_0(VAR_0, VAR_1, VAR_2)];
}
