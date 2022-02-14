
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int b_blocknr; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; int ip_alloc_sem; } ;
struct TYPE_3__ {int s_blocksize_bits; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (int ,char*,unsigned long long,unsigned long long) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct inode*,int,int*,int*,int *) ;
 int FUNC_8 (int ,int,int,struct buffer_head**,int,int (*) (struct super_block*,struct buffer_head*)) ;
 int FUNC_9 (struct inode*,unsigned long long,int,struct buffer_head**,int,int (*) (struct super_block*,struct buffer_head*)) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct inode *VAR_3, u64 VAR_4, int VAR_5,
      struct buffer_head *VAR_6[], int VAR_7,
      int (*VAR_8)(struct super_block *VAR_9,
        struct buffer_head *VAR_10))
{
 int VAR_11 = 0;
 u64 VAR_12, VAR_13;
 int VAR_14, VAR_15, VAR_16 = 0;

 FUNC_9(
      VAR_3, (unsigned long long)VAR_4, VAR_5, VAR_6, VAR_7,
      VAR_8);

 if (((VAR_4 + VAR_5 - 1) << VAR_3->i_sb->s_blocksize_bits) >=
     FUNC_4(VAR_3)) {
  FUNC_0(!(VAR_7 & VAR_2));
  goto out;
 }

 while (VAR_16 < VAR_5) {
  FUNC_3(&FUNC_2(VAR_3)->ip_alloc_sem);
  VAR_11 = FUNC_7(VAR_3, VAR_4 + VAR_16,
       &VAR_12, &VAR_13, ((void*)0));
  FUNC_10(&FUNC_2(VAR_3)->ip_alloc_sem);
  if (VAR_11) {
   FUNC_6(VAR_11);
   break;
  }

  if (!VAR_12) {
   VAR_11 = -VAR_0;
   FUNC_5(VAR_1,
        "Inode #%llu contains a hole at offset %llu\n",
        (unsigned long long)FUNC_2(VAR_3)->ip_blkno,
        (unsigned long long)(VAR_4 + VAR_16) <<
        VAR_3->i_sb->s_blocksize_bits);
   break;
  }

  VAR_15 = VAR_5 - VAR_16;
  if (VAR_13 < VAR_15)
   VAR_15 = VAR_13;






  for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
   if (!VAR_6[VAR_16 + VAR_14])
    continue;
   FUNC_0(VAR_6[VAR_16 + VAR_14]->b_blocknr != (VAR_12 + VAR_14));
  }

  VAR_11 = FUNC_8(FUNC_1(VAR_3), VAR_12, VAR_15,
           VAR_6 + VAR_16, VAR_7, VAR_8);
  if (VAR_11) {
   FUNC_6(VAR_11);
   break;
  }
  VAR_16 += VAR_15;
 }

out:
 return VAR_11;
}
