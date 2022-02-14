
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;
struct block_device {int dummy; } ;


 struct block_device* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;
 int FUNC_2 (struct block_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct inode * VAR_0, struct file * VAR_1)
{
 struct block_device *VAR_2 = FUNC_0(FUNC_1(VAR_1));
 FUNC_2(VAR_2, VAR_1->f_mode);
 return 0;
}
