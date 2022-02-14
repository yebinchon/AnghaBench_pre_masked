
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_kiocb {int flags; int file; } ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct inode* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct io_kiocb *VAR_2)
{




 if (VAR_2->flags & VAR_0) {
  struct inode *VAR_3 = FUNC_2(VAR_2->file);

  FUNC_0(VAR_3->i_sb, VAR_1);
 }
 FUNC_1(VAR_2->file);
}
