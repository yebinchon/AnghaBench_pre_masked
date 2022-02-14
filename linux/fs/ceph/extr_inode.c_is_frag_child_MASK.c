
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ceph_inode_frag {scalar_t__ frag; scalar_t__ split_by; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static bool FUNC_4(u32 VAR_0, struct ceph_inode_frag *VAR_1)
{
 if (!VAR_1)
  return VAR_0 == FUNC_2(0, 0);
 if (FUNC_0(VAR_0) != FUNC_0(VAR_1->frag) + VAR_1->split_by)
  return 0;
 return FUNC_1(VAR_1->frag, FUNC_3(VAR_0));
}
