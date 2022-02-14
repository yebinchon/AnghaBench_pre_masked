
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct inode* host; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (TYPE_1__*,int *,struct page*,int,int) ;
 int FUNC_2 (struct inode*,struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, struct page *VAR_2)
{
 int VAR_3 = -VAR_0;
 struct inode *VAR_4 = VAR_2->mapping->host;

 FUNC_3(VAR_2);

 if (FUNC_0(VAR_4))
  VAR_3 = FUNC_2(VAR_4, VAR_2);

 if (VAR_3 == -VAR_0)
  return FUNC_1(VAR_2->mapping, ((void*)0), VAR_2, 1,
      0);

 return VAR_3;
}
