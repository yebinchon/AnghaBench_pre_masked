
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_inode_info {scalar_t__ i_subdirs; scalar_t__ i_files; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,size_t,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_1(struct ceph_inode_info *VAR_0, char *VAR_1,
      size_t VAR_2)
{
 return FUNC_0(VAR_1, VAR_2, "%lld", VAR_0->i_files + VAR_0->i_subdirs);
}
