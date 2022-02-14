
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct coda_inode_info {int c_flags; int c_lock; } ;


 struct coda_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static __inline__ void FUNC_3(struct inode *VAR_0, int VAR_1)
{
 struct coda_inode_info *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(&VAR_2->c_lock);
 VAR_2->c_flags |= VAR_1;
 FUNC_2(&VAR_2->c_lock);
}
