
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; } ;
typedef int erofs_nid_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, void *VAR_1)
{
 const erofs_nid_t VAR_2 = *(erofs_nid_t *)VAR_1;

 VAR_0->i_ino = FUNC_0(VAR_2);
 return 0;
}
