
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {unsigned long i_size; TYPE_1__* i_sb; struct address_space* i_mapping; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_7__ {int i_flags; } ;
struct TYPE_6__ {unsigned long s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*,unsigned long,int ) ;
 int FUNC_2 (struct page*) ;
 struct page* FUNC_3 (struct address_space*,int) ;
 int VAR_2 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (int *,struct page*,unsigned long,unsigned long) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (struct page*) ;

int FUNC_13(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 struct page *VAR_7;
 struct address_space *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10 = VAR_3->i_sb->s_blocksize;

 if (VAR_3->i_size == 0) {
  FUNC_0(VAR_3)->i_flags |= VAR_2;
  return 0;
 }

 if (FUNC_0(VAR_3)->i_flags & VAR_2) {
  return 0;
 }


{
 int VAR_11 = FUNC_11(VAR_3->i_sb);
 FUNC_4(VAR_3);
 FUNC_9(VAR_3->i_sb, VAR_11);
}

 FUNC_8(VAR_3->i_sb);

 VAR_9 = VAR_3->i_size & (VAR_10 - 1);

 if (VAR_9 == 0) {
  FUNC_0(VAR_3)->i_flags |= VAR_2;
  goto out;
 }






 VAR_6 = VAR_3->i_size >> VAR_1;
 VAR_8 = VAR_3->i_mapping;
 VAR_7 = FUNC_3(VAR_8, VAR_6);
 VAR_5 = -VAR_0;
 if (!VAR_7) {
  goto out;
 }
 VAR_5 = FUNC_1(VAR_7, VAR_9, 0);
 if (VAR_5)
  goto out_unlock;


 FUNC_2(VAR_7);
 VAR_5 = FUNC_7(((void*)0), VAR_7, VAR_9, VAR_9);
 FUNC_0(VAR_3)->i_flags |= VAR_2;

out_unlock:
 FUNC_12(VAR_7);
 FUNC_6(VAR_7);

out:
 FUNC_5(VAR_3);
 FUNC_10(VAR_3->i_sb);
 return VAR_5;
}
