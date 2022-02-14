
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_blkbits; int i_sb; } ;
struct buffer_head {int b_size; } ;
typedef int sector_t ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inode*,int ,struct buffer_head*,int) ;
 int FUNC_3 (struct inode*,int) ;
 int * FUNC_4 (struct inode*,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_3, sector_t VAR_4,
    struct buffer_head *VAR_5, int VAR_6)
{
 int VAR_7;
 handle_t *VAR_8;
 int VAR_9 = 0;
 int VAR_10;


 if (VAR_5->b_size >> VAR_3->i_blkbits > VAR_0)
  VAR_5->b_size = VAR_0 << VAR_3->i_blkbits;
 VAR_7 = FUNC_3(VAR_3,
          VAR_5->b_size >> VAR_3->i_blkbits);
retry:
 VAR_8 = FUNC_4(VAR_3, VAR_2, VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_10 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_5(VAR_8);

 if (VAR_10 == -VAR_1 && FUNC_6(VAR_3->i_sb, &VAR_9))
  goto retry;
 return VAR_10;
}
