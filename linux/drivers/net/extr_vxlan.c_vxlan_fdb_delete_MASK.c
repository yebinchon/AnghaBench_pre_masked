
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union vxlan_addr {int dummy; } vxlan_addr ;
typedef size_t u32 ;
typedef int u16 ;
struct vxlan_dev {int * hash_lock; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct ndmsg {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;


 int FUNC_0 (struct vxlan_dev*,unsigned char const*,union vxlan_addr,int ,int ,int ,size_t,int) ;
 size_t FUNC_1 (struct vxlan_dev*,unsigned char const*,int ) ;
 struct vxlan_dev* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nlattr**,struct vxlan_dev*,union vxlan_addr*,int *,int *,int *,size_t*) ;

__attribute__((used)) static int FUNC_6(struct ndmsg *VAR_0, struct nlattr *VAR_1[],
       struct net_device *VAR_2,
       const unsigned char *VAR_3, u16 VAR_4)
{
 struct vxlan_dev *VAR_5 = FUNC_2(VAR_2);
 union vxlan_addr VAR_6;
 __be32 VAR_7, VAR_8;
 __be16 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = FUNC_5(VAR_1, VAR_5, &VAR_6, &VAR_9, &VAR_7, &VAR_8, &VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_11 = FUNC_1(VAR_5, VAR_3, VAR_7);
 FUNC_3(&VAR_5->hash_lock[VAR_11]);
 VAR_12 = FUNC_0(VAR_5, VAR_3, VAR_6, VAR_9, VAR_7, VAR_8, VAR_10,
     1);
 FUNC_4(&VAR_5->hash_lock[VAR_11]);

 return VAR_12;
}
