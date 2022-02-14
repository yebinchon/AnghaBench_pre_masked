
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_dir_file_info {scalar_t__ frag; int last_readdir; } ;
typedef int loff_t ;


 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct ceph_dir_file_info *VAR_0, loff_t VAR_1)
{
 if (!VAR_0->last_readdir)
  return 1;
 if (FUNC_3(VAR_1))
  return !FUNC_0(VAR_0->frag, FUNC_2(VAR_1));
 else
  return VAR_0->frag != FUNC_1(VAR_1);
}
