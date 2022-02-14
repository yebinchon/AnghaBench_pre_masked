
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct inode {int dummy; } ;


 scalar_t__ FUNC_0 (struct inode*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct ocfs2_super*,unsigned long,unsigned int,int ) ;

__attribute__((used)) static unsigned int
FUNC_3(struct ocfs2_super *VAR_4,
         unsigned long VAR_5, unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_3;
 struct inode *VAR_8 = ((void*)0);
 int VAR_9;

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, 0);
 if (FUNC_0(VAR_8)) {
  VAR_9 = (int)(-(long)VAR_8);
  if (VAR_9 >= VAR_2 &&
      VAR_9 < VAR_0)
   VAR_7 = VAR_9;
  else
   VAR_7 = VAR_1;
 } else
  FUNC_1(VAR_8);

 return VAR_7;
}
