
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ctime; int i_mtime; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static inline void FUNC_2(struct inode *VAR_1)
{
 VAR_1->i_mtime = VAR_1->i_ctime = FUNC_1(VAR_1);

}
