
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct buffer_head {scalar_t__ b_blocknr; int b_size; int * b_page; } ;
typedef int sector_t ;
struct TYPE_2__ {int i_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*,int ,struct buffer_head*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_3,
      sector_t VAR_4,
      struct buffer_head *VAR_5,
      int VAR_6)
{
 int VAR_7;

 VAR_5->b_page = ((void*)0);






 VAR_5->b_size = FUNC_3(VAR_3);

 VAR_7 = FUNC_5(VAR_3, VAR_4, VAR_5,
     VAR_6 | VAR_1);
 if (VAR_7)
  goto out;


 if (FUNC_1(VAR_5) && VAR_5->b_blocknr == 0) {




  FUNC_2(VAR_5);
  VAR_7 = -VAR_0;
 }





 if (FUNC_0(VAR_3)->i_flags & VAR_2) {
  int VAR_8;

  FUNC_6(VAR_3->i_sb);

  VAR_8 = FUNC_4(VAR_3);
  FUNC_0(VAR_3)->i_flags &= ~VAR_2;

  FUNC_7(VAR_3->i_sb);

  if (VAR_8 < 0)
   VAR_7 = VAR_8;
 }
out:
 return VAR_7;
}
