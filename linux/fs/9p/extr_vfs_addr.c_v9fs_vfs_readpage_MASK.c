
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int private_data; } ;


 int FUNC_0 (int ,struct page*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, struct page *VAR_1)
{
 return FUNC_0(VAR_0->private_data, VAR_1);
}
