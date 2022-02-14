
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct f2fs_inode {int i_inline; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*,int ) ;

__attribute__((used)) static void FUNC_2(struct inode *VAR_4, struct f2fs_inode *VAR_5)
{
 if (VAR_5->i_inline & VAR_1)
  FUNC_1(VAR_4, VAR_3);
 else
  FUNC_0(VAR_4, VAR_3);
 if (VAR_5->i_inline & VAR_0)
  FUNC_1(VAR_4, VAR_2);
 else
  FUNC_0(VAR_4, VAR_2);
}
