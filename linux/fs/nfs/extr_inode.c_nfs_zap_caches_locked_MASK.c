
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfs_inode {int cookieverf; int attrtimeo_timestamp; int attrtimeo; } ;
struct inode {int i_mode; } ;


 int VAR_0 ;
 struct nfs_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct nfs_inode*) ;

__attribute__((used)) static void FUNC_9(struct inode *VAR_7)
{
 struct nfs_inode *VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = VAR_7->i_mode;

 FUNC_6(VAR_7, VAR_0);

 VAR_8->attrtimeo = FUNC_1(VAR_7);
 VAR_8->attrtimeo_timestamp = VAR_6;

 FUNC_5(FUNC_0(VAR_7)->cookieverf, 0, sizeof(FUNC_0(VAR_7)->cookieverf));
 if (FUNC_4(VAR_9) || FUNC_2(VAR_9) || FUNC_3(VAR_9)) {
  FUNC_7(VAR_7, VAR_3
     | VAR_4
     | VAR_1
     | VAR_2
     | VAR_5);
 } else
  FUNC_7(VAR_7, VAR_3
     | VAR_1
     | VAR_2
     | VAR_5);
 FUNC_8(VAR_8);
}
