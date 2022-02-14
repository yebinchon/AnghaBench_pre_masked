
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct super_block {scalar_t__ s_blocksize_bits; } ;
struct page {int dummy; } ;
struct inode {int i_mapping; struct super_block* i_sb; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;
 struct page** FUNC_2 (int ,int,int ) ;
 int FUNC_3 (struct page**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,scalar_t__,scalar_t__*,int *,unsigned int*) ;
 int FUNC_6 (struct inode*,scalar_t__,scalar_t__,struct page**,int*) ;
 int FUNC_7 (struct super_block*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*,scalar_t__,scalar_t__,struct page**,int,scalar_t__,int *) ;

int FUNC_10(struct inode *VAR_3, handle_t *VAR_4,
      u64 VAR_5, u64 VAR_6)
{
 int VAR_7 = 0, VAR_8;
 struct page **VAR_9 = ((void*)0);
 u64 VAR_10;
 unsigned int VAR_11;
 struct super_block *VAR_12 = VAR_3->i_sb;





 if (!FUNC_8(FUNC_0(VAR_12)))
  return 0;

 VAR_9 = FUNC_2(FUNC_7(VAR_12),
   sizeof(struct page *), VAR_1);
 if (VAR_9 == ((void*)0)) {
  VAR_7 = -VAR_0;
  FUNC_4(VAR_7);
  goto out;
 }

 if (VAR_5 == VAR_6)
  goto out;

 VAR_7 = FUNC_5(VAR_3,
       VAR_5 >> VAR_12->s_blocksize_bits,
       &VAR_10, ((void*)0), &VAR_11);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out;
 }





 if (VAR_10 == 0 || VAR_11 & VAR_2)
  goto out;

 VAR_7 = FUNC_6(VAR_3, VAR_5, VAR_6, VAR_9,
       &VAR_8);
 if (VAR_7) {
  FUNC_4(VAR_7);
  goto out;
 }

 FUNC_9(VAR_3, VAR_5, VAR_6, VAR_9,
     VAR_8, VAR_10, VAR_4);






 VAR_7 = FUNC_1(VAR_3->i_mapping, VAR_5,
           VAR_6 - 1);
 if (VAR_7)
  FUNC_4(VAR_7);

out:
 FUNC_3(VAR_9);

 return VAR_7;
}
