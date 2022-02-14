
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
typedef int handle_t ;
struct TYPE_2__ {unsigned int s_blocksize; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct address_space*,int,int) ;
 int VAR_1 ;
 int FUNC_2 (struct inode*,int,int,int *,int *) ;

__attribute__((used)) static int FUNC_3(handle_t *VAR_2,
  struct address_space *VAR_3, loff_t VAR_4, loff_t VAR_5)
{
 struct inode *VAR_6 = VAR_3->host;
 unsigned VAR_7 = VAR_4 & (VAR_0-1);
 unsigned VAR_8 = VAR_6->i_sb->s_blocksize;
 unsigned VAR_9 = VAR_8 - (VAR_7 & (VAR_8 - 1));





 if (VAR_5 > VAR_9 || VAR_5 < 0)
  VAR_5 = VAR_9;

 if (FUNC_0(VAR_6)) {
  return FUNC_2(VAR_6, VAR_4, VAR_5, ((void*)0),
     &VAR_1);
 }
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
