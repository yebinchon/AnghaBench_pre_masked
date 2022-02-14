
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; scalar_t__ i_blocks; scalar_t__ i_size; int i_data; int i_nlink; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;

void FUNC_11(struct inode * VAR_0)
{
 int VAR_1 = 0;

 if (!VAR_0->i_nlink && !FUNC_6(VAR_0))
  VAR_1 = 1;

 FUNC_7(&VAR_0->i_data);
 if (VAR_1) {
  VAR_0->i_size = 0;
  if (VAR_0->i_blocks &&
      (FUNC_2(VAR_0->i_mode) || FUNC_0(VAR_0->i_mode) ||
       FUNC_1(VAR_0->i_mode)))
   FUNC_9(VAR_0);
  FUNC_10(VAR_0, FUNC_4(VAR_0));
 }

 FUNC_5(VAR_0);
 FUNC_3(VAR_0);

 if (VAR_1)
  FUNC_8(VAR_0);
}
