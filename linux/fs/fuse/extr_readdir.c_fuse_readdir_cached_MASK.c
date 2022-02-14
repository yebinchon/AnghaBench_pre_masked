
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_mtime; } ;
struct TYPE_3__ {int size; scalar_t__ iversion; scalar_t__ version; int lock; int mtime; int cached; } ;
struct fuse_inode {TYPE_1__ rdc; } ;
struct TYPE_4__ {scalar_t__ pos; int cache_off; scalar_t__ version; } ;
struct fuse_file {TYPE_2__ readdir; } ;
struct fuse_conn {scalar_t__ auto_inval_data; } ;
struct file {int f_mapping; struct fuse_file* private_data; } ;
struct dir_context {scalar_t__ pos; } ;
typedef int pgoff_t ;
typedef enum fuse_parse_result { ____Placeholder_fuse_parse_result } fuse_parse_result ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 struct inode* FUNC_2 (struct file*) ;
 struct page* FUNC_3 (int ,int,int) ;
 int FUNC_4 (struct fuse_file*,void*,unsigned int,struct dir_context*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct file*) ;
 struct fuse_conn* FUNC_7 (struct inode*) ;
 struct fuse_inode* FUNC_8 (struct inode*) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 scalar_t__ FUNC_10 (struct inode*) ;
 void* FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*) ;
 int FUNC_13 (struct page*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (struct page*) ;

__attribute__((used)) static int FUNC_18(struct file *VAR_10, struct dir_context *VAR_11)
{
 struct fuse_file *VAR_12 = VAR_10->private_data;
 struct inode *VAR_13 = FUNC_2(VAR_10);
 struct fuse_conn *VAR_14 = FUNC_7(VAR_13);
 struct fuse_inode *VAR_15 = FUNC_8(VAR_13);
 enum fuse_parse_result VAR_16;
 pgoff_t VAR_17;
 unsigned int VAR_18;
 struct page *VAR_19;
 void *VAR_20;


 if (VAR_12->readdir.pos != VAR_11->pos) {
  VAR_12->readdir.pos = 0;
  VAR_12->readdir.cache_off = 0;
 }





 if (!VAR_11->pos && VAR_14->auto_inval_data) {
  int VAR_21 = FUNC_6(VAR_13, VAR_10);

  if (VAR_21)
   return VAR_21;
 }

retry:
 FUNC_14(&VAR_15->rdc.lock);
retry_locked:
 if (!VAR_15->rdc.cached) {

  if (!VAR_11->pos && !VAR_15->rdc.size) {
   VAR_15->rdc.mtime = VAR_13->i_mtime;
   VAR_15->rdc.iversion = FUNC_10(VAR_13);
  }
  FUNC_15(&VAR_15->rdc.lock);
  return VAR_9;
 }





 if (!VAR_11->pos) {
  if (FUNC_9(VAR_13) != VAR_15->rdc.iversion ||
      !FUNC_16(&VAR_15->rdc.mtime, &VAR_13->i_mtime)) {
   FUNC_5(VAR_13);
   goto retry_locked;
  }
 }





 if (VAR_12->readdir.version != VAR_15->rdc.version) {
  VAR_12->readdir.pos = 0;
  VAR_12->readdir.cache_off = 0;
 }




 if (VAR_12->readdir.pos == 0)
  VAR_12->readdir.version = VAR_15->rdc.version;

 FUNC_1(VAR_15->rdc.size < VAR_12->readdir.cache_off);

 VAR_17 = VAR_12->readdir.cache_off >> VAR_7;

 if (VAR_17 == (VAR_15->rdc.size >> VAR_7))
  VAR_18 = VAR_15->rdc.size & ~VAR_6;
 else
  VAR_18 = VAR_8;
 FUNC_15(&VAR_15->rdc.lock);


 if ((VAR_12->readdir.cache_off & ~VAR_6) == VAR_18)
  return 0;

 VAR_19 = FUNC_3(VAR_10->f_mapping, VAR_17,
       VAR_1 | VAR_2);
 FUNC_14(&VAR_15->rdc.lock);
 if (!VAR_19) {



  if (VAR_15->rdc.version == VAR_12->readdir.version)
   FUNC_5(VAR_13);
  goto retry_locked;
 }


 if (VAR_12->readdir.version != VAR_15->rdc.version) {
  FUNC_15(&VAR_15->rdc.lock);
  FUNC_17(VAR_19);
  FUNC_13(VAR_19);
  goto retry;
 }
 FUNC_15(&VAR_15->rdc.lock);





 VAR_20 = FUNC_11(VAR_19);
 VAR_16 = FUNC_4(VAR_12, VAR_20, VAR_18, VAR_11);
 FUNC_12(VAR_19);
 FUNC_17(VAR_19);
 FUNC_13(VAR_19);

 if (VAR_16 == VAR_4)
  return -VAR_0;

 if (VAR_16 == VAR_3)
  return 0;

 if (VAR_18 == VAR_8) {

  VAR_12->readdir.cache_off = FUNC_0(VAR_12->readdir.cache_off, VAR_8);
  goto retry;
 }






 return VAR_16 == VAR_5 ? 0 : VAR_9;
}
