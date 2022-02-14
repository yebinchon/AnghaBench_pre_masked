
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_inode {int flags; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 struct ubifs_inode* FUNC_0 (struct inode const*) ;

__attribute__((used)) static inline bool FUNC_1(const struct inode *VAR_1)
{
 const struct ubifs_inode *VAR_2 = FUNC_0(VAR_1);

 return VAR_2->flags & VAR_0;
}
