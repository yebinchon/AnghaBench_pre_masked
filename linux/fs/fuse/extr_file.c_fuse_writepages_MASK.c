
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct fuse_fill_wb_data {int orig_pages; int * ff; TYPE_3__* wpa; struct inode* inode; } ;
struct fuse_conn {int max_pages; } ;
struct address_space {struct inode* host; } ;
struct TYPE_4__ {int num_pages; } ;
struct TYPE_5__ {TYPE_1__ ap; } ;
struct TYPE_6__ {TYPE_2__ ia; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int VAR_3 ;
 int FUNC_2 (struct fuse_fill_wb_data*) ;
 struct fuse_conn* FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct address_space*,struct writeback_control*,int ,struct fuse_fill_wb_data*) ;

__attribute__((used)) static int FUNC_8(struct address_space *VAR_4,
      struct writeback_control *VAR_5)
{
 struct inode *VAR_6 = VAR_4->host;
 struct fuse_conn *VAR_7 = FUNC_3(VAR_6);
 struct fuse_fill_wb_data VAR_8;
 int VAR_9;

 VAR_9 = -VAR_0;
 if (FUNC_4(VAR_6))
  goto out;

 VAR_8.inode = VAR_6;
 VAR_8.wpa = ((void*)0);
 VAR_8.ff = ((void*)0);

 VAR_9 = -VAR_1;
 VAR_8.orig_pages = FUNC_5(VAR_7->max_pages,
      sizeof(struct page *),
      VAR_2);
 if (!VAR_8.orig_pages)
  goto out;

 VAR_9 = FUNC_7(VAR_4, VAR_5, VAR_3, &VAR_8);
 if (VAR_8.wpa) {

  FUNC_0(!VAR_8.wpa->ia.ap.num_pages);
  FUNC_2(&VAR_8);
  VAR_9 = 0;
 }
 if (VAR_8.ff)
  FUNC_1(VAR_8.ff, 0, 0);

 FUNC_6(VAR_8.orig_pages);
out:
 return VAR_9;
}
