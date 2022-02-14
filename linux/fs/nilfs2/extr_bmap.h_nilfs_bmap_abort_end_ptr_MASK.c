
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nilfs_bmap_ptr_req {int bpr_req; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,int *) ;

__attribute__((used)) static inline void FUNC_1(struct nilfs_bmap *VAR_0,
         union nilfs_bmap_ptr_req *VAR_1,
         struct inode *VAR_2)
{
 if (VAR_2)
  FUNC_0(VAR_2, &VAR_1->bpr_req);
}
