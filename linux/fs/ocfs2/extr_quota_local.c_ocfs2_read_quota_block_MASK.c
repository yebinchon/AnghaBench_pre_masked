
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {TYPE_1__* i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {scalar_t__ ip_blkno; } ;
struct TYPE_3__ {scalar_t__ s_blocksize_bits; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_4 (struct inode*,scalar_t__,int,struct buffer_head**,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_1, u64 VAR_2,
      struct buffer_head **VAR_3)
{
 int VAR_4 = 0;
 struct buffer_head *VAR_5 = *VAR_3;

 if (FUNC_1(VAR_1) >> VAR_1->i_sb->s_blocksize_bits <= VAR_2)
  return FUNC_3(VAR_1->i_sb,
    "Quota file %llu is probably corrupted! Requested to read block %Lu but file has size only %Lu\n",
    (unsigned long long)FUNC_0(VAR_1)->ip_blkno,
    (unsigned long long)VAR_2,
    (unsigned long long)FUNC_1(VAR_1));

 VAR_4 = FUNC_4(VAR_1, VAR_2, 1, &VAR_5, 0,
        VAR_0);
 if (VAR_4)
  FUNC_2(VAR_4);


 if (!VAR_4 && !*VAR_3)
  *VAR_3 = VAR_5;

 return VAR_4;
}
