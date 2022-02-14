
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_mode; int i_sb; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,int) ;
 int FUNC_2 (struct inode*,int) ;
 struct inode* FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct inode*) ;
 struct cred* FUNC_5 (int ) ;
 int FUNC_6 (struct cred const*) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct inode *VAR_5, int VAR_6)
{
 struct inode *VAR_7 = FUNC_4(VAR_5);
 struct inode *VAR_8 = VAR_7 ?: FUNC_3(VAR_5);
 const struct cred *VAR_9;
 int VAR_10;


 if (!VAR_8) {
  FUNC_0(!(VAR_6 & VAR_2));
  return -VAR_0;
 }





 VAR_10 = FUNC_1(VAR_5, VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_5(VAR_5->i_sb);
 if (!VAR_7 &&
     !FUNC_7(VAR_8->i_mode) && VAR_6 & VAR_4) {
  VAR_6 &= ~(VAR_4 | VAR_1);

  VAR_6 |= VAR_3;
 }
 VAR_10 = FUNC_2(VAR_8, VAR_6);
 FUNC_6(VAR_9);

 return VAR_10;
}
