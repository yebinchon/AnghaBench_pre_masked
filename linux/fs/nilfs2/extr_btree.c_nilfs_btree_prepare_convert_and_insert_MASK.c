
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nilfs_bmap_ptr_req {scalar_t__ bpr_ptr; } ;
struct nilfs_bmap_stats {scalar_t__ bs_nblocks; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int __u64 ;


 scalar_t__ FUNC_0 (struct nilfs_bmap*) ;
 int FUNC_1 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 struct inode* FUNC_2 (struct nilfs_bmap*) ;
 int FUNC_3 (struct nilfs_bmap*,union nilfs_bmap_ptr_req*,struct inode*) ;
 scalar_t__ FUNC_4 (struct nilfs_bmap*,int *,int ) ;
 int FUNC_5 (struct nilfs_bmap*,scalar_t__,struct buffer_head**) ;

__attribute__((used)) static int
FUNC_6(struct nilfs_bmap *VAR_0, __u64 VAR_1,
           union nilfs_bmap_ptr_req *VAR_2,
           union nilfs_bmap_ptr_req *VAR_3,
           struct buffer_head **VAR_4,
           struct nilfs_bmap_stats *VAR_5)
{
 struct buffer_head *VAR_6;
 struct inode *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_5->bs_nblocks = 0;



 if (FUNC_0(VAR_0)) {
  VAR_2->bpr_ptr = FUNC_4(VAR_0, ((void*)0), VAR_1);
  VAR_7 = FUNC_2(VAR_0);
 }

 VAR_8 = FUNC_3(VAR_0, VAR_2, VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 *VAR_4 = ((void*)0);
 VAR_5->bs_nblocks++;
 if (VAR_3 != ((void*)0)) {
  VAR_3->bpr_ptr = VAR_2->bpr_ptr + 1;
  VAR_8 = FUNC_3(VAR_0, VAR_3, VAR_7);
  if (VAR_8 < 0)
   goto err_out_dreq;

  VAR_8 = FUNC_5(VAR_0, VAR_3->bpr_ptr, &VAR_6);
  if (VAR_8 < 0)
   goto err_out_nreq;

  *VAR_4 = VAR_6;
  VAR_5->bs_nblocks++;
 }


 return 0;


 err_out_nreq:
 FUNC_1(VAR_0, VAR_3, VAR_7);
 err_out_dreq:
 FUNC_1(VAR_0, VAR_2, VAR_7);
 VAR_5->bs_nblocks = 0;
 return VAR_8;

}
