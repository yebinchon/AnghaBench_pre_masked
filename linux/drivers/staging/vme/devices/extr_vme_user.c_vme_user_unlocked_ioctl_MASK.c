
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_rdev; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int mutex; } ;


 unsigned int FUNC_0 (int ) ;
 struct inode* FUNC_1 (struct file*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long
FUNC_5(struct file *VAR_1, unsigned int VAR_2, unsigned long VAR_3)
{
 int VAR_4;
 struct inode *VAR_5 = FUNC_1(VAR_1);
 unsigned int VAR_6 = FUNC_0(VAR_5->i_rdev);

 FUNC_2(&VAR_0[VAR_6].mutex);
 VAR_4 = FUNC_4(VAR_5, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_0[VAR_6].mutex);

 return VAR_4;
}
