
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_state; } ;
struct CodaFid {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long FUNC_1 (struct CodaFid*) ;
 int VAR_1 ;
 struct inode* FUNC_2 (struct super_block*,unsigned long,int ,struct CodaFid*) ;

struct inode *FUNC_3(struct CodaFid *VAR_2, struct super_block *VAR_3)
{
 struct inode *VAR_4;
 unsigned long VAR_5 = FUNC_1(VAR_2);

 VAR_4 = FUNC_2(VAR_3, VAR_5, VAR_1, VAR_2);
 if ( !VAR_4 )
  return ((void*)0);



 FUNC_0(VAR_4->i_state & VAR_0);

 return VAR_4;
}
