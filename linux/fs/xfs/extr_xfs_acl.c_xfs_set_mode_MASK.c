
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ umode_t ;
struct inode {scalar_t__ i_mode; } ;
struct iattr {int ia_valid; int ia_ctime; scalar_t__ ia_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,struct iattr*,int ) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_3, umode_t VAR_4)
{
 int VAR_5 = 0;

 if (VAR_4 != VAR_3->i_mode) {
  struct iattr VAR_6;

  VAR_6.ia_valid = VAR_1 | VAR_0;
  VAR_6.ia_mode = VAR_4;
  VAR_6.ia_ctime = FUNC_1(VAR_3);

  VAR_5 = FUNC_2(FUNC_0(VAR_3), &VAR_6, VAR_2);
 }

 return VAR_5;
}
