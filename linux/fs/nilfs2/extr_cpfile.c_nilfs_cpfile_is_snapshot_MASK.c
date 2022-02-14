
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_checkpoint {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {int mi_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (struct nilfs_checkpoint*) ;
 int FUNC_6 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_7 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 int FUNC_8 (struct inode*,scalar_t__,int ,struct buffer_head**) ;
 scalar_t__ FUNC_9 (struct inode*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct inode *VAR_1, __u64 VAR_2)
{
 struct buffer_head *VAR_3;
 struct nilfs_checkpoint *VAR_4;
 void *VAR_5;
 int VAR_6;





 if (VAR_2 == 0 || VAR_2 >= FUNC_9(VAR_1))
  return -VAR_0;
 FUNC_2(&FUNC_0(VAR_1)->mi_sem);

 VAR_6 = FUNC_8(VAR_1, VAR_2, 0, &VAR_3);
 if (VAR_6 < 0)
  goto out;
 VAR_5 = FUNC_3(VAR_3->b_page);
 VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_3, VAR_5);
 if (FUNC_5(VAR_4))
  VAR_6 = -VAR_0;
 else
  VAR_6 = FUNC_6(VAR_4);
 FUNC_4(VAR_5);
 FUNC_1(VAR_3);

 out:
 FUNC_10(&FUNC_0(VAR_1)->mi_sem);
 return VAR_6;
}
