
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union nilfs_bmap_ptr_req {int bpr_req; int bpr_ptr; } ;
struct TYPE_2__ {void* bi_blkoff; void* bi_vblocknr; } ;
union nilfs_binfo {TYPE_1__ bi_v; } ;
struct nilfs_bmap {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sector_t ;
typedef int __u64 ;


 void* FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct nilfs_bmap*) ;
 int FUNC_2 (struct inode*,int *,int ) ;
 int FUNC_3 (struct inode*,int *) ;

__attribute__((used)) static int FUNC_4(struct nilfs_bmap *VAR_0,
     __u64 VAR_1, __u64 VAR_2,
     struct buffer_head **VAR_3,
     sector_t VAR_4,
     union nilfs_binfo *VAR_5)
{
 struct inode *VAR_6 = FUNC_1(VAR_0);
 union nilfs_bmap_ptr_req VAR_7;
 int VAR_8;

 VAR_7.bpr_ptr = VAR_2;
 VAR_8 = FUNC_3(VAR_6, &VAR_7.bpr_req);
 if (!VAR_8) {
  FUNC_2(VAR_6, &VAR_7.bpr_req, VAR_4);
  VAR_5->bi_v.bi_vblocknr = FUNC_0(VAR_2);
  VAR_5->bi_v.bi_blkoff = FUNC_0(VAR_1);
 }
 return VAR_8;
}
