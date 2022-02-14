
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {scalar_t__* i_nr_by_mode; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

int FUNC_1(struct ceph_inode_info *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->i_nr_by_mode[VAR_2])
   VAR_3 |= 1 << VAR_2;
 }
 if (VAR_3 == 0)
  return 0;
 return FUNC_0(VAR_3 >> 1);
}
