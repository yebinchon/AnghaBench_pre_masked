
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_frag_tree_split {int frag; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 struct ceph_frag_tree_split *VAR_2 = (struct ceph_frag_tree_split*)VAR_0;
 struct ceph_frag_tree_split *VAR_3 = (struct ceph_frag_tree_split*)VAR_1;
 return FUNC_0(FUNC_1(VAR_2->frag),
     FUNC_1(VAR_3->frag));
}
