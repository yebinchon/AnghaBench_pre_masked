
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_size; } ;
struct ext4_iloc {int dummy; } ;
typedef int handle_t ;
struct TYPE_2__ {int i_inline_size; int i_disksize; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,struct ext4_iloc*) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *,struct inode*,int) ;
 int FUNC_5 (struct inode*,struct ext4_iloc*) ;

__attribute__((used)) static int FUNC_6(handle_t *VAR_2, struct inode *VAR_3,
      struct ext4_iloc *VAR_4)
{
 int VAR_5;
 int VAR_6 = FUNC_1(VAR_3)->i_inline_size - VAR_1;
 int VAR_7 = FUNC_5(VAR_3, VAR_4);

 if (VAR_7 - VAR_6 <= FUNC_0(1))
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_2, VAR_3,
          VAR_7 + VAR_1);
 if (VAR_5)
  return VAR_5;

 FUNC_3(FUNC_2(VAR_3, VAR_4), VAR_6,
        FUNC_1(VAR_3)->i_inline_size -
      VAR_1);
 VAR_3->i_size = FUNC_1(VAR_3)->i_disksize = FUNC_1(VAR_3)->i_inline_size;
 return 0;
}
