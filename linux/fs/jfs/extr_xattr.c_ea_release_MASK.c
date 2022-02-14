
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct ea_buffer {int flag; int new_ea; int mp; int xattr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct inode *VAR_3, struct ea_buffer *VAR_4)
{
 if (VAR_4->flag & VAR_1)
  FUNC_3(VAR_4->xattr);
 else if (VAR_4->flag & VAR_0) {
  FUNC_1(VAR_4->mp);
  FUNC_5(VAR_4->mp);

  if (VAR_4->flag & VAR_2)
   FUNC_2(VAR_3, FUNC_0(&VAR_4->new_ea),
          FUNC_4(&VAR_4->new_ea));
 }
}
