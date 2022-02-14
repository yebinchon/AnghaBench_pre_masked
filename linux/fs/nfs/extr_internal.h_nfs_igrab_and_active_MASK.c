
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 struct inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline struct inode *FUNC_3(struct inode *VAR_0)
{
 VAR_0 = FUNC_0(VAR_0);
 if (VAR_0 != ((void*)0) && !FUNC_2(VAR_0->i_sb)) {
  FUNC_1(VAR_0);
  VAR_0 = ((void*)0);
 }
 return VAR_0;
}
