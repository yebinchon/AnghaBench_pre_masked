
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct media_request {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct media_request* private_data; } ;


 int FUNC_0 (struct media_request*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct media_request *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2);
 return 0;
}
