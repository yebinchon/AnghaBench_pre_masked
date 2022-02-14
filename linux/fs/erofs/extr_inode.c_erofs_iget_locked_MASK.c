
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
typedef int erofs_nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct super_block*,unsigned long const,int ,int ,int *) ;

__attribute__((used)) static inline struct inode *FUNC_2(struct super_block *VAR_2,
           erofs_nid_t VAR_3)
{
 const unsigned long VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, VAR_4, VAR_1,
  VAR_0, &VAR_3);
}
