
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct inode*,unsigned int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,size_t,int ) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_2, struct address_space *VAR_3,
  loff_t VAR_4, unsigned VAR_5, unsigned VAR_6,
  struct page *VAR_7, void *VAR_8)
{
 struct inode *VAR_9 = VAR_7->mapping->host;


 if (!VAR_6)
  goto unlock;

 if (!FUNC_0(VAR_7)) {

  size_t VAR_10 = (VAR_4 + VAR_6) & ~VAR_0;
  if (VAR_10)
   FUNC_6(VAR_7, VAR_10, VAR_1);
  FUNC_1(VAR_7);
 }

 FUNC_2(VAR_9, VAR_4 + VAR_6);
 FUNC_4(VAR_7);

unlock:
 FUNC_5(VAR_7);
 FUNC_3(VAR_7);

 return VAR_6;
}
