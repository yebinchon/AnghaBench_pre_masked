
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pipe_inode_info*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct pipe_inode_info *VAR_2, unsigned int *VAR_3)
{
 int VAR_4 = *VAR_3;

 while (VAR_4 == *VAR_3) {
  FUNC_0(VAR_2);
  if (FUNC_1(VAR_1))
   break;
 }
 return VAR_4 == *VAR_3 ? -VAR_0 : 0;
}
