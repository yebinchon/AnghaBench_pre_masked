
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct page *VAR_0)
{
 struct inode *VAR_1 = VAR_0->mapping->host;
 if (FUNC_3(VAR_1)) {
  FUNC_0(VAR_0);
  return FUNC_2(VAR_0);
 }
 return FUNC_1(VAR_0);
}
