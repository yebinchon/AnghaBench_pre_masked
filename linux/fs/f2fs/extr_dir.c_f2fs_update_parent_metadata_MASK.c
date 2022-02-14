
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ctime; int i_mtime; int i_mode; } ;
struct TYPE_2__ {unsigned int i_current_depth; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,unsigned int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct inode*,int) ;
 scalar_t__ FUNC_7 (struct inode*,int ) ;

void FUNC_8(struct inode *VAR_2, struct inode *VAR_3,
      unsigned int VAR_4)
{
 if (VAR_3 && FUNC_7(VAR_3, VAR_1)) {
  if (FUNC_1(VAR_3->i_mode))
   FUNC_5(VAR_2, 1);
  FUNC_2(VAR_3, VAR_1);
 }
 VAR_2->i_mtime = VAR_2->i_ctime = FUNC_3(VAR_2);
 FUNC_6(VAR_2, 0);

 if (FUNC_0(VAR_2)->i_current_depth != VAR_4)
  FUNC_4(VAR_2, VAR_4);

 if (VAR_3 && FUNC_7(VAR_3, VAR_0))
  FUNC_2(VAR_3, VAR_0);
}
