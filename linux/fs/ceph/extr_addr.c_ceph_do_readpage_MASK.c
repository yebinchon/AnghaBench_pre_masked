
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {int index; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct ceph_inode_info {scalar_t__ i_inline_version; int i_truncate_size; int i_truncate_seq; int i_layout; } ;
struct ceph_fs_client {int blacklisted; TYPE_1__* client; } ;
struct TYPE_2__ {int osdc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,struct page*) ;
 struct ceph_inode_info* FUNC_3 (struct inode*) ;
 struct ceph_fs_client* FUNC_4 (struct inode*) ;
 int FUNC_5 (int *,int ,int *,scalar_t__,scalar_t__*,int ,int ,struct page**,int,int ) ;
 int FUNC_6 (struct inode*,struct page*) ;
 int FUNC_7 (struct inode*,struct page*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*,struct inode*,struct file*,struct page*,int ) ;
 struct inode* FUNC_10 (struct file*) ;
 int FUNC_11 (struct page*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct page*) ;
 int FUNC_14 (struct page*,int,int) ;

__attribute__((used)) static int FUNC_15(struct file *VAR_6, struct page *VAR_7)
{
 struct inode *VAR_8 = FUNC_10(VAR_6);
 struct ceph_inode_info *VAR_9 = FUNC_3(VAR_8);
 struct ceph_fs_client *VAR_10 = FUNC_4(VAR_8);
 int VAR_11 = 0;
 u64 VAR_12 = FUNC_13(VAR_7);
 u64 VAR_13 = VAR_5;

 if (VAR_12 >= FUNC_12(VAR_8)) {
  FUNC_14(VAR_7, 0, VAR_5);
  FUNC_1(VAR_7);
  return 0;
 }

 if (VAR_9->i_inline_version != VAR_0) {




  if (VAR_12 == 0)
   return -VAR_3;
  FUNC_14(VAR_7, 0, VAR_5);
  FUNC_1(VAR_7);
  return 0;
 }

 VAR_11 = FUNC_6(VAR_8, VAR_7);
 if (VAR_11 == 0)
  return -VAR_2;

 FUNC_9("readpage inode %p file %p page %p index %lu\n",
      VAR_8, VAR_6, VAR_7, VAR_7->index);
 VAR_11 = FUNC_5(&VAR_10->client->osdc, FUNC_8(VAR_8),
      &VAR_9->i_layout, VAR_12, &VAR_13,
      VAR_9->i_truncate_seq, VAR_9->i_truncate_size,
      &VAR_7, 1, 0);
 if (VAR_11 == -VAR_4)
  VAR_11 = 0;
 if (VAR_11 < 0) {
  FUNC_0(VAR_7);
  FUNC_2(VAR_8, VAR_7);
  if (VAR_11 == -VAR_1)
   VAR_10->blacklisted = 1;
  goto out;
 }
 if (VAR_11 < VAR_5)

  FUNC_14(VAR_7, VAR_11, VAR_5);
 else
  FUNC_11(VAR_7);

 FUNC_1(VAR_7);
 FUNC_7(VAR_8, VAR_7);

out:
 return VAR_11 < 0 ? VAR_11 : 0;
}
