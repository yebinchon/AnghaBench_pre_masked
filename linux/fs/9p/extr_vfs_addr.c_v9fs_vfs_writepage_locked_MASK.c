
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v9fs_inode {int writeback_fid; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct iov_iter {int dummy; } ;
struct inode {int dummy; } ;
struct bio_vec {int bv_len; scalar_t__ bv_offset; struct page* bv_page; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct v9fs_inode* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct iov_iter*,int ,struct bio_vec*,int,int) ;
 int FUNC_5 (int ,int ,struct iov_iter*,int*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;

__attribute__((used)) static int FUNC_8(struct page *VAR_4)
{
 struct inode *VAR_5 = VAR_4->mapping->host;
 struct v9fs_inode *VAR_6 = FUNC_1(VAR_5);
 loff_t VAR_7 = FUNC_3(VAR_5);
 struct iov_iter VAR_8;
 struct bio_vec VAR_9;
 int VAR_10, VAR_11;

 if (VAR_4->index == VAR_7 >> VAR_1)
  VAR_11 = VAR_7 & ~VAR_0;
 else
  VAR_11 = VAR_2;

 VAR_9.bv_page = VAR_4;
 VAR_9.bv_offset = 0;
 VAR_9.bv_len = VAR_11;
 FUNC_4(&VAR_8, VAR_3, &VAR_9, 1, VAR_11);


 FUNC_0(!VAR_6->writeback_fid);

 FUNC_7(VAR_4);

 FUNC_5(VAR_6->writeback_fid, FUNC_6(VAR_4), &VAR_8, &VAR_10);

 FUNC_2(VAR_4);
 return VAR_10;
}
