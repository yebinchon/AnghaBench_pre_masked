
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_0, struct page *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->mapping->host, VAR_1);

 if (!VAR_2)
  FUNC_0(VAR_1);

 FUNC_2(VAR_1);

 return VAR_2;
}
