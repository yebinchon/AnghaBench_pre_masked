
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct inode {scalar_t__ i_blocks; int i_lock; } ;


 int FUNC_0 (struct inode*,unsigned int) ;
 int FUNC_1 (struct inode*,unsigned int) ;
 unsigned int FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static bool FUNC_6(struct inode *VAR_0, unsigned VAR_1)
{
 unsigned VAR_2 = VAR_1 * FUNC_2(VAR_0);
 FUNC_3(&VAR_0->i_lock);
 FUNC_0(VAR_0, VAR_2);
 if (FUNC_5((u32)VAR_0->i_blocks != VAR_0->i_blocks)) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_4(&VAR_0->i_lock);
  return 0;
 }
 FUNC_4(&VAR_0->i_lock);
 return 1;
}
