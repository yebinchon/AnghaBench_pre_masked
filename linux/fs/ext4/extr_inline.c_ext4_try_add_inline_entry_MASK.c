
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct ext4_iloc {int bh; } ;
struct ext4_filename {int dummy; } ;
typedef int handle_t ;
struct TYPE_4__ {int i_inline_size; } ;
struct TYPE_3__ {scalar_t__ i_block; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct ext4_filename*,struct inode*,struct inode*,struct ext4_iloc*,void*,int) ;
 int FUNC_3 (int *,struct inode*,struct ext4_iloc*) ;
 void* FUNC_4 (struct inode*,struct ext4_iloc*) ;
 int FUNC_5 (struct inode*,struct ext4_iloc*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *,struct inode*) ;
 TYPE_1__* FUNC_8 (struct ext4_iloc*) ;
 int FUNC_9 (int *,struct inode*,struct ext4_iloc*) ;
 int FUNC_10 (struct inode*,int*) ;
 int FUNC_11 (struct inode*,int*) ;

int FUNC_12(handle_t *VAR_3, struct ext4_filename *VAR_4,
         struct inode *VAR_5, struct inode *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 void *VAR_10;
 struct ext4_iloc VAR_11;

 VAR_7 = FUNC_5(VAR_5, &VAR_11);
 if (VAR_7)
  return VAR_7;

 FUNC_10(VAR_5, &VAR_9);
 if (!FUNC_6(VAR_5))
  goto out;

 VAR_10 = (void *)FUNC_8(&VAR_11)->i_block +
       VAR_1;
 VAR_8 = VAR_2 - VAR_1;

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, &VAR_11,
     VAR_10, VAR_8);
 if (VAR_7 != -VAR_0)
  goto out;


 VAR_8 = FUNC_0(VAR_5)->i_inline_size -
   VAR_2;
 if (!VAR_8) {

  VAR_7 = FUNC_9(VAR_3, VAR_5, &VAR_11);
  if (VAR_7 && VAR_7 != -VAR_0)
   goto out;

  VAR_8 = FUNC_0(VAR_5)->i_inline_size -
    VAR_2;
 }

 if (VAR_8) {
  VAR_10 = FUNC_4(VAR_5, &VAR_11);

  VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5,
      VAR_6, &VAR_11, VAR_10,
      VAR_8);

  if (VAR_7 != -VAR_0)
   goto out;
 }






 VAR_7 = FUNC_3(VAR_3, VAR_5, &VAR_11);

out:
 FUNC_11(VAR_5, &VAR_9);
 FUNC_7(VAR_3, VAR_5);
 FUNC_1(VAR_11.bh);
 return VAR_7;
}
