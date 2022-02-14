
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dnode_of_data {int cur_level; int max_level; int inode; } ;
typedef unsigned int pgoff_t ;


 unsigned int FUNC_0 (int ) ;
 long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int VAR_0 ;
 int FUNC_3 (int ,int) ;

pgoff_t FUNC_4(struct dnode_of_data *VAR_1, pgoff_t VAR_2)
{
 const long VAR_3 = FUNC_1(VAR_1->inode);
 const long VAR_4 = FUNC_0(VAR_1->inode);
 const long VAR_5 = FUNC_0(VAR_1->inode) * VAR_0;
 unsigned int VAR_6 = FUNC_0(VAR_1->inode);
 int VAR_7 = VAR_1->cur_level;
 int VAR_8 = VAR_1->max_level;
 pgoff_t VAR_9 = 0;

 if (!VAR_1->max_level)
  return VAR_2 + 1;

 while (VAR_8-- > VAR_7)
  VAR_6 *= VAR_0;

 switch (VAR_1->max_level) {
 case 3:
  VAR_9 += 2 * VAR_5;

 case 2:
  VAR_9 += 2 * VAR_4;

 case 1:
  VAR_9 += VAR_3;
  break;
 default:
  FUNC_3(FUNC_2(VAR_1->inode), 1);
 }

 return ((VAR_2 - VAR_9) / VAR_6 + 1) * VAR_6 + VAR_9;
}
