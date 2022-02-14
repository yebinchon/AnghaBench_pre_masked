
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ceph_vino {int dummy; } ;
typedef int ino_t ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_vino) ;
 struct inode* FUNC_1 (struct super_block*,int ,int ,struct ceph_vino*) ;

__attribute__((used)) static inline struct inode *FUNC_2(struct super_block *VAR_1,
         struct ceph_vino VAR_2)
{
 ino_t VAR_3 = FUNC_0(VAR_2);
 return FUNC_1(VAR_1, VAR_3, VAR_0, &VAR_2);
}
