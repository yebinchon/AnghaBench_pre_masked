
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_cpfile_header {int ch_ncheckpoints; } ;
struct nilfs_checkpoint {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (struct nilfs_checkpoint*) ;
 scalar_t__ FUNC_10 (struct nilfs_checkpoint*) ;
 int FUNC_11 (struct inode*,struct buffer_head*,void*,int) ;
 struct nilfs_checkpoint* FUNC_12 (struct inode*,int,struct buffer_head*,void*) ;
 struct nilfs_cpfile_header* FUNC_13 (struct inode*,struct buffer_head*,void*) ;
 int FUNC_14 (struct inode*,int,int,struct buffer_head**) ;
 int FUNC_15 (struct inode*,struct buffer_head**) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (int *) ;

int FUNC_21(struct inode *VAR_2,
    __u64 VAR_3,
    int VAR_4,
    struct nilfs_checkpoint **VAR_5,
    struct buffer_head **VAR_6)
{
 struct buffer_head *VAR_7, *VAR_8;
 struct nilfs_cpfile_header *VAR_9;
 struct nilfs_checkpoint *VAR_10;
 void *VAR_11;
 int VAR_12;

 if (FUNC_19(VAR_3 < 1 || VAR_3 > FUNC_17(VAR_2) ||
       (VAR_3 < FUNC_17(VAR_2) && VAR_4)))
  return -VAR_0;

 FUNC_2(&FUNC_0(VAR_2)->mi_sem);

 VAR_12 = FUNC_15(VAR_2, &VAR_7);
 if (VAR_12 < 0)
  goto out_sem;
 VAR_12 = FUNC_14(VAR_2, VAR_3, VAR_4, &VAR_8);
 if (VAR_12 < 0)
  goto out_header;
 VAR_11 = FUNC_3(VAR_8->b_page);
 VAR_10 = FUNC_12(VAR_2, VAR_3, VAR_8, VAR_11);
 if (FUNC_10(VAR_10)) {
  if (!VAR_4) {
   FUNC_5(VAR_8->b_page);
   FUNC_1(VAR_8);
   VAR_12 = -VAR_1;
   goto out_header;
  }

  FUNC_9(VAR_10);
  if (!FUNC_16(VAR_2, VAR_3))
   FUNC_11(VAR_2, VAR_8,
         VAR_11, 1);
  FUNC_8(VAR_8);

  VAR_11 = FUNC_4(VAR_7->b_page);
  VAR_9 = FUNC_13(VAR_2, VAR_7,
             VAR_11);
  FUNC_7(&VAR_9->ch_ncheckpoints, 1);
  FUNC_6(VAR_11);
  FUNC_8(VAR_7);
  FUNC_18(VAR_2);
 }

 if (VAR_5 != ((void*)0))
  *VAR_5 = VAR_10;
 *VAR_6 = VAR_8;

 out_header:
 FUNC_1(VAR_7);

 out_sem:
 FUNC_20(&FUNC_0(VAR_2)->mi_sem);
 return VAR_12;
}
