
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct fiemap_extent_info {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct fiemap_extent_info*,int ,int ) ;
 int FUNC_1 (struct fiemap_extent_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct fiemap_extent_info *VAR_2,
  __u64 VAR_3, __u64 VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0);
 if (VAR_5)
  return VAR_5;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
