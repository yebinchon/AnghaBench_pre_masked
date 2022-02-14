
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; } ;
struct iattr {int ia_valid; int ia_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_1(struct inode *VAR_10, struct iattr *VAR_11)
{

 if (VAR_11->ia_valid & VAR_4) {
  VAR_11->ia_mode &= VAR_6;
  VAR_11->ia_mode |= (VAR_10->i_mode & ~VAR_6);
 }


 if (!FUNC_0(VAR_10->i_mode) &&
     ((VAR_11->ia_valid & VAR_5) || (VAR_11->ia_valid & VAR_0))) {
  VAR_11->ia_valid |= VAR_1;
  if (VAR_11->ia_valid & VAR_4) {

   VAR_11->ia_mode &= ~VAR_8;
   if (VAR_11->ia_mode & VAR_9)
    VAR_11->ia_mode &= ~VAR_7;
  } else {

   VAR_11->ia_valid |= (VAR_3 | VAR_2);
  }
 }
}
