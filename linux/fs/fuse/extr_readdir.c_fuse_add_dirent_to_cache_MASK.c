
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {int dummy; } ;
struct TYPE_2__ {scalar_t__ pos; scalar_t__ version; scalar_t__ size; int lock; scalar_t__ cached; } ;
struct fuse_inode {TYPE_1__ rdc; } ;
struct fuse_dirent {scalar_t__ off; } ;
struct file {int f_mapping; } ;
typedef scalar_t__ pgoff_t ;
typedef scalar_t__ loff_t ;


 size_t FUNC_0 (struct fuse_dirent*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct file*) ;
 struct page* FUNC_4 (int ,scalar_t__) ;
 struct page* FUNC_5 (int ,scalar_t__,int ) ;
 struct fuse_inode* FUNC_6 (int ) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (void*,struct fuse_dirent*,size_t) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static void FUNC_15(struct file *VAR_3,
         struct fuse_dirent *VAR_4, loff_t VAR_5)
{
 struct fuse_inode *VAR_6 = FUNC_6(FUNC_3(VAR_3));
 size_t VAR_7 = FUNC_0(VAR_4);
 pgoff_t VAR_8;
 struct page *VAR_9;
 loff_t VAR_10;
 u64 VAR_11;
 unsigned int VAR_12;
 void *VAR_13;

 FUNC_12(&VAR_6->rdc.lock);




 if (VAR_6->rdc.cached || VAR_5 != VAR_6->rdc.pos) {
  FUNC_13(&VAR_6->rdc.lock);
  return;
 }
 VAR_11 = VAR_6->rdc.version;
 VAR_10 = VAR_6->rdc.size;
 VAR_12 = VAR_10 & ~VAR_0;
 VAR_8 = VAR_10 >> VAR_1;

 if (VAR_12 + VAR_7 > VAR_2) {
  VAR_8++;
  VAR_12 = 0;
 }
 FUNC_13(&VAR_6->rdc.lock);

 if (VAR_12) {
  VAR_9 = FUNC_4(VAR_3->f_mapping, VAR_8);
 } else {
  VAR_9 = FUNC_5(VAR_3->f_mapping, VAR_8,
        FUNC_9(VAR_3->f_mapping));
 }
 if (!VAR_9)
  return;

 FUNC_12(&VAR_6->rdc.lock);

 if (VAR_6->rdc.version != VAR_11 || VAR_6->rdc.size != VAR_10 ||
     FUNC_1(VAR_6->rdc.pos != VAR_5))
  goto unlock;

 VAR_13 = FUNC_7(VAR_9);
 if (!VAR_12)
  FUNC_2(VAR_13);
 FUNC_10(VAR_13 + VAR_12, VAR_4, VAR_7);
 FUNC_8(VAR_13);
 VAR_6->rdc.size = (VAR_8 << VAR_1) + VAR_12 + VAR_7;
 VAR_6->rdc.pos = VAR_4->off;
unlock:
 FUNC_13(&VAR_6->rdc.lock);
 FUNC_14(VAR_9);
 FUNC_11(VAR_9);
}
