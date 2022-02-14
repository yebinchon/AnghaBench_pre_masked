
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v9fs_inode {int cache_validity; } ;
struct inode {int dummy; } ;


 struct v9fs_inode* FUNC_0 (struct inode*) ;
 int VAR_0 ;

__attribute__((used)) static inline void FUNC_1(struct inode *VAR_1)
{
 struct v9fs_inode *VAR_2;
 VAR_2 = FUNC_0(VAR_1);
 VAR_2->cache_validity |= VAR_0;
 return;
}
