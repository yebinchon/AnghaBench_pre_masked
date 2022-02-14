
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
typedef int uint ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 long FUNC_0 (struct inode*,struct file*,int ,int ) ;
 int VAR_0 ;
 struct inode* FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static long FUNC_4(struct file *VAR_1, uint VAR_2, ulong VAR_3)
{
 struct inode *VAR_4;
 long VAR_5;

 VAR_4 = FUNC_1(VAR_1);

 FUNC_2(&VAR_0);
 VAR_5 = FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
 FUNC_3(&VAR_0);

 return VAR_5;
}
