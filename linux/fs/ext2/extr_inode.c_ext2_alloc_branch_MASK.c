
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int i_mode; TYPE_2__* i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int ext2_fsblk_t ;
typedef void* __le32 ;
struct TYPE_5__ {int s_blocksize; } ;
struct TYPE_4__ {struct buffer_head* bh; void** p; void* key; } ;
typedef TYPE_1__ Indirect ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct buffer_head*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct inode*,int ,int,int,int *,int*) ;
 int FUNC_5 (struct inode*,int ,int) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*,struct inode*) ;
 int FUNC_8 (scalar_t__,int ,int) ;
 struct buffer_head* FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct buffer_head*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_1,
   int VAR_2, int *VAR_3, ext2_fsblk_t VAR_4,
   int *VAR_5, Indirect *VAR_6)
{
 int VAR_7 = VAR_1->i_sb->s_blocksize;
 int VAR_8, VAR_9 = 0;
 int VAR_10 = 0;
 struct buffer_head *VAR_11;
 int VAR_12;
 ext2_fsblk_t VAR_13[4];
 ext2_fsblk_t VAR_14;

 VAR_12 = FUNC_4(VAR_1, VAR_4, VAR_2,
    *VAR_3, VAR_13, &VAR_10);
 if (VAR_10)
  return VAR_10;

 VAR_6[0].key = FUNC_3(VAR_13[0]);



 for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {





  VAR_11 = FUNC_9(VAR_1->i_sb, VAR_13[VAR_9-1]);
  if (FUNC_12(!VAR_11)) {
   VAR_10 = -VAR_0;
   goto failed;
  }
  VAR_6[VAR_9].bh = VAR_11;
  FUNC_6(VAR_11);
  FUNC_8(VAR_11->b_data, 0, VAR_7);
  VAR_6[VAR_9].p = (__le32 *) VAR_11->b_data + VAR_5[VAR_9];
  VAR_6[VAR_9].key = FUNC_3(VAR_13[VAR_9]);
  *VAR_6[VAR_9].p = VAR_6[VAR_9].key;
  if ( VAR_9 == VAR_2) {
   VAR_14 = VAR_13[VAR_9];





   for (VAR_8=1; VAR_8 < VAR_12; VAR_8++)
    *(VAR_6[VAR_9].p + VAR_8) = FUNC_3(++VAR_14);
  }
  FUNC_10(VAR_11);
  FUNC_13(VAR_11);
  FUNC_7(VAR_11, VAR_1);




  if (FUNC_1(VAR_1->i_mode) && FUNC_0(VAR_1))
   FUNC_11(VAR_11);
 }
 *VAR_3 = VAR_12;
 return VAR_10;

failed:
 for (VAR_8 = 1; VAR_8 < VAR_9; VAR_8++)
  FUNC_2(VAR_6[VAR_8].bh);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  FUNC_5(VAR_1, VAR_13[VAR_8], 1);
 FUNC_5(VAR_1, VAR_13[VAR_8], VAR_12);
 return VAR_10;
}
