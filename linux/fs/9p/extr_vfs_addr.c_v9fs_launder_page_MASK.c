
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct inode*,struct page*) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static int FUNC_3(struct page *VAR_0)
{
 int VAR_1;
 struct inode *VAR_2 = VAR_0->mapping->host;

 FUNC_1(VAR_2, VAR_0);
 if (FUNC_0(VAR_0)) {
  VAR_1 = FUNC_2(VAR_0);
  if (VAR_1)
   return VAR_1;
 }
 return 0;
}
