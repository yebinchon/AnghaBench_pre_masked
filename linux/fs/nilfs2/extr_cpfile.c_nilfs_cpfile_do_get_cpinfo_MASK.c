
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nilfs_cpinfo {scalar_t__ ci_cno; } ;
struct nilfs_checkpoint {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int b_page; } ;
typedef int ssize_t ;
typedef scalar_t__ __u64 ;
struct TYPE_2__ {size_t mi_entry_size; int mi_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct nilfs_checkpoint*) ;
 struct nilfs_checkpoint* FUNC_7 (struct inode*,scalar_t__,struct buffer_head*,void*) ;
 int FUNC_8 (struct inode*,struct nilfs_checkpoint*,struct nilfs_cpinfo*) ;
 int FUNC_9 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_10 (struct inode*,scalar_t__,scalar_t__,scalar_t__*,struct buffer_head**) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static ssize_t FUNC_13(struct inode *VAR_1, __u64 *VAR_2,
       void *VAR_3, unsigned int VAR_4,
       size_t VAR_5)
{
 struct nilfs_checkpoint *VAR_6;
 struct nilfs_cpinfo *VAR_7 = VAR_3;
 struct buffer_head *VAR_8;
 size_t VAR_9 = FUNC_0(VAR_1)->mi_entry_size;
 __u64 VAR_10 = FUNC_11(VAR_1), VAR_11 = *VAR_2;
 void *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;

 if (VAR_11 == 0)
  return -VAR_0;
 FUNC_2(&FUNC_0(VAR_1)->mi_sem);

 for (VAR_13 = 0; VAR_13 < VAR_5; VAR_11 += VAR_15) {
  VAR_14 = FUNC_10(
   VAR_1, VAR_11, VAR_10 - 1, &VAR_11, &VAR_8);
  if (VAR_14 < 0) {
   if (FUNC_5(VAR_14 == -VAR_0))
    break;
   goto out;
  }
  VAR_15 = FUNC_9(VAR_1, VAR_11, VAR_10);

  VAR_12 = FUNC_3(VAR_8->b_page);
  VAR_6 = FUNC_7(VAR_1, VAR_11, VAR_8, VAR_12);
  for (VAR_16 = 0; VAR_16 < VAR_15 && VAR_13 < VAR_5; VAR_16++, VAR_6 = (void *)VAR_6 + VAR_9) {
   if (!FUNC_6(VAR_6)) {
    FUNC_8(VAR_1, VAR_6,
          VAR_7);
    VAR_7 = (void *)VAR_7 + VAR_4;
    VAR_13++;
   }
  }
  FUNC_4(VAR_12);
  FUNC_1(VAR_8);
 }

 VAR_14 = VAR_13;
 if (VAR_13 > 0) {
  VAR_7 = (void *)VAR_7 - VAR_4;
  *VAR_2 = VAR_7->ci_cno + 1;
 }

 out:
 FUNC_12(&FUNC_0(VAR_1)->mi_sem);
 return VAR_14;
}
