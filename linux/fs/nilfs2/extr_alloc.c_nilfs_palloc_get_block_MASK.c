
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_bh_assoc {unsigned long blkoff; struct buffer_head* bh; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int spinlock_t ;


 int FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct inode*,unsigned long,int,void (*) (struct inode*,struct buffer_head*,void*),struct buffer_head**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_0, unsigned long VAR_1,
      int VAR_2,
      void (*VAR_3)(struct inode *,
           struct buffer_head *,
           void *),
      struct buffer_head **VAR_4,
      struct nilfs_bh_assoc *VAR_5,
      spinlock_t *VAR_6)
{
 int VAR_7;

 FUNC_3(VAR_6);
 if (VAR_5->bh && VAR_1 == VAR_5->blkoff) {
  FUNC_1(VAR_5->bh);
  *VAR_4 = VAR_5->bh;
  FUNC_4(VAR_6);
  return 0;
 }
 FUNC_4(VAR_6);

 VAR_7 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_7) {
  FUNC_3(VAR_6);




  FUNC_0(VAR_5->bh);
  FUNC_1(*VAR_4);
  VAR_5->bh = *VAR_4;
  VAR_5->blkoff = VAR_1;
  FUNC_4(VAR_6);
 }
 return VAR_7;
}
