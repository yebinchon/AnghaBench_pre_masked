
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct io_ring_ctx {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct io_ring_ctx* private_data; } ;


 int FUNC_0 (struct io_ring_ctx*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct io_ring_ctx *VAR_2 = VAR_1->private_data;

 VAR_1->private_data = ((void*)0);
 FUNC_0(VAR_2);
 return 0;
}
