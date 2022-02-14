
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, struct page *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  FUNC_1(VAR_2);
 else
  VAR_3 = 0;
 return VAR_3;
}
