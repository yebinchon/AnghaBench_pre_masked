
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct eventfd_ctx* private_data; } ;
struct eventfd_ctx {int wqh; } ;


 int VAR_0 ;
 int FUNC_0 (struct eventfd_ctx*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 struct eventfd_ctx *VAR_3 = VAR_2->private_data;

 FUNC_1(&VAR_3->wqh, VAR_0);
 FUNC_0(VAR_3);
 return 0;
}
