
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct page {scalar_t__ index; } ;
struct inode {int dummy; } ;
struct TYPE_7__ {int write_flags; } ;
struct TYPE_8__ {TYPE_1__ in; } ;
struct TYPE_9__ {int in_pages; int end; } ;
struct fuse_args_pages {int num_pages; TYPE_4__* descs; struct page** pages; TYPE_3__ args; } ;
struct TYPE_12__ {TYPE_2__ write; struct fuse_args_pages ap; } ;
struct fuse_writepage_args {int writepages_entry; struct inode* inode; int * next; TYPE_6__ ia; } ;
struct fuse_inode {int lock; int writepages; } ;
struct fuse_fill_wb_data {int max_pages; struct page** orig_pages; struct fuse_writepage_args* wpa; scalar_t__ ff; struct inode* inode; } ;
struct fuse_conn {int max_pages; int max_write; } ;
struct TYPE_11__ {int wb; } ;
struct TYPE_10__ {int length; scalar_t__ offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (struct page*,struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*,scalar_t__) ;
 int FUNC_5 (struct fuse_fill_wb_data*) ;
 int FUNC_6 (TYPE_6__*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 (struct fuse_conn*,struct fuse_inode*) ;
 struct fuse_writepage_args* FUNC_8 () ;
 int VAR_8 ;
 scalar_t__ FUNC_9 (struct fuse_writepage_args*,struct page*) ;
 int FUNC_10 (struct fuse_fill_wb_data*) ;
 struct fuse_conn* FUNC_11 (struct inode*) ;
 struct fuse_inode* FUNC_12 (struct inode*) ;
 int FUNC_13 (struct page*,int ) ;
 int FUNC_14 (int *,int ) ;
 TYPE_5__* FUNC_15 (struct inode*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (struct page*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct page*) ;

__attribute__((used)) static int FUNC_22(struct page *VAR_9,
  struct writeback_control *VAR_10, void *VAR_11)
{
 struct fuse_fill_wb_data *VAR_12 = VAR_11;
 struct fuse_writepage_args *VAR_13 = VAR_12->wpa;
 struct fuse_args_pages *VAR_14 = &VAR_13->ia.ap;
 struct inode *VAR_15 = VAR_12->inode;
 struct fuse_inode *VAR_16 = FUNC_12(VAR_15);
 struct fuse_conn *VAR_17 = FUNC_11(VAR_15);
 struct page *VAR_18;
 bool VAR_19;
 int VAR_20;

 if (!VAR_12->ff) {
  VAR_20 = -VAR_0;
  VAR_12->ff = FUNC_7(VAR_17, VAR_16);
  if (!VAR_12->ff)
   goto out_unlock;
 }







 VAR_19 = FUNC_4(VAR_15, VAR_9->index);

 if (VAR_13 && VAR_14->num_pages &&
     (VAR_19 || VAR_14->num_pages == VAR_17->max_pages ||
      (VAR_14->num_pages + 1) * VAR_5 > VAR_17->max_write ||
      VAR_12->orig_pages[VAR_14->num_pages - 1]->index + 1 != VAR_9->index)) {
  FUNC_10(VAR_12);
  VAR_12->wpa = ((void*)0);
 } else if (VAR_13 && VAR_14->num_pages == VAR_12->max_pages) {
  if (!FUNC_5(VAR_12)) {
   FUNC_10(VAR_12);
   VAR_12->wpa = ((void*)0);
  }
 }

 VAR_20 = -VAR_1;
 VAR_18 = FUNC_1(VAR_3 | VAR_7);
 if (!VAR_18)
  goto out_unlock;
 if (VAR_12->wpa == ((void*)0)) {
  VAR_20 = -VAR_1;
  VAR_13 = FUNC_8();
  if (!VAR_13) {
   FUNC_0(VAR_18);
   goto out_unlock;
  }
  VAR_12->max_pages = 1;

  VAR_14 = &VAR_13->ia.ap;
  FUNC_6(&VAR_13->ia, VAR_12->ff, FUNC_17(VAR_9), 0);
  VAR_13->ia.write.in.write_flags |= VAR_2;
  VAR_13->next = ((void*)0);
  VAR_14->args.in_pages = 1;
  VAR_14->args.end = VAR_8;
  VAR_14->num_pages = 0;
  VAR_13->inode = VAR_15;

  FUNC_19(&VAR_16->lock);
  FUNC_16(&VAR_13->writepages_entry, &VAR_16->writepages);
  FUNC_20(&VAR_16->lock);

  VAR_12->wpa = VAR_13;
 }
 FUNC_18(VAR_9);

 FUNC_2(VAR_18, VAR_9);
 VAR_14->pages[VAR_14->num_pages] = VAR_18;
 VAR_14->descs[VAR_14->num_pages].offset = 0;
 VAR_14->descs[VAR_14->num_pages].length = VAR_5;

 FUNC_14(&FUNC_15(VAR_15)->wb, VAR_6);
 FUNC_13(VAR_18, VAR_4);

 VAR_20 = 0;
 if (VAR_19 && FUNC_9(VAR_13, VAR_9)) {
  FUNC_3(VAR_9);
  VAR_12->wpa = ((void*)0);
  goto out_unlock;
 }
 VAR_12->orig_pages[VAR_14->num_pages] = VAR_9;





 FUNC_19(&VAR_16->lock);
 VAR_14->num_pages++;
 FUNC_20(&VAR_16->lock);

out_unlock:
 FUNC_21(VAR_9);

 return VAR_20;
}
