
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct inode {int i_sb; } ;


 int VAR_0 ;
 struct inode* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct inode*,int ) ;
 int FUNC_4 (int ,char*) ;
 struct inode* FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int) ;

__attribute__((used)) static struct inode *FUNC_7(struct inode *VAR_2, umode_t VAR_3)
{
 struct inode *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_5(VAR_2->i_sb);
 if (!VAR_4) {
  FUNC_4(VAR_1, "new_inode failed!\n");
  return FUNC_0(-VAR_0);
 }




 if (FUNC_1(VAR_3))
  FUNC_6(VAR_4, 2);
 FUNC_3(VAR_4, VAR_2, VAR_3);
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);

 return VAR_4;
}
