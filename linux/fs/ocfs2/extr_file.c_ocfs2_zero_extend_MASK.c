
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {struct super_block* i_sb; } ;
struct buffer_head {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {scalar_t__ ip_blkno; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__) ;
 int FUNC_4 (struct inode*,struct buffer_head*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__,struct buffer_head*) ;
 int FUNC_6 (unsigned long long,unsigned long long,unsigned long long) ;

int FUNC_7(struct inode *VAR_0, struct buffer_head *VAR_1,
        loff_t VAR_2)
{
 int VAR_3 = 0;
 u64 VAR_4, VAR_5 = 0, VAR_6 = 0;
 struct super_block *VAR_7 = VAR_0->i_sb;

 VAR_4 = FUNC_3(VAR_7, FUNC_1(VAR_0));
 FUNC_6((unsigned long long)FUNC_0(VAR_0)->ip_blkno,
    (unsigned long long)VAR_4,
    (unsigned long long)FUNC_1(VAR_0));
 while (VAR_4 < VAR_2) {
  VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_4,
        VAR_2,
        &VAR_5,
        &VAR_6);
  if (VAR_3) {
   FUNC_2(VAR_3);
   break;
  }
  if (!VAR_6)
   break;

  if (VAR_5 < VAR_4)
   VAR_5 = VAR_4;
  if (VAR_6 > VAR_2)
   VAR_6 = VAR_2;

  VAR_3 = FUNC_5(VAR_0, VAR_5,
           VAR_6, VAR_1);
  if (VAR_3) {
   FUNC_2(VAR_3);
   break;
  }
  VAR_4 = VAR_6;
 }

 return VAR_3;
}
