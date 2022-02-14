
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {unsigned int i_size; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
typedef unsigned int loff_t ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (struct inode*,unsigned int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, struct address_space *VAR_1,
     loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
     struct page *VAR_5, void *VAR_6)
{
 struct inode *VAR_7 = VAR_5->mapping->host;
 loff_t VAR_8 = VAR_2 + VAR_4;
 if (VAR_8 > VAR_7->i_size)
  FUNC_0(VAR_7, VAR_8);
 FUNC_2(VAR_5);
 FUNC_3(VAR_5);
 FUNC_1(VAR_5);
 return VAR_4;
}
