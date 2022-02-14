
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_server {int dummy; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nfs_server* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct nfs_server*,struct inode*) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_5(struct inode *VAR_4, int VAR_5)
{
 struct nfs_server *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = 0;

 if (FUNC_1(VAR_4->i_mode))
  return 0;
 if (FUNC_4(VAR_4, VAR_3)) {
  if (VAR_5 & VAR_2)
   return -VAR_1;
  VAR_7 = FUNC_2(VAR_6, VAR_4);
 }
 if (VAR_7 == 0 && !FUNC_3(VAR_4))
  VAR_7 = -VAR_0;
 return VAR_7;
}
